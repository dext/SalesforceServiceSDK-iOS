// swift-tools-version:5.6

import PackageDescription

let package = Package(
  name: "ServiceSDK-iOS",
  products: [
    .library(
      name: "ServiceSDK-iOS",
      type: .static,
      targets: ["ServiceSDK-iOS"]
    ),
  ],
  targets: [
    .target(
      name: "ServiceSDK-iOS",
      dependencies: [
        .target(name: "ServiceCasesWrapper"),
        .target(name: "ServiceChatWrapper"),
        .target(name: "ServiceCoreWrapper"),
        .target(name: "ServiceKnowledgeWrapper"),
      ]
    ),
    .target(
      name: "ServiceCasesWrapper",
      dependencies: [
        .target(name: "ServiceCases")
      ]
    ),
    .target(
      name: "ServiceChatWrapper",
      dependencies: [
        .target(name: "ServiceChat")
      ]
    ),
    .target(
      name: "ServiceCoreWrapper",
      dependencies: [
        .target(name: "ServiceCore")
      ]
    ),
    .target(
      name: "ServiceKnowledgeWrapper",
      dependencies: [
        .target(name: "ServiceKnowledge")
      ]
    ),
    .binaryTarget(
      name: "ServiceCases",
      path: "Versions/238.0.0/Frameworks/ServiceCases.xcframework.zip"
    ),
    .binaryTarget(
      name: "ServiceChat",
      path: "Versions/238.0.0/Frameworks/ServiceChat.xcframework.zip"
    ),
    .binaryTarget(
      name: "ServiceCore",
      path: "Versions/238.0.0/Frameworks/ServiceCore.xcframework.zip"
    ),
    .binaryTarget(
      name: "ServiceKnowledge",
      path: "Versions/238.0.0/Frameworks/ServiceKnowledge.xcframework.zip"
    ),
  ]
)


