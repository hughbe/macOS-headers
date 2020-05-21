//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountPolicy/APMessage.h>

@class NSMutableDictionary;

@interface APRequest : APMessage
{
    NSMutableDictionary *_recordInfo;
    CDUnknownBlockType _retrieveData;
}

+ (id)requestWithType:(int)arg1 recordInfo:(id)arg2 timeDelta:(double)arg3 retrieveData:(CDUnknownBlockType)arg4;
+ (id)requestWithType:(int)arg1 recordInfo:(id)arg2 retrieveData:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType retrieveData; // @synthesize retrieveData=_retrieveData;
@property(retain) NSMutableDictionary *recordInfo; // @synthesize recordInfo=_recordInfo;
- (void)_convertToNSNumberTimeIntervalIfNeeded:(id)arg1;
- (long long)evaluatePolicyAndReturnExpiration;
- (int)evaluatePolicyAndReturnResultAndError:(id *)arg1;
- (id)evaluatePolicyAndReturnResponse;
- (id)logHandle;
- (id)initWithType:(int)arg1 recordInfo:(id)arg2 timeDelta:(double)arg3 retrieveData:(CDUnknownBlockType)arg4;

@end

