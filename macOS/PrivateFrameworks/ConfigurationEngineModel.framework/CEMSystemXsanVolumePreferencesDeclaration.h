//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface CEMSystemXsanVolumePreferencesDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadOnlyMount;
    NSArray *_payloadDenyMount;
    NSArray *_payloadDenyDLC;
    NSArray *_payloadPreferDLC;
    NSNumber *_payloadUseDLC;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withOnlyMount:(id)arg2 withDenyMount:(id)arg3 withDenyDLC:(id)arg4 withPreferDLC:(id)arg5 withUseDLC:(id)arg6;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadUseDLC; // @synthesize payloadUseDLC=_payloadUseDLC;
@property(copy, nonatomic) NSArray *payloadPreferDLC; // @synthesize payloadPreferDLC=_payloadPreferDLC;
@property(copy, nonatomic) NSArray *payloadDenyDLC; // @synthesize payloadDenyDLC=_payloadDenyDLC;
@property(copy, nonatomic) NSArray *payloadDenyMount; // @synthesize payloadDenyMount=_payloadDenyMount;
@property(copy, nonatomic) NSArray *payloadOnlyMount; // @synthesize payloadOnlyMount=_payloadOnlyMount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

