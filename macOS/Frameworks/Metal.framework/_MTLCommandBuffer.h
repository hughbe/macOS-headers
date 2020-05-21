//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLObjectWithLabel.h>

@class NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, _MTLCommandQueue;
@protocol MTLCommandBuffer, MTLCommandEncoder, MTLCommandQueue;

@interface _MTLCommandBuffer : _MTLObjectWithLabel
{
    id <MTLCommandEncoder> _currentCommandEncoder;
    _MTLCommandQueue<MTLCommandQueue> *_queue;
    struct MTLDispatch *_scheduledDispatchList;
    struct MTLDispatch *_scheduledDispatchListTail;
    struct MTLDispatch *_completedDispatchList;
    struct MTLDispatch *_completedDispatchListTail;
    struct MTLSyncDispatch *_syncDispatchList;
    struct MTLSyncDispatch *_syncDispatchListTail;
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
    unsigned long long _creationTime;
    unsigned long long _enqueueTime;
    unsigned long long _commitTime;
    unsigned long long _submitToKernelTime;
    unsigned long long _submitToHardwareTime;
    unsigned long long _completionInterruptTime;
    unsigned long long _completionHandlerEnqueueTime;
    unsigned long long _completionHandlerExecutionTime;
    unsigned long long _status;
    NSError *_error;
    _Bool _skipRender;
    _Bool _profilingEnabled;
    _Bool _scheduledCallbacksDone;
    _Bool _completedCallbacksDone;
    BOOL _strongObjectReferences;
    NSDictionary *_profilingResults;
    BOOL _retainedReferences;
    BOOL _synchronousDebugMode;
    NSMutableDictionary *_userDictionary;
    unsigned long long _kernelStartTime;
    unsigned long long _kernelEndTime;
    unsigned long long _gpuStartTime;
    unsigned long long _gpuEndTime;
    unsigned long long _numEncoders;
    unsigned long long _numThisCommandBuffer;
    unsigned long long _listIndex;
    unsigned long long _numRequestedCounters;
    unsigned long long _numInternalSampleCounters;
    _MTLCommandBuffer<MTLCommandBuffer> *_statCommandBuffer;
    struct os_unfair_lock_s _sampleLock;
    BOOL _ownedByParallelEncoder;
    BOOL _wakeOnCommit;
    NSMutableArray *_retainedObjects;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    BOOL _StatEnabled;
    CDUnknownBlockType _perfSampleHandlerBlock;
    unsigned long long _StatOptions;
    unsigned long long _StatLocations;
    unsigned long long _samplesPerStorageBlock;
    unsigned long long _totalNumStatSamples;
    NSMutableArray *_sampleStorage;
    struct MTLStatSampleRec *_samples;
    struct MTLStatSampleRec *_currentSample;
    unsigned long long _internalCounterSampleSize;
    _Bool _hasPresent;
}

+ (void)initialize;
@property(nonatomic) BOOL ownedByParallelEncoder; // @synthesize ownedByParallelEncoder=_ownedByParallelEncoder;
@property(nonatomic) unsigned long long numEncoders; // @synthesize numEncoders=_numEncoders;
@property(nonatomic) unsigned long long numThisCommandBuffer; // @synthesize numThisCommandBuffer=_numThisCommandBuffer;
@property(nonatomic) unsigned long long internalCounterSampleSize; // @synthesize internalCounterSampleSize=_internalCounterSampleSize;
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations; // @synthesize StatLocations=_StatLocations;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions; // @synthesize StatOptions=_StatOptions;
@property(retain, nonatomic) _MTLCommandBuffer<MTLCommandBuffer> *statCommandBuffer; // @synthesize statCommandBuffer=_statCommandBuffer;
@property(nonatomic, getter=getListIndex) unsigned long long listIndex; // @synthesize listIndex=_listIndex;
@property(nonatomic, getter=isStatEnabled) BOOL StatEnabled; // @synthesize StatEnabled=_StatEnabled;
@property(readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(readonly) unsigned long long status; // @synthesize status=_status;
@property(readonly) id <MTLCommandQueue> commandQueue; // @synthesize commandQueue=_queue;
@property(readonly) BOOL synchronousDebugMode; // @synthesize synchronousDebugMode=_synchronousDebugMode;
@property(readonly) BOOL retainedReferences; // @synthesize retainedReferences=_retainedReferences;
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (void)executeSynchronizationNotifications:(int)arg1 scope:(unsigned long long)arg2 resources:(const id *)arg3 count:(unsigned long long)arg4;
- (void)executeSynchronizationNotifications:(int)arg1;
- (void)addSynchronizationNotification:(CDUnknownBlockType)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
@property(readonly, nonatomic) double GPUEndTime;
@property(readonly, nonatomic) double GPUStartTime;
@property(readonly, nonatomic) double kernelEndTime;
@property(readonly, nonatomic) double kernelStartTime;
- (unsigned long long)getAndIncrementNumEncoders;
- (void)postProcessSamples:(struct MTLStatSampleRec *)arg1 toUserDst:(unsigned long long *)arg2 numSamples:(unsigned long long)arg3;
- (void)postProcessCommandbuffer;
- (struct MTLStatSampleRec *)newSample;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) BOOL profilingEnabled;
@property(readonly) NSError *error;
- (void)setCurrentCommandEncoder:(id)arg1;
- (BOOL)skipRender;
- (void)kernelSubmitTime;
- (void)_addRetainedObject:(id)arg1;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)runPerfCounterCallbackWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
- (void)didScheduleWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)didSchedule:(unsigned long long)arg1 error:(id)arg2;
- (void)setCommitted:(BOOL)arg1;
- (BOOL)isCommitted;
- (void)waitUntilCompleted;
- (void)addCompletedHandler:(CDUnknownBlockType)arg1;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id)arg1;
- (void)addScheduledHandler:(CDUnknownBlockType)arg1;
- (void)commitAndReset;
- (BOOL)commitAndWaitUntilSubmitted;
- (void)commitAndHold;
- (void)commit;
- (void)enqueue;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3;

// Remaining properties
@property(copy) NSString *label; // @dynamic label;

@end

