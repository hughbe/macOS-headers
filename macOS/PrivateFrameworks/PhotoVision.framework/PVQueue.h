//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PVCanceler;
@protocol OS_dispatch_queue;

@interface PVQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    _Atomic int _currentlyExecutingTasksCount;
    PVCanceler *_canceler;
    BOOL _terminating;
    BOOL _isConcurrent;
}

- (void).cxx_destruct;
- (void)terminate_sync;
- (void)resume;
- (void)suspend_async;
- (void)suspend_sync;
- (void)waitForCurrentTasksToFinish;
- (void)dispatch_barrier_sync:(CDUnknownBlockType)arg1;
- (void)dispatch_barrier_async:(CDUnknownBlockType)arg1;
- (void)execute_sync:(CDUnknownBlockType)arg1;
- (void)execute_after:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)execute_async:(CDUnknownBlockType)arg1;
- (id)initQueueWithName:(id)arg1 isSerial:(BOOL)arg2 qos_class:(unsigned int)arg3;

@end

