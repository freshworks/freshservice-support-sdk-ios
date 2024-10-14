// swift-tools-version: 5.10

import PackageDescription
let package = Package(
    name: "FSSupportSDK",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "FSSupportSDK",
            targets: ["FSSupportSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "FSSupportSDK",
            path: "FSSupportSDK.xcframework"
        ),
    ]
)