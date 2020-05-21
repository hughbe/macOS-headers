//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject
{
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}

- (void).cxx_destruct;
- (void)flushCompletionBlocksWithFutureResult:(id)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)setShouldCallImmediately:(BOOL)arg1;
- (BOOL)shouldCallImmediately;
- (id)init;

@end

