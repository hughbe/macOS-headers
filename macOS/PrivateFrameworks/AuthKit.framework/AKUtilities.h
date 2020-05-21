//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AKUtilities : NSObject
{
}

+ (BOOL)screenLockIsEnabled;
+ (id)deviceUDID;
+ (int)openItemWithURL:(id)arg1 launchParameters:(id)arg2;
+ (int)openItemWithURL:(id)arg1;
+ (int)openApplicationWithURL:(struct __CFURL *)arg1;
+ (int)openApplicationWithBundleID:(id)arg1;
+ (BOOL)openAppleIDPrefWithLaunchParameters:(id)arg1;
+ (void)openAppleIDPref;
+ (void)openParentalControlPref;
+ (void)openInternetAccountPref;
+ (void)openSecurityPref;
+ (void)openSharingPref;
+ (void)openEnergySaverPref;
+ (void)launchPhotosApplication;
+ (void)launchSoftwareUpdate;
+ (id)urlForBundleIdentifier:(id)arg1;
+ (id)currentApplicationVersion;
+ (id)currentApplicationIdentifier;
+ (id)bundleVersion;
+ (id)bundleIdentifier;

@end

