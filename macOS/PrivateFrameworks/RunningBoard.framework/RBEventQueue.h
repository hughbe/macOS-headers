//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/BSDescriptionProviding-Protocol.h>

@class NSArray, NSMutableArray, NSString, RBEventQueueEvent;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RBEventQueue : NSObject <BSDescriptionProviding>
{
    NSMutableArray *_eventQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_eventTimer;
    BOOL _isProcessingEvents;
    BOOL _inModifyBlock;
    BOOL _dirtyDuringModify;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_eventQueue;
- (id)_createTimerWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_queue_startEventTimer;
- (void)_queue_stopEventTimer;
- (void)_queue_processEvents;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)removeEvents:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)batchModify:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) RBEventQueueEvent *nextEvent;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

