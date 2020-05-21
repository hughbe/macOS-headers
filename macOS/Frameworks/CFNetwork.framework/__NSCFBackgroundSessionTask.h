//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFURLSessionTask.h>

#import <CFNetwork/NSURLSessionTaskSubclass-Protocol.h>

@class NSError, NSString;

@interface __NSCFBackgroundSessionTask : __NSCFURLSessionTask <NSURLSessionTaskSubclass>
{
    BOOL _sentCancel;
    BOOL _sentDidFinish;
    NSError *_immediateError;
}

@property(retain) NSError *immediateError; // @synthesize immediateError=_immediateError;
- (void)set_TLSMaximumSupportedProtocolVersion:(unsigned short)arg1;
- (void)set_TLSMinimumSupportedProtocolVersion:(unsigned short)arg1;
- (void)set_discretionaryOverride:(long long)arg1;
- (id)_timingData;
- (void)setTaskDescription:(id)arg1;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_didResume;
- (void)_onqueue_adjustExpectedProgressTarget:(unsigned long long)arg1;
- (void)_onqueue_adjustBytesPerSecondLimit:(long long)arg1;
- (void)_onqueue_adjustPriorityHint:(float)arg1;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_resume;
- (id)_onqueue_additionalBackgroundProperties;
- (void)_onqueue_cancel;
- (void)_onqueue_suspend;
- (void)_onqueue_didSendBodyBytes:(long long)arg1 totalBytesSent:(long long)arg2 totalBytesExpectedToSend:(long long)arg3;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didFinishCollectingMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1;
- (void)_onqueue_connectionWaitingWithReason:(long long)arg1;
- (void)_onqueue_connectionWaitingWithError:(id)arg1;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveChallenge:(id)arg1 request:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithBackgroundTask:(id)arg1;
- (id)initWithTaskInfo:(id)arg1 taskGroup:(id)arg2 ident:(unsigned long long)arg3;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

