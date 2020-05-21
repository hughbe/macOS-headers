//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UsageTracking/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface USApplicationUsageReport : NSObject <NSSecureCoding>
{
    NSString *_canonicalBundleIdentifier;
    double _totalUsageTime;
    NSDictionary *_applicationUsageByBundleIdentifier;
    NSDictionary *_webUsageByDomain;
    NSDictionary *_userNotificationsByBundleIdentifier;
    NSDictionary *_pickupsByBundleIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSDictionary *pickupsByBundleIdentifier; // @synthesize pickupsByBundleIdentifier=_pickupsByBundleIdentifier;
@property(copy) NSDictionary *userNotificationsByBundleIdentifier; // @synthesize userNotificationsByBundleIdentifier=_userNotificationsByBundleIdentifier;
@property(readonly, copy) NSDictionary *webUsageByDomain; // @synthesize webUsageByDomain=_webUsageByDomain;
@property(readonly, copy) NSDictionary *applicationUsageByBundleIdentifier; // @synthesize applicationUsageByBundleIdentifier=_applicationUsageByBundleIdentifier;
@property(readonly) double totalUsageTime; // @synthesize totalUsageTime=_totalUsageTime;
@property(readonly, copy) NSString *canonicalBundleIdentifier; // @synthesize canonicalBundleIdentifier=_canonicalBundleIdentifier;
- (id)description;
@property(readonly) double applicationUsageTime;
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly) unsigned long long totalPickups;
@property(readonly) unsigned long long totalUserNotifications;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_usApplicationUsageReportCommonInitWithCanonicalBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6;
- (id)initWithCanonicalBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageByBundleIdentifier:(id)arg3 webUsageByDomain:(id)arg4 userNotificationsByBundleIdentifier:(id)arg5 pickupsByBundleIdentifier:(id)arg6;
- (id)initWithBundleIdentifier:(id)arg1 totalUsageTime:(double)arg2 applicationUsageTime:(double)arg3 webUsageByDomain:(id)arg4;

@end

