//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VECSchedulingManager : NSObject
{
    unsigned long long _batchSize;
    int _suspendCount;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_suspendGroup;
    NSMapTable *_lookupTable;
    NSObject<OS_dispatch_queue> *_queue[3];
    NSMutableArray *_taskLIFO[3];
    long long _runingTaskCount[3];
    BOOL _isFIFO;
}

+ (id)sharedConcurrentScheduler;
+ (id)sharedSerialScheduler;
+ (id)concurrentSchedulerWithBatchSize:(unsigned long long)arg1;
+ (id)concurrentScheduler;
+ (id)serialScheduler;
- (void).cxx_destruct;
- (void)cancelAllSchedulingRequests;
- (void)cancelSchedulingRequestWithID:(int)arg1;
- (int)processTaskWithPriority:(unsigned long long)arg1 taskHandler:(CDUnknownBlockType)arg2;
- (int)postSchedulingRequest:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)deregisterRequest:(int)arg1;
- (void)registerRequest:(id)arg1;
- (void)resume;
- (void)suspend;
- (void)setIsFIFO:(BOOL)arg1;
- (void)_processNextBatch;
- (unsigned long long)_priorityIndexWithPriority:(unsigned long long)arg1;
- (id)description;
- (id)init;

@end

