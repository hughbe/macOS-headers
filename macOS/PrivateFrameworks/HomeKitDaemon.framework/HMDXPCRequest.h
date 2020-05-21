//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSString;

@interface HMDXPCRequest : HMFObject
{
    NSDate *_startTime;
    NSString *_messageName;
    long long _qualityOfService;
    CDUnknownBlockType _responseHandler;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic) NSString *messageName; // @synthesize messageName=_messageName;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
- (id)initWithMessageName:(id)arg1 qualityOfService:(long long)arg2 responseHandler:(CDUnknownBlockType)arg3;

@end

