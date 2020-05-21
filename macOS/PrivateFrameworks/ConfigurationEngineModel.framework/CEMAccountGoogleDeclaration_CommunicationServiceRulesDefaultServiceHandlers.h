//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers : CEMPayloadBase
{
    NSString *_payloadAudioCall;
}

+ (id)buildRequiredOnly;
+ (id)buildWithAudioCall:(id)arg1;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadAudioCall; // @synthesize payloadAudioCall=_payloadAudioCall;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

