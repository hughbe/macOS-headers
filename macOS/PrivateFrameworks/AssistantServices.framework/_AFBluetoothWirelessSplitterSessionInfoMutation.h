//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFBluetoothWirelessSplitterSessionInfoMutating-Protocol.h>

@class AFBluetoothWirelessSplitterSessionInfo, NSArray, NSString;

@interface _AFBluetoothWirelessSplitterSessionInfoMutation : NSObject <AFBluetoothWirelessSplitterSessionInfoMutating>
{
    AFBluetoothWirelessSplitterSessionInfo *_baseModel;
    long long _state;
    NSArray *_deviceAddresses;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasState:1;
        unsigned int hasDeviceAddresses:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setDeviceAddresses:(id)arg1;
- (void)setState:(long long)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

