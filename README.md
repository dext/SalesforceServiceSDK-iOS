## Temporary home of SPM manifest and repackaged versions of Salesforce Service SDK frameworks for iOS

While Salesforce [are retooling their CI/CD](https://github.com/forcedotcom/ServiceSDK-iOS/pull/112#issuecomment-1020301545) to produce SPM compatible versions of their iOS frameworks, we will try to maintain a compatible setup ourselves.

This repo contains a SPM Package.swift manifest and repackaged versions of the frameworks. 
They are downloaded from the download link on the [official page](https://github.com/forcedotcom/ServiceSDK-iOS/wiki/Get-the-iOS-SDK#option-1-download-the-xcframework-files) as `.zip` archive (e.g. for the first version we added 238.0.0 https://dfc-data-production.s3.amazonaws.com/files/service_sdk_ios/238.0.0/ServiceSDK-238.0.0.zip).

## Problems around wrapping current ServiceSDK frameworks as SPM binary targets

In general, a framework should easily be wrapped as a [SPM binary target](https://developer.apple.com/documentation/xcode/distributing-binary-frameworks-as-swift-packages), however **ServiceSDK** frameworks are umbrella frameworks that have dependency to other internal frameworks, which is discouraged by Apple and lead to inability to submit apps to App Store Connect.

For example, if we pack the frameworks directly as binary targets, we get the following errors:

<img width="753" alt="Screen Shot 2022-06-20 at 14 53 49" src="https://user-images.githubusercontent.com/1181346/174603449-b56a54ae-2fe6-437e-8a6f-10f40ed34232.png">

The first error is caused by the `prepare-framework` binary being included in the framework itself, because this binary is actually a perl script.

Just removing the `prepare-framework` fixes the first error.

The second error, however is caused because there are subframeworks referenced within the ubmrella frameworks, for example

`ServiceCore.framework` has a subfolder `Frameworks` where there is a `ServiceCommon.framework` subframework dependency.

The [official SalesForce documentation](https://developer.salesforce.com/docs/atlas.en-us.noversion.service_sdk_ios.meta/service_sdk_ios/ios_prepare_for_appstore.htm), says that we should run the `prepare-framework` script after Embedding the frameworks in order to solve that problem. 

What this script does it to
- strip any unsupported architectures from the binary - since these are xcframeworks, there is no issue with that
- remove itself - fixing the first issue
- remove `Frameworks` subfolder from each framework - fixing the second issue
- code sign the farmeworks, if nececary - they are actually codesigned automatically, so this is unececary step, because it produced a warning

However running that script as last run script build phase does not work, because when using SPM binary targets, the embed build phase is implicit and runs after all other xcode build pahses, which leads to inability to run the script at the right time.

Well, the solution might sounds easy - just remove the `prepare-framework` script and the `Frameworks` folder from each framework in advance, directly in the package.

Actually this is the right direction, however it is causing another issue. Because the subframework headers were removed, when compiling your app, it gets a build error that these headers are missing.

Fortunately, when declaring target dependencies in SPM, all dependent submodules are automatically exposed, we can create wrapper targets for each framework and include all the nececary headers.

Even better, we can directly mimic the umbrella frameowork structure by including the `Headers`, `Frameworks` folders and the `module.modulemap` file.

Then we can remove the `Frameworks` folder from the actual xcframework for `ios-arm64` architecture, zip it and use it as binary dependency.

## Updating the frameworks in the package

Now, each time there is a new version of ServiceSDK, we have to solve the above problems. This can be done manually or automatically (see below for instructions).

## Manual update instructions

1. [Download the latest version of the SDK](https://github.com/forcedotcom/ServiceSDK-iOS/wiki/Get-the-iOS-SDK#option-1-download-the-xcframework-files) and unarchive it.
2. For `ServiceCore.xcframework` - remove the `prepare-framework` script
3. For `ServiceCases.xcframework` - remove the `#import <CaseCore/CaseCore.h>` from `ios-arm64/ServiceCases.framework/Frameworks/CaseUI.framework/Headers/SCCaseInterface+CaseUI.h` header
4. For `ServiceKnowledge.xcframework` - change the `#import <ServiceCore/ServiceCore.h>` to `@import ServiceCore;` in the `ios-arm64/ServiceKnowledge.framework/Frameworks/KnowledgeCore.framework/Headers/SCAppearanceConfiguration+Knowledge.h` header
5. For each `xcframework`:
- create a wrapper folder in the package, eg for `ServiceCore.xcframework`, create `ServiceCoreWrapper`.
- in the wrapper folder:
  - create an empty objective-c file, eg. `placeholder.m`
  - create an `include` folder
- move the `Frameworks` folder for `ios-arm64` architecture to the `include` folder, eg. `ServiceCore.xcframework/ios-arm64/ServiceCore.framework/Frameworks` -> `ServiceCoreWrapper/include/Frameworks`
- copy the `Headers` folder to `include` folder
- copy the `Modules/module.modulemap` file to `include` folder
6. Archive the modified xcframeworks and put them in the `Versions` folder
7. In the Package.swift
- declare a binary target for each xcframework archive
- declare a target for each wrapper target, that depends on the respective binary target
- add a target dependency to `ServiceSDK-iOS` for each wrapper target

## Automatic update instructions

Run `update_frameworks.sh` with a version argument, eg. `./update_frameworks.sh 238.0.0`.

This will perform the steps described above by generating the wrappers and the package description.

## Notes

Don't forget to test the package to make sure everything is working correcty, because there could be new individual cases, that has to be handled, like the need to modify another header's import.

At the end, when everytihng works correctly, commit, push and tag the updates.
