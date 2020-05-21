//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSArray, NSError;

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam
{
    long long _dataType;
    long long _status;
    NSArray *_clientErrors;
    NSError *_error;
}

+ (id)paramWithDataType:(long long)arg1 status:(long long)arg2 error:(id)arg3 clientErrors:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *clientErrors; // @synthesize clientErrors=_clientErrors;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (id)description;

@end

