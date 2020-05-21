//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber;

@interface FTUserConfiguration : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL _nonWifiFaceTimeEntitled;
@property(nonatomic) BOOL isDeviceInDualPhoneIdentityMode;
@property(readonly, copy, nonatomic) NSNumber *selectedPhoneNumberRegistrationSubscriptionNumber;
- (void)silentlySetSelectedPhoneNumberRegistrationSubscriptionLabels:(id)arg1;
@property(copy, nonatomic) NSArray *selectedPhoneNumberRegistrationSubscriptionLabels;
@property(nonatomic) BOOL allowAnyNetwork;
@property(nonatomic) BOOL cellularFaceTimeEnabled;
- (BOOL)nonBluetoothAllowedForBundleId:(id)arg1;
- (BOOL)wifiAllowedForBundleId:(id)arg1;
- (BOOL)cellularDataEnabledForBundleId:(id)arg1;
- (BOOL)_adequateInternalOrCarrierInstall;
- (void)dealloc;
- (id)init;

@end

