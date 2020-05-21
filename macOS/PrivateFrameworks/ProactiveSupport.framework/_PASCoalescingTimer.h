//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _PASLock;
@protocol OS_dispatch_queue;

@interface _PASCoalescingTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    double _leewaySeconds;
    CDUnknownBlockType _coalesceData;
    CDUnknownBlockType _operation;
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (void)cancelPendingOperations;
- (void)_replaceCoalescingTimerUsingLockWitness:(id)arg1;
- (void)processData:(id)arg1 afterStrictDelaySeconds:(double)arg2;
- (void)immediatelyProcessData:(id)arg1;
- (void)processData:(id)arg1 afterDelaySeconds:(double)arg2 coalescingBehavior:(unsigned char)arg3;
- (id)initWithQueue:(id)arg1 coalesceData:(CDUnknownBlockType)arg2 operation:(CDUnknownBlockType)arg3;
- (id)initWithQueue:(id)arg1 leewaySeconds:(double)arg2 coalesceData:(CDUnknownBlockType)arg3 operation:(CDUnknownBlockType)arg4;

@end

