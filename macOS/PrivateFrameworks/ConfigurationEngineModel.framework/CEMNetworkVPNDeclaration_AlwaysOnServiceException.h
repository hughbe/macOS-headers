//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMNetworkVPNDeclaration_AlwaysOnServiceException : CEMPayloadBase
{
    NSString *_payloadServiceName;
    NSString *_payloadAction;
}

+ (id)buildRequiredOnlyWithServiceName:(id)arg1 withAction:(id)arg2;
+ (id)buildWithServiceName:(id)arg1 withAction:(id)arg2;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadAction; // @synthesize payloadAction=_payloadAction;
@property(copy, nonatomic) NSString *payloadServiceName; // @synthesize payloadServiceName=_payloadServiceName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

