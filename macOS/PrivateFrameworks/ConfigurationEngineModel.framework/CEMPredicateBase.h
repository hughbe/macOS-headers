//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMPredicateBase : CEMPayloadBase
{
    NSString *_payloadType;
}

+ (id)predicateForPayload:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)evaluateWithOptions:(id)arg1 error:(id *)arg2;

@end

