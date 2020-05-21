//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface MIDICISession : NSObject
{
    unsigned int _client;
    unsigned int _entity;
    struct MIDICIDeviceIdentification _deviceIdentification;
    NSArray *_supportedProtocols;
    NSMutableArray *_profileStates;
    CDUnknownBlockType _profileChangedCallback;
    CDUnknownBlockType _propertyChangedCallback;
    CDUnknownBlockType _propertyResponseCallback;
    BOOL _supportsProfileCapability;
    BOOL _supportsPropertyCapability;
    struct MIDICIDeviceIdentification _deviceID;
    unsigned int _impl;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType propertyChangedCallback; // @synthesize propertyChangedCallback=_propertyChangedCallback;
@property(copy, nonatomic) CDUnknownBlockType profileChangedCallback; // @synthesize profileChangedCallback=_profileChangedCallback;
@property(readonly, nonatomic) unsigned int entity; // @synthesize entity=_entity;
@property(readonly, nonatomic) struct MIDICIDeviceIdentification deviceIdentification; // @synthesize deviceIdentification=_deviceID;
@property(readonly, nonatomic) BOOL supportsPropertyCapability; // @synthesize supportsPropertyCapability=_supportsPropertyCapability;
@property(readonly, nonatomic) BOOL supportsProfileCapability; // @synthesize supportsProfileCapability=_supportsProfileCapability;
- (_Bool)updateProfileStateForChannel:(unsigned char)arg1 withProfile:(id)arg2 enabled:(_Bool)arg3;
- (void)addProfileState:(char *)arg1 length:(unsigned int)arg2 channel:(unsigned char)arg3;
- (void)setProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)getProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)hasProperty:(id)arg1 onChannel:(unsigned char)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (BOOL)toggleProfile:(id)arg1 onChannel:(unsigned char)arg2 enabling:(BOOL)arg3 error:(id *)arg4;
- (BOOL)disableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id *)arg3;
- (BOOL)enableProfile:(id)arg1 onChannel:(unsigned char)arg2 error:(id *)arg3;
- (id)profileStateForChannel:(unsigned char)arg1;
- (void)handleCINotification:(const struct MIDINotification *)arg1 withHandler:(CDUnknownBlockType)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithMIDIEntity:(unsigned int)arg1 dataReadyHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

