//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioResourceArbitration/aura_DevicePriv-Protocol.h>

@class NSString;
@protocol aura_SelectorControl;

__attribute__((visibility("hidden")))
@interface aura_DevicePrivImpl : NSObject <aura_DevicePriv>
{
    shared_ptr_cc2337fb reactor_;
}

+ (id)deviceWithReactor:(shared_ptr_cc2337fb)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (expected_b2b3f2ff)controlForClassID:(unsigned int)arg1 scope:(const unsigned int *)arg2 element:(unsigned int)arg3;
- (vector_53af465e)controlsForScope:(const unsigned int *)arg1;
- (vector_53af465e)controls;
@property(readonly, nonatomic) optional_cd8a9b08 manufacturerName;
@property(readonly, nonatomic) optional_cd8a9b08 modelName;
@property(readonly, nonatomic) optional_cd8a9b08 name;
- (struct error_code)setPropertyValue:(id)arg1 address:(const struct Address *)arg2 qualifier:(id)arg3;
- (struct error_code)setPropertyValue:(id)arg1 address:(const struct Address *)arg2;
- (expected_24591dba)propertyValueForAddress:(const struct Address *)arg1 qualifier:(id)arg2;
- (expected_24591dba)propertyValueForAddress:(const struct Address *)arg1;
- (BOOL)isPropertySettable:(const struct Address *)arg1;
- (BOOL)hasProperty:(const struct Address *)arg1;
@property(readonly, nonatomic) unsigned int stockClassID;
@property(readonly, nonatomic) unsigned int classID;
@property(readonly, nonatomic) unsigned long long objectID;
- (struct error_code)setSampleRate:(double)arg1;
@property(readonly, nonatomic) id <aura_SelectorControl> clockSourceControl;
@property(readonly, nonatomic) unsigned int clockDomain;
@property(readonly, nonatomic) optional_cd8a9b08 modelUID;
@property(readonly, nonatomic) struct StringRef deviceUID;
@property(readonly, nonatomic) unsigned int outputLatency;
@property(readonly, nonatomic) unsigned int inputLatency;
@property(readonly, nonatomic) vector_a2bd2a87 supportedSampleRates;
@property(readonly, nonatomic) double sampleRate;
@property(readonly, nonatomic) unsigned int transportType;
- (struct error_code)setActiveOutputUSBSection:(struct USBSection)arg1;
- (struct error_code)setActiveInputUSBSection:(struct USBSection)arg1;
@property(readonly, nonatomic) optional_10ef6a28 supportedOutputUSBSections;
@property(readonly, nonatomic) optional_a477c0a4 activeOutputUSBSection;
@property(readonly, nonatomic) optional_10ef6a28 supportedInputUSBSections;
@property(readonly, nonatomic) optional_a477c0a4 activeInputUSBSection;
@property(readonly, nonatomic) unsigned int outputSafetyOffset;
@property(readonly, nonatomic) unsigned int inputSafetyOffset;
@property(readonly, nonatomic) vector_69ed651e streams;
@property(readonly, nonatomic) vector_a7f3f6e7 ports;
@property(readonly, nonatomic) weak_ptr_47880f8f reactor;
- (id)init:(shared_ptr_cc2337fb)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

