//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IOUSBHost/IOUSBHostObject.h>

@interface IOUSBHostDevice : IOUSBHostObject
{
}

+ (struct __CFDictionary *)createMatchingDictionaryWithVendorID:(id)arg1 productID:(id)arg2 bcdDevice:(id)arg3 deviceClass:(id)arg4 deviceSubclass:(id)arg5 deviceProtocol:(id)arg6 speed:(id)arg7 productIDArray:(id)arg8;
- (BOOL)allocateDownstreamBusCurrentWithWakeUnits:(unsigned long long *)arg1 sleepUnits:(unsigned long long *)arg2 error:(id *)arg3;
- (BOOL)resetWithError:(id *)arg1;
@property(readonly) const struct IOUSBConfigurationDescriptor *configurationDescriptor;
- (const struct IOUSBConfigurationDescriptor *)configurationDescriptorWithConfigurationValue:(unsigned long long)arg1 error:(id *)arg2;
- (const struct IOUSBConfigurationDescriptor *)configurationDescriptorWithIndex:(unsigned long long)arg1 error:(id *)arg2;
@property(readonly) const struct IOUSBBOSDescriptor *capabilityDescriptors;
@property(readonly) const struct IOUSBDeviceDescriptor *deviceDescriptor;
- (BOOL)configureWithValue:(unsigned long long)arg1 matchInterfaces:(BOOL)arg2 error:(id *)arg3;
- (BOOL)configureWithValue:(unsigned long long)arg1 error:(id *)arg2;

@end

