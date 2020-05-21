//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioDSPManager/adm_ConfigurationChangeRequest.h>

#import <AudioDSPManager/NSSecureCoding-Protocol.h>
#import <AudioDSPManager/adm_JSONSerializable-Protocol.h>
#import <AudioDSPManager/dspd_ActivationChangeRequest-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface adm_ActivationChangeRequest : adm_ConfigurationChangeRequest <adm_JSONSerializable, NSSecureCoding, dspd_ActivationChangeRequest>
{
    struct StringRef category;
    struct StringRef mode;
    vector_66ffd461 _portDescriptions;
    vector_d1b3d51b _streamDescriptions;
    vector_123a35f9 _deviceDescriptions;
    vector_b9981e18 _ioControllerDescriptions;
    optional_74709a54 microphonePreferences;
    optional_b75ce017 initiationTrigger;
}

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) optional_74709a54 microphonePreferences; // @synthesize microphonePreferences;
@property(nonatomic) optional_b75ce017 initiationTrigger; // @synthesize initiationTrigger;
@property(nonatomic) struct StringRef mode; // @synthesize mode;
@property(nonatomic) vector_b9981e18 ioControllerDescriptions; // @synthesize ioControllerDescriptions=_ioControllerDescriptions;
@property(nonatomic) struct StringRef category; // @synthesize category;
@property(nonatomic) vector_123a35f9 deviceDescriptions; // @synthesize deviceDescriptions=_deviceDescriptions;
@property(nonatomic) vector_d1b3d51b streamDescriptions; // @synthesize streamDescriptions=_streamDescriptions;
@property(nonatomic) vector_66ffd461 portDescriptions; // @synthesize portDescriptions=_portDescriptions;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (basic_json_058021e8)adm_toJSON;
- (id)initWithSession:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned int session;
@property(readonly) Class superclass;

@end

