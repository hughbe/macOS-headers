//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLScopeFilter, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_clientCacheIdentifier;
    BOOL _hasPreparedForMingling;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    BOOL _didNotifySchedulerPullQueueIsFullOnce;
    BOOL _needsToNotifySchedulerPullQueueIsFull;
    CPLScopeFilter *_scopeFilter;
}

+ (BOOL)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(char *)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) CPLScopeFilter *scopeFilter; // @synthesize scopeFilter=_scopeFilter;
- (id)taskIdentifier;
- (void)cancel;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_launch;
- (void)_processNextBatch;
- (void)_taskDidFinishWithError:(id)arg1;
- (BOOL)_checkContinueMinglingInTransaction:(id)arg1;
- (void)_notifySchedulerPullQueueIsFullNowIfNecessary;
- (void)_notifySchedulerPullQueueIsFull;
- (void)_reallyNotifySchedulerPullQueueIsFull;
- (id)initWithEngineLibrary:(id)arg1 session:(id)arg2;

@end

