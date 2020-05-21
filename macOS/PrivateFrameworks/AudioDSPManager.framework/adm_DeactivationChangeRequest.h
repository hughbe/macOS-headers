//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioDSPManager/adm_ConfigurationChangeRequest.h>

#import <AudioDSPManager/NSSecureCoding-Protocol.h>
#import <AudioDSPManager/adm_JSONSerializable-Protocol.h>
#import <AudioDSPManager/dspd_DeactivationChangeRequest-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface adm_DeactivationChangeRequest : adm_ConfigurationChangeRequest <adm_JSONSerializable, NSSecureCoding, dspd_DeactivationChangeRequest>
{
}

+ (BOOL)supportsSecureCoding;
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

