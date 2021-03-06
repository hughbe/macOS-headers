//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol aura_Device;

@interface aura_DeviceHints : NSObject
{
    id <aura_Device> device;
    optional_488f82df usbSection;
    optional_fcefa02e sampleRate;
    optional_d968a044 inputStreamHints;
    optional_d968a044 outputStreamHints;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) optional_d968a044 outputStreamHints; // @synthesize outputStreamHints;
@property(nonatomic) optional_d968a044 inputStreamHints; // @synthesize inputStreamHints;
@property(nonatomic) optional_488f82df usbSection; // @synthesize usbSection;
@property(nonatomic) optional_fcefa02e sampleRate; // @synthesize sampleRate;
@property(nonatomic) __weak id <aura_Device> device; // @synthesize device;

@end

