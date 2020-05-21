//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IOBluetooth/IOBluetoothSDPServiceRecord.h>

#import <IOBluetooth/NSCoding-Protocol.h>
#import <IOBluetooth/NSSecureCoding-Protocol.h>

@class IOBluetoothUserNotification, NSDictionary, NSMutableSet;

@interface IOBluetoothLocalSDPServiceRecord : IOBluetoothSDPServiceRecord <NSCoding, NSSecureCoding>
{
    NSDictionary *mServerAttributeDictionary;
    NSDictionary *mLocalAttributeDictionary;
    NSMutableSet *mAllowedDevices;
    NSMutableSet *mRestrictedDevices;
    IOBluetoothUserNotification *mIncomingChannelNotification;
}

+ (id)withServerAttributeDictionary:(id)arg1 localAttributeDictionary:(id)arg2;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldVendServiceForUser:(int)arg1;
- (void)launchApp:(id)arg1 objectID:(unsigned long long)arg2;
- (void)incomingL2CAPChannel:(id)arg1 channel:(id)arg2;
- (void)incomingRFCOMMChannel:(id)arg1 channel:(id)arg2;
- (BOOL)unregisterForIncomingChannelNotifications;
- (BOOL)registerForIncomingChannelNotifications;
- (id)getNameOfService;
- (BOOL)uniqueClientPerService;
- (BOOL)uniqueClientPerDevice;
- (BOOL)isPersistent;
- (id)getLocalAttribute:(id)arg1;
- (id)getLocalAttributeDictionary;
- (id)getServerAttributeDictionary;
- (void)dealloc;
- (id)initWithServerAttributeDictionary:(id)arg1 localAttributeDictionary:(id)arg2;

@end

