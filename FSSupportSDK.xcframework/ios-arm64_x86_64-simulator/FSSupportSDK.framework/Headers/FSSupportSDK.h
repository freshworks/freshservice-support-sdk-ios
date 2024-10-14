//
//  FSSupportSDK.h
//  FSSupportSDK
//
//  Created by Nagarjun Vijayakumar on 08/09/24.
//

#import <Foundation/Foundation.h>

//! Project version number for FSSupportSDK.
FOUNDATION_EXPORT double FSSupportSDKVersionNumber;

//! Project version string for FSSupportSDK.
FOUNDATION_EXPORT const unsigned char FSSupportSDKVersionString[];



#import <FSSupportSDK/OIDAuthState.h>
#import <FSSupportSDK/OIDAuthStateChangeDelegate.h>
#import <FSSupportSDK/OIDAuthStateErrorDelegate.h>
#import <FSSupportSDK/OIDAuthorizationRequest.h>
#import <FSSupportSDK/OIDAuthorizationResponse.h>
#import <FSSupportSDK/OIDAuthorizationService.h>
#import <FSSupportSDK/OIDError.h>
#import <FSSupportSDK/OIDErrorUtilities.h>
#import <FSSupportSDK/OIDExternalUserAgent.h>
#import <FSSupportSDK/OIDExternalUserAgentRequest.h>
#import <FSSupportSDK/OIDExternalUserAgentSession.h>
#import <FSSupportSDK/OIDGrantTypes.h>
#import <FSSupportSDK/OIDIDToken.h>
#import <FSSupportSDK/OIDRegistrationRequest.h>
#import <FSSupportSDK/OIDRegistrationResponse.h>
#import <FSSupportSDK/OIDResponseTypes.h>
#import <FSSupportSDK/OIDScopes.h>
#import <FSSupportSDK/OIDScopeUtilities.h>
#import <FSSupportSDK/OIDServiceConfiguration.h>
#import <FSSupportSDK/OIDServiceDiscovery.h>
#import <FSSupportSDK/OIDTokenRequest.h>
#import <FSSupportSDK/OIDTokenResponse.h>
#import <FSSupportSDK/OIDTokenUtilities.h>
#import <FSSupportSDK/OIDURLSessionProvider.h>OIDAuthState.h
#import <FSSupportSDK/OIDEndSessionRequest.h>
#import <FSSupportSDK/OIDEndSessionResponse.h>

#if TARGET_OS_TV
#elif TARGET_OS_WATCH
#elif TARGET_OS_IOS || TARGET_OS_MACCATALYST
#import <FSSupportSDK/OIDAuthState+IOS.h>
#import <FSSupportSDK/OIDAuthorizationService+IOS.h>
#import <FSSupportSDK/OIDExternalUserAgentIOS.h>
#import <FSSupportSDK/OIDExternalUserAgentIOSCustomBrowser.h>
#import <FSSupportSDK/OIDExternalUserAgentCatalyst.h>
#elif TARGET_OS_OSX
#import <FSSupportSDK/OIDAuthState+Mac.h>
#import <FSSupportSDK/OIDAuthorizationService+Mac.h>
#import <FSSupportSDK/OIDExternalUserAgentMac.h>
#import <FSSupportSDK/OIDRedirectHTTPHandler.h>
#else
#error "Platform Undefined"
#endif


#import <FSSupportSDK/OIDAuthState.h>
#import <FSSupportSDK/OIDAuthStateChangeDelegate.h>
#import <FSSupportSDK/OIDAuthStateErrorDelegate.h>
#import <FSSupportSDK/OIDAuthorizationRequest.h>
#import <FSSupportSDK/OIDAuthorizationResponse.h>
#import <FSSupportSDK/OIDAuthorizationService.h>
#import <FSSupportSDK/OIDError.h>
#import <FSSupportSDK/OIDErrorUtilities.h>
#import <FSSupportSDK/OIDExternalUserAgent.h>
#import <FSSupportSDK/OIDExternalUserAgentRequest.h>
#import <FSSupportSDK/OIDExternalUserAgentSession.h>
#import <FSSupportSDK/OIDGrantTypes.h>
#import <FSSupportSDK/OIDIDToken.h>
#import <FSSupportSDK/OIDRegistrationRequest.h>
#import <FSSupportSDK/OIDRegistrationResponse.h>
#import <FSSupportSDK/OIDResponseTypes.h>
#import <FSSupportSDK/OIDScopes.h>
#import <FSSupportSDK/OIDScopeUtilities.h>
#import <FSSupportSDK/OIDServiceConfiguration.h>
#import <FSSupportSDK/OIDServiceDiscovery.h>
#import <FSSupportSDK/OIDTokenRequest.h>
#import <FSSupportSDK/OIDTokenResponse.h>
#import <FSSupportSDK/OIDTokenUtilities.h>
#import <FSSupportSDK/OIDURLSessionProvider.h>OIDAuthState.h
#import <FSSupportSDK/OIDEndSessionRequest.h>
#import <FSSupportSDK/OIDEndSessionResponse.h>

#if TARGET_OS_TV
#elif TARGET_OS_WATCH
#elif TARGET_OS_IOS || TARGET_OS_MACCATALYST
#import <FSSupportSDK/OIDAuthState+IOS.h>
#import <FSSupportSDK/OIDAuthorizationService+IOS.h>
#import <FSSupportSDK/OIDExternalUserAgentIOS.h>
#import <FSSupportSDK/OIDExternalUserAgentIOSCustomBrowser.h>
#import <FSSupportSDK/OIDExternalUserAgentCatalyst.h>
#elif TARGET_OS_OSX
#import <FSSupportSDK/OIDAuthState+Mac.h>
#import <FSSupportSDK/OIDAuthorizationService+Mac.h>
#import <FSSupportSDK/OIDExternalUserAgentMac.h>
#import <FSSupportSDK/OIDRedirectHTTPHandler.h>
#else
#error "Platform Undefined"
#endif

