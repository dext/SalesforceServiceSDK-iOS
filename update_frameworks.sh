#!/bin/bash

function usage
{
    echo "Description: Updates the ServiceCloudSDK-iOS package contents and description for a given version of the framework"
    echo "Usage: update_frameworks.sh <version>"
}

function fail
{
    echo ""
    echo "=> $1" 1>&2
    echo ""
    usage
    echo ""
    exit 1
}

VERSION=$1

if [[ "$(ps -o comm= $PPID)" == *"Visual Studio Code.app"* ]]; then
  echo "Running from Visual Studio Code"
  echo "Enabling default arguments"
  VERSION="238.0.0"
  echo "Using version $VERSION"
fi

# require version to be supplied
[ -n "$VERSION" ] || fail "${BASH_SOURCE[0]}: line ${LINENO}: error: No <version> provided."

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
cd $SCRIPT_DIR

ARCHIVE_NAME="ServiceSDK-$VERSION"
DOWNLOAD_URL="https://dfc-data-production.s3.amazonaws.com/files/service_sdk_ios/$VERSION/$ARCHIVE_NAME.zip"

# cleanup 
rm -Rf update/$ARCHIVE_NAME
mkdir -p update

# download framework archive, if no available
if [ ! -f "update/$ARCHIVE_NAME.zip" ]; then
    echo "Downloading $DOWNLOAD_URL"
    curl -o update/$ARCHIVE_NAME.zip $DOWNLOAD_URL
fi

echo "Unarchiving $ARCHIVE_NAME.zip"
unzip -q update/$ARCHIVE_NAME.zip -d update/$ARCHIVE_NAME

# remove problematic binaries
echo "Removing prepare-framework script"
rm -f update/$ARCHIVE_NAME/Frameworks/ServiceCore.xcframework/ios-arm64/ServiceCore.framework/prepare-framework

# fix known problematic imports
# sed -i '' -e "s/search_string/replace_string/" filename
echo "Removing #import <CaseCore/CaseCore.h> from SCCaseInterface+CaseUI.h"
sed -i '' -e "s/#import <CaseCore\/CaseCore.h>//" update/$ARCHIVE_NAME/Frameworks/ServiceCases.xcframework/ios-arm64/ServiceCases.framework/Frameworks/CaseUI.framework/Headers/SCCaseInterface+CaseUI.h
echo "Replacing #import <ServiceCore/ServiceCore.h> with @import ServiceCore; in SCAppearanceConfiguration+Knowledge.h"
sed -i '' -e "s/#import <ServiceCore\/ServiceCore.h>/@import ServiceCore;/" update/$ARCHIVE_NAME/Frameworks/ServiceKnowledge.xcframework/ios-arm64/ServiceKnowledge.framework/Frameworks/KnowledgeCore.framework/Headers/SCAppearanceConfiguration+Knowledge.h

# remove existing wrappers, archives and package
rm -Rf Sources/*Wrapper
rm -Rf Versions
mkdir -p Versions/$VERSION/Frameworks

# generate wrappers, archives and prepare for package generation
TARGET_DEPENDENCIES=""
WRAPPER_TARGETS=""
BINARY_TARGETS=""

for framework_path in update/$ARCHIVE_NAME/Frameworks/*.xcframework; do
  framework_base_name=$(basename ${framework_path%.*})  # without extension, eg. MyFramework
  framework_full_name=$(basename ${framework_path})     # with extension, eg. MyFramework.xcframework
  framework_archive_name="${framework_full_name}.zip"   # eg. MyFramework.xcframework.zip
  wrapper_name="${framework_base_name}Wrapper"          # eg. MyFrameworkWrapper

  # generate wrappers
  echo "Creating $wrapper_name for ${framework_full_name}"
  mkdir -p Sources/$wrapper_name/include
  cp -R "$framework_path/ios-arm64/${framework_base_name}.framework/Headers" Sources/$wrapper_name/include/Headers
  mv "$framework_path/ios-arm64/${framework_base_name}.framework/Frameworks" Sources/$wrapper_name/include/Frameworks
  cp -R "$framework_path/ios-arm64/${framework_base_name}.framework/Modules/module.modulemap" Sources/$wrapper_name/include/module.modulemap
  touch Sources/$wrapper_name/placeholder.m

  # generate archives
  echo "Archiving $framework_full_name"
  pushd update/$ARCHIVE_NAME/Frameworks >/dev/null
  zip -q "${framework_full_name}.zip" -r "${framework_full_name}"
  popd >/dev/null
  mv "update/$ARCHIVE_NAME/Frameworks/$framework_archive_name" "Versions/$VERSION/Frameworks/$framework_archive_name"

  # prepare for package generation
  target_dependency=".target(name: \"$wrapper_name\"),"
  TARGET_DEPENDENCIES="${TARGET_DEPENDENCIES}${target_dependency}\n        "
  
  wrapper_target=".target(\n      name: \"${wrapper_name}\",\n      dependencies: [\n        .target(name: \"${framework_base_name}\")\n      ]\n    ),\n    "
  WRAPPER_TARGETS="${WRAPPER_TARGETS}${wrapper_target}"
  
  binary_target=".binaryTarget(\n      name: \"${framework_base_name}\",\n      path: \"Versions\/$VERSION\/Frameworks\/${framework_archive_name}\"\n    ),\n    "
  BINARY_TARGETS="${BINARY_TARGETS}${binary_target}"
done

echo "Generating Package.swift"
rm Package.swift
cp Package.swift.template Package.swift

sed -i '' -e "s/_TARGET_DEPENDENCIES_/${TARGET_DEPENDENCIES%??}/" Package.swift
sed -i '' -e "s/_WRAPPER_TARGETS_/$WRAPPER_TARGETS/" Package.swift
sed -i '' -e "s/_BINARY_TARGETS_/${BINARY_TARGETS%??}/" Package.swift

echo "Cleaning up"
# rm -Rf update

echo "Finished"