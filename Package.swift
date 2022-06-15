// swift-tools-version:5.5

import PackageDescription

let package = Package(
    name: "ServiceSDK-iOS",
    products: [
        .library(
            name: "ServiceCases",
            targets: [
                "ServiceCases",
                "ServiceCore",
            ]
        ),
        .library(
            name: "ServiceChat",
            targets: [
                "ServiceChat",
                "ServiceCore",
            ]
        ),
        .library(
            name: "ServiceKnowledge",
            targets: [
                "ServiceKnowledge",
                "ServiceCore",
            ]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "ServiceCore",
            url: "https://github.com/dext/SalesforceServiceSDK-iOS/raw/main/Versions/238.0.0/Frameworks/ServiceCore.xcframework.zip",
            checksum: "a145bc2dacdfd6fa9bf0e5ce81345a104c85858743364ce9ee2350119bdfb27a"
        ),
        .binaryTarget(
            name: "ServiceCases",
            url: "https://github.com/dext/SalesforceServiceSDK-iOS/raw/main/Versions/238.0.0/Frameworks/ServiceCases.xcframework.zip",
            checksum: "90b90b496d257dc68b6a49fa5cc393bcbee2f847de18b694bfbdd8daeb42ed65"
        ),
        .binaryTarget(
            name: "ServiceChat",
            url: "https://github.com/dext/SalesforceServiceSDK-iOS/raw/main/Versions/238.0.0/Frameworks/ServiceChat.xcframework.zip",
            checksum: "1b583f075e9490a2205897dde6f85e2be1c159cf8b88716e2763ce724e23d6a9"
        ),
        .binaryTarget(
            name: "ServiceKnowledge",
            url: "https://github.com/dext/SalesforceServiceSDK-iOS/raw/main/Versions/238.0.0/Frameworks/ServiceKnowledge.xcframework.zip",
            checksum: "278658920b6829a8550b4dba271eb9a2737371c8981d3f22e153320198a2f23b"
        ),
    ]
)
