//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMNetworkConfigurationProfileDelegate-Protocol.h>

@class HMNetworkConfigurationProfile;

@protocol HMNetworkConfigurationProfileDelegatePrivate <HMNetworkConfigurationProfileDelegate>

@optional
- (void)profileDidUpdateWiFiCredentialType:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateWiFiReconfigurationSupport:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateAccessViolation:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateAllowedHosts:(HMNetworkConfigurationProfile *)arg1;
- (void)profileDidUpdateNetworkProtectionMode:(HMNetworkConfigurationProfile *)arg1;
@end

