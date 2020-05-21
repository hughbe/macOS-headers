//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/AMRunnerControllerDelegate-Protocol.h>

@class AMRemoteRunnerController, NSError, NSRunLoop, NSString;
@protocol OS_dispatch_queue;

@interface AMWorkspace : NSObject <AMRunnerControllerDelegate>
{
    id _reserved;
    id _reserved2;
    id _reserved3;
    NSError *_error;
    BOOL _didStart;
    BOOL _finishedRunning;
}

+ (id)sharedWorkspace;
- (void).cxx_destruct;
@property BOOL finishedRunning; // @synthesize finishedRunning=_finishedRunning;
@property BOOL didStart; // @synthesize didStart=_didStart;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_reserved3;
@property(retain) id output; // @synthesize output=_reserved2;
@property(retain) AMRemoteRunnerController *runnerController; // @synthesize runnerController=_reserved;
- (void)runnerControllerDidStop:(id)arg1;
- (void)runnerControllerDidRun:(id)arg1;
- (void)runnerControllerWillRun:(id)arg1;
- (void)runnerController:(id)arg1 didError:(id)arg2;
- (id)runWorkflowAtPath:(id)arg1 withInput:(id)arg2 error:(id *)arg3;
- (void)_runWorkflowOnMainThreadWithURL:(id)arg1 input:(id)arg2;
- (void)_runOnBackgroundThreadWithWorkflow:(id)arg1 input:(id)arg2;
- (void)_runOnDispatchQueueWithInput:(id)arg1;
- (void)_finishRunningOnBackgroundThreadWithOutput:(id)arg1 error:(id)arg2;
- (void)_performOnExcecutionRunLoop:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSRunLoop *runLoop;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

