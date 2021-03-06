//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HMCharacteristicBatchRequest : NSObject
{
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _completionHandler;
    NSArray *_requests;
}

+ (id)characteristicBatchRequestWithWriteRequests:(id)arg1;
+ (id)characteristicBatchRequestWithReadRequests:(id)arg1;
+ (BOOL)validateRequestTypes:(id)arg1 requestClass:(Class)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (id)initWithRequests:(id)arg1 requestClass:(Class)arg2;

@end

