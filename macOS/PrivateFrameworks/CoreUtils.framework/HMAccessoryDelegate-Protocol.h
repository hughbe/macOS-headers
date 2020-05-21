//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUtils/NSObject-Protocol.h>

@class HMAccessory, HMAccessoryProfile, HMCharacteristic, HMService, NSString;

@protocol HMAccessoryDelegate <NSObject>

@optional
- (void)accessory:(HMAccessory *)arg1 didUpdateFirmwareVersion:(NSString *)arg2;
- (void)accessory:(HMAccessory *)arg1 service:(HMService *)arg2 didUpdateValueForCharacteristic:(HMCharacteristic *)arg3;
- (void)accessoryDidUpdateReachability:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didRemoveProfile:(HMAccessoryProfile *)arg2;
- (void)accessory:(HMAccessory *)arg1 didAddProfile:(HMAccessoryProfile *)arg2;
- (void)accessoryDidUpdateServices:(HMAccessory *)arg1;
- (void)accessory:(HMAccessory *)arg1 didUpdateAssociatedServiceTypeForService:(HMService *)arg2;
- (void)accessory:(HMAccessory *)arg1 didUpdateNameForService:(HMService *)arg2;
- (void)accessoryDidUpdateName:(HMAccessory *)arg1;
@end

