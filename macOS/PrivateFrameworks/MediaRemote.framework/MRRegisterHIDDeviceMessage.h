//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRVirtualTouchDeviceDescriptor;

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage
{
    MRVirtualTouchDeviceDescriptor *_deviceDescriptor;
}

- (void).cxx_destruct;
- (unsigned long long)type;
@property(readonly, copy, nonatomic) MRVirtualTouchDeviceDescriptor *deviceDescriptor;
- (id)initWithDeviceDescriptor:(id)arg1;

@end

