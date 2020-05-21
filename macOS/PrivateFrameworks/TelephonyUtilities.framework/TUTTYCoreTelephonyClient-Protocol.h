//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUCoreTelephonyClient-Protocol.h>

@class NSUUID;

@protocol TUTTYCoreTelephonyClient <TUCoreTelephonyClient>
- (BOOL)isTTYSoftwareSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYSoftwareEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYSoftwareAvailableForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYHardwareSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYHardwareEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYHardwareAvailableForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYSupportedForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isTTYEnabledForSubscriptionUUID:(NSUUID *)arg1;
- (BOOL)isRTTSupportedForSubscriptionUUID:(NSUUID *)arg1;
@end

