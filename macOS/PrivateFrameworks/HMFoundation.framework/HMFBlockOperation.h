//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

@class NSArray;

@interface HMFBlockOperation : HMFOperation
{
    NSArray *_executionBlocks;
}

+ (id)blockOperationWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)main;
- (void)addExecutionBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSArray *executionBlocks; // @synthesize executionBlocks=_executionBlocks;
- (id)initWithTimeout:(double)arg1;

@end

