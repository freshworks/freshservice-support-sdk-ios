# Freshservice Support SDK Integration on iOS

This document provides a guide on how to integrate the Freshservice Support SDK into your iOS application.

The FSSupportSDK helps you add the following Freshservice support features to your mobile app:

- View Dashboard
- View my Tickets 
- Report an Issue
- Request a Service
- View Approval Requests

## Requirements

The FSSupportSDK has the following requirements:

- Minimum iOS Target: 15
- Minimum Xcode version: 14

## Integration Process

The FSSupportSDK integration process involves:

1. **Creating a new application**
    - Note: If you have an existing application, you can skip this process and proceed with adding the FSSupportSDK.
    - You can create a new application for your mobile app using Xcode.
    - In Xcode, select File > New > Project.
    - Or, select Create a new Xcode project on the Welcome to Xcode window.
    - Ensure iOS is selected on the top menu bar. Select Single View App, and click Next.
    - See the [Apple developer documentation](https://developer.apple.com/documentation/xcode/creating_a_new_project) for more information.

2. **Adding the FSSupportSDK**
    - You can add the FSSupportSDK using one of the following ways:
        - Cocoapods
        - Swift Package Manager

    - **Adding the FSSupportSDK using Cocoapods**
        - To add FSSupportSDK into your Xcode application using CocoaPods, specify it in your Podfile.
        - `pod 'FSSupportSDK'`

    - **Adding the FSSupportSDK using Swift Package Manager**
        - In the Xcode application, select File > Add Package Dependencies. Then, add the FSSupport SDK package to your app.
        - See the [Apple developer documentation](https://developer.apple.com/documentation/xcode/adding_package_dependencies_to_your_app) for more information.


3. **Initializing the FSSupportSDK**
    - Before using any of the FSSupportSDK features, you must initialize the SDK in your application.
    - The initialization process involves setting up authentication information, configuring the theme, and other necessary setup tasks.
    - Note: Set up the authentication flow using the following link to get the necessary authentication information (such as, domain, slug, and userToken).
    - [How to configure custom JWT endpoint for Freshservice Support SDK authentication](https://support.freshservice.com/support/solutions/articles/50000003137)
    - **Initialization within AppDelegate**
        - To initialize the FSSupportSDK, import the necessary dependencies and add the following code snippet in the ‘AppDelegate’ file of your application.
             - Swift:
        ```swift
        func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
            FSSupport.initialize(
                domain: "domain.freshservice.com",
                slug: "",
                userToken: "",
                config: nil
            )
            return true
        }
        ```
    - **Configuration options**
        - You can use the following configurations to customize your app.
        - `themeColor`: Use this property to apply your application’s theme color to the SDK interface. If not specified, the default will be the Freshservice theme color.
        - `enableDarkMode`: The SDK supports dark mode. Use this property to switch between dark and light themes. By default, the SDK will use a light theme.

- **Deinitialization**
    - The SDK must be deinitialized during your application logout or any switch-user scenarios.
        - Swift:
             ```swift
             FSSupport.deinitialize()
             ```

4.  **Adding Freshservice features to your application**
    - The FSSupportSDK provides access to various support-related features with UIKit and SwiftUI Support.
    - Below are the support features and their corresponding methods for integration. By using these methods, the FSSupportSDK provides easy access to essential Freshservice support features within your app.

    - **View Dashboard**
        - After you have integrated the FSSupportSDK with your iOS mobile application, the SDK allows you to present a dashboard with specific support features you want to display in your mobile app.
        - The Dashboard provides access to the following support features:
            - **Issues**: Requesters can raise an issue with this option.
            - **Service Requests**: Requesters can request a service with this option.
            - **Approve Requests**: Requesters can view approval requests with this option.
            - **Open Tickets**: Requesters can view their open tickets with this option.

        - Use the following methods to integrate the Dashboard feature.
            - UIKit:
            ```swift
            let parentController = UIViewController()
            FSSupport.showDashboard(parentController: parentController, modules: [.tickets]) // List of supported Modules
            ```
            - SwiftUI:
            ```swift
                @State private var presentDashboard = false
                Button("Dashboard") {
                    presentDashboard.toggle()
                }
                .fullScreenCover(isPresented: $presentDashboard) {
                    FSSupport.buildDashboard(modules: [])
                }
            ```
        - Supported modules
            - `FSSupport.Module.tickets`: Displays support tickets.
            - `FSSupport.Module.reportIssue`: Allows users to report an issue.
            - `FSSupport.Module.requestService`: Allows users to request a service.
            - `FSSupport.Module.approveRequests`: Displays pending approval requests.


    - **View my Tickets**
        - The FSSupportSDK allows you to integrate the Open Tickets feature in your mobile app, which displays the list of tickets raised by a requester/user. This integration helps requesters access their open tickets directly and eliminates the need to access the Dashboard.
        - Use the following methods to integrate the Open Tickets feature.
            - UIKit:
            ```swift
            let parentController = UIViewController()
            FSSupport.showTicketList(parentController: parentController)
            ```
            - SwiftUI:
            ```swift
                @State private var presentTicket = false
                Button("Ticket"){
                    presentTicket.toggle()
                }.fullScreenCover(isPresented: $presentTicket) {
                    FSSupport.buildTicketList()
                }
            ```

    - **Raise an Issue**
        - The FSSupportSDK allows you to integrate the Raise an Issue feature in your mobile app, which allows requesters to report a new issue or submit a support request. This integration helps requesters raise an issue directly and eliminates the need to access the Dashboard.
        - Use the following methods to integrate the Raise an Issue feature.
            - UIKit:
            ```swift
            let parentController = UIViewController()
            FSSupport.reportIssue(parentController: parentController)
            ```
            - SwiftUI:
            ```swift
                @State private var reportIssue = false
                Button("Report Issue"){
                    reportIssue.toggle()
                }.fullScreenCover(isPresented: $reportIssue) {
                    FSSupport.buildReportIssue()
                }
            ```

    - **Request a Service**
        - The FSSupportSDK allows you to integrate the Request a Service feature in your mobile app, which allows requesters to initiate a service request. This integration helps requesters initiate a service request directly and eliminates the need to access the Dashboard.
        - Use the following methods to integrate the Request a Service feature.
            - UIKit:
            ```swift
            let parentController = UIViewController()
            FSSupport.requestService(parentController: parentController)
            ```
            - SwiftUI:
            ```swift
                @State private var presentRequestService = false
                Button("Request Service"){
                    presentRequestService.toggle()
                }.fullScreenCover(isPresented: $presentRequestService) {
                    FSSupport.buildRequestService()
                }
            ```

    - **View Approval Requests**
        - The FSSupportSDK allows you to integrate the View Approval Requests feature in your mobile app, which allows users to view and manage approval requests. This integration helps users manage approval requests directly and eliminates the need to access the Dashboard.
        - Use the following methods to integrate the View Approval Requests feature.
            - UIKit:
            ```swift
            let parentController = UIViewController()
            FSSupport.showApprovalRequests(parentController: parentController)
            ```
            - SwiftUI:
            ```swift
                @State private var presentApprovalReq = false
                Button("Approval Request"){
                    presentApprovalReq.toggle()
                }.fullScreenCover(isPresented: $presentApprovalReq) {
                    FSSupport.buildApprovalRequests()
                }
                
            ```

## License
FSSupportSDK is released under the Commercial license. See [LICENSE](https://github.com/freshworks/freshservice-support-sdk-ios/blob/main/LICENSE) for details.