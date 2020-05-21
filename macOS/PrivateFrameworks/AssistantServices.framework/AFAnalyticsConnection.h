//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAnalyticsService-Protocol.h>
#import <AssistantServices/AFAnalyticsServiceDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface AFAnalyticsConnection : NSObject <AFAnalyticsServiceDelegate, AFAnalyticsService>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    unsigned long long _numberOfEventsBeingSent;
    NSObject<OS_dispatch_group> *_group;
    BOOL _needsCleanUpConnection;
}

- (void).cxx_destruct;
@property BOOL needsCleanUpConnection; // @synthesize needsCleanUpConnection=_needsCleanUpConnection;
- (void)_idleTimerFired;
- (void)_stopIdleTimer;
- (void)_startIdleTimer;
- (void)_cleanUpConnection;
- (void)_cleanUpConnectionIfNeeded;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (id)_connection;
- (void)_didFinishSendingEvents:(id)arg1;
- (void)_willStartSendingEvents:(id)arg1;
- (void)_handleSuccessCallbackForEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2 numberOfRetries:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_sendEvents:(id)arg1 numberOfRetries:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)boostQueuedEvents:(CDUnknownBlockType)arg1;
- (oneway void)flushStagedEventsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
- (oneway void)endEventsGrouping;
- (oneway void)beginEventsGrouping;
- (oneway void)stageEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (oneway void)stageEvents:(id)arg1;
- (oneway void)stageEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

