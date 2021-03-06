//
//  RCCrossPlatformSupport.h
//  Purchases
//
//  Created by RevenueCat.
//  Copyright © 2019 RevenueCat. All rights reserved.
//

#if TARGET_OS_IPHONE
#import <UIKit/UIKit.h>
#define APP_DID_BECOME_ACTIVE_NOTIFICATION_NAME UIApplicationDidBecomeActiveNotification
#elif TARGET_OS_MAC
#import <AppKit/AppKit.h>
#define APP_DID_BECOME_ACTIVE_NOTIFICATION_NAME NSApplicationDidBecomeActiveNotification
#endif
#if TARGET_OS_MACCATALYST
#define PLATFORM_HEADER @"uikitformac"
#elif TARGET_OS_IPHONE
#define PLATFORM_HEADER @"iOS"
#elif TARGET_OS_MAC
#define PLATFORM_HEADER @"macOS"
#endif
