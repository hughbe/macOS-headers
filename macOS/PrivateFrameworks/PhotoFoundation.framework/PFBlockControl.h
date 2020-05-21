//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFBlockControlCanceling-Protocol.h>
#import <PhotoFoundation/PFBlockControlDirectExecution-Protocol.h>
#import <PhotoFoundation/PFBlockControlQueueing-Protocol.h>

@class NSString, PFDispatchQueue;
@protocol OS_dispatch_group;

@interface PFBlockControl : NSObject <PFBlockControlCanceling, PFBlockControlQueueing, PFBlockControlDirectExecution>
{
    PFDispatchQueue *_queue;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_group> *_workGroup;
    _Atomic unsigned long long _status;
    BOOL _executeOnDealloc;
}

- (void).cxx_destruct;
@property BOOL executeOnDealloc; // @synthesize executeOnDealloc=_executeOnDealloc;
@property(readonly, copy) NSString *description;
- (BOOL)executeBlock;
- (BOOL)groupNotify:(id)arg1;
- (BOOL)enqueueWithDelay:(unsigned long long)arg1;
- (BOOL)enqueue;
- (unsigned long long)_shouldEnqueue;
- (BOOL)dequeue;
- (BOOL)blockWasCanceled;
- (BOOL)cancelBlock;
- (BOOL)tryCancelBlock;
- (void)waitForBlock;
- (void)notifyOnQueue:(id)arg1 whenFinished:(CDUnknownBlockType)arg2;
- (BOOL)blockHasFinished;
- (BOOL)blockHasStarted;
- (void)invoke:(unsigned long long)arg1;
- (void)_execute;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

