//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBookCore/CNFuture-Protocol.h>

@class CNFuture, NSString;

@interface ABNonBlockingLazyFuture : NSObject <CNFuture>
{
    CNFuture *_future;
    CDUnknownBlockType _block;
    CDUnknownBlockType _cleanupBlock;
}

+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1 cleanupBlock:(CDUnknownBlockType)arg2;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (void)cleanupBlocks;
- (void)resolveFuture;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (BOOL)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(readonly, getter=isFinished) BOOL finished;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1 cleanupBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

