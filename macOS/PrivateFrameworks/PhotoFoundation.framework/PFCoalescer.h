//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PFCoalescerContext;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PFCoalescer : NSObject
{
    long long _resetSequenceNumber;
    long long _lastUpdateResetSequenceNumber;
    BOOL _usesTarget;
    BOOL _initialDelayTimerIsArmed;
    double _initialDelay;
    NSString *_label;
    id _target;
    id _buffer;
    NSObject<OS_dispatch_queue> *_sourceQueue;
    id _targetQueue;
    long long _queueType;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_source;
    CDUnknownBlockType _snapshotAndDrainHandler;
    CDUnknownBlockType _action;
    PFCoalescerContext *_context;
    long long _state;
    NSObject<OS_os_transaction> *_transaction;
    unsigned long long _stateCaptureHandlerHandle;
}

+ (CDUnknownBlockType)mutableCollectionBufferDrainer;
+ (id)arrayCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (id)arrayCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)dictionaryCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (id)dictionaryCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)setCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (id)setCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)mutableContainerCoalescerWithLabel:(id)arg1 container:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (id)mutableContainerCoalescerWithLabel:(id)arg1 target:(id)arg2 container:(id)arg3 queue:(id)arg4 action:(CDUnknownBlockType)arg5;
+ (id)coalescerWithLabel:(id)arg1 queue:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)coalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (id)coalescerWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(CDUnknownBlockType)arg5 action:(CDUnknownBlockType)arg6;
- (void).cxx_destruct;
@property unsigned long long stateCaptureHandlerHandle; // @synthesize stateCaptureHandlerHandle=_stateCaptureHandlerHandle;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property long long state; // @synthesize state=_state;
@property BOOL initialDelayTimerIsArmed; // @synthesize initialDelayTimerIsArmed=_initialDelayTimerIsArmed;
@property(retain) PFCoalescerContext *context; // @synthesize context=_context;
@property(copy) CDUnknownBlockType action; // @synthesize action=_action;
@property(copy) CDUnknownBlockType snapshotAndDrainHandler; // @synthesize snapshotAndDrainHandler=_snapshotAndDrainHandler;
@property(retain) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property long long queueType; // @synthesize queueType=_queueType;
@property(retain) id targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain) NSObject<OS_dispatch_queue> *sourceQueue; // @synthesize sourceQueue=_sourceQueue;
@property(retain) id buffer; // @synthesize buffer=_buffer;
@property BOOL usesTarget; // @synthesize usesTarget=_usesTarget;
@property __weak id target; // @synthesize target=_target;
@property(retain) NSString *label; // @synthesize label=_label;
@property double initialDelay; // @synthesize initialDelay=_initialDelay;
- (void)setupStateCaptureHandler;
- (id)stateInformation;
- (void)_resetWhileLocked;
- (void)resetAndShutDown;
- (void)reset;
- (void)update;
- (void)update:(CDUnknownBlockType)arg1;
- (void)performEventActionWithTarget:(id)arg1;
- (id)initWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(CDUnknownBlockType)arg5 action:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;

@end

