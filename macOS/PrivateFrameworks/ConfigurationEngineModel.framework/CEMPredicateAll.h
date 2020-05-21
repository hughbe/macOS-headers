//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPredicateBase.h>

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMPredicateAll : CEMPredicateBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadPredicates;
}

+ (id)buildRequiredOnlyWithPredicates:(id)arg1;
+ (id)buildWithPredicates:(id)arg1;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *payloadPredicates; // @synthesize payloadPredicates=_payloadPredicates;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

