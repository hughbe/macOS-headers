//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMPasscodeSetFirmwarePasswordCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadCurrentPassword;
    NSString *_payloadNewPassword;
    NSNumber *_payloadAllowOroms;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withNewPassword:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withCurrentPassword:(id)arg2 withNewPassword:(id)arg3 withAllowOroms:(id)arg4;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadAllowOroms; // @synthesize payloadAllowOroms=_payloadAllowOroms;
@property(copy, nonatomic) NSString *payloadNewPassword; // @synthesize payloadNewPassword=_payloadNewPassword;
@property(copy, nonatomic) NSString *payloadCurrentPassword; // @synthesize payloadCurrentPassword=_payloadCurrentPassword;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (BOOL)mustBeSupervised;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

