//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/AMRunnerControl-Protocol.h>
#import <Automator/AMRunnerState-Protocol.h>
#import <Automator/NSProgressReporting-Protocol.h>

@class AMAction, AMFFeedController, AMWorkflow, NSArray, NSError, NSMapTable, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSProgress, NSString;
@protocol AMWorkflowRunnerDelegate;

@interface AMWorkflowRunner : NSObject <AMRunnerState, AMRunnerControl, NSProgressReporting>
{
    NSMutableArray *_runningActions;
    NSArray *_loopData;
    NSArray *_loopActions;
    NSMutableDictionary *_loopOutput;
    id _workflow;
    NSObject<AMWorkflowRunnerDelegate> *_delegate;
    NSObject<AMWorkflowRunnerDelegate> *_owner;
    unsigned long long _state;
    unsigned long long _runNumber;
    unsigned long long _loopIndex;
    unsigned long long _numberOfTimesToLoop;
    AMAction *_lastRunAction;
    NSError *_currentError;
    id _currentData;
    NSString *_currentRunUUID;
    NSString *_workflowID;
    double _startTime;
    double _endTime;
    NSOperationQueue *_operationQueue;
    BOOL _isLooping;
    BOOL _shouldPauseBeforeNextAction;
    NSProgress *_workflowProgress;
    NSProgress *_actionProgress;
    NSMapTable *_childProgressesByAction;
    AMFFeedController *_feedController;
    NSMutableArray *_progressValueObservedList;
    NSMutableArray *_actionOperationObservedList;
}

+ (id)progressForWorkflow:(id)arg1;
+ (id)_operationKeysToObserve;
- (void).cxx_destruct;
@property(retain) NSMutableArray *actionOperationObservedList; // @synthesize actionOperationObservedList=_actionOperationObservedList;
@property(retain) AMFFeedController *feedController; // @synthesize feedController=_feedController;
@property(retain) NSMapTable *childProgressesByAction; // @synthesize childProgressesByAction=_childProgressesByAction;
@property(retain) NSProgress *actionProgress; // @synthesize actionProgress=_actionProgress;
@property(retain) NSProgress *workflowProgress; // @synthesize workflowProgress=_workflowProgress;
@property(retain) NSMutableArray *progressValueObservedList; // @synthesize progressValueObservedList=_progressValueObservedList;
@property BOOL shouldPauseBeforeNextAction; // @synthesize shouldPauseBeforeNextAction=_shouldPauseBeforeNextAction;
@property BOOL isLooping; // @synthesize isLooping=_isLooping;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property double endTime; // @synthesize endTime=_endTime;
@property double startTime; // @synthesize startTime=_startTime;
@property __weak AMAction *lastRunAction; // @synthesize lastRunAction=_lastRunAction;
@property unsigned long long runNumber; // @synthesize runNumber=_runNumber;
@property unsigned long long numberOfTimesToLoop; // @synthesize numberOfTimesToLoop=_numberOfTimesToLoop;
@property unsigned long long loopIndex; // @synthesize loopIndex=_loopIndex;
@property(retain) NSMutableDictionary *loopOutput; // @synthesize loopOutput=_loopOutput;
@property(retain) NSArray *loopActions; // @synthesize loopActions=_loopActions;
@property(retain) NSArray *loopData; // @synthesize loopData=_loopData;
@property(retain) id currentData; // @synthesize currentData=_currentData;
@property(retain) NSError *currentError; // @synthesize currentError=_currentError;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) NSMutableArray *runningActions; // @synthesize runningActions=_runningActions;
@property(nonatomic) __weak NSObject<AMWorkflowRunnerDelegate> *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSObject<AMWorkflowRunnerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AMWorkflow *workflow; // @synthesize workflow=_workflow;
@property(retain) NSString *workflowID; // @synthesize workflowID=_workflowID;
@property(retain) NSString *currentRunUUID; // @synthesize currentRunUUID=_currentRunUUID;
- (void)clearWorkflowProgress;
- (void)completeWorkflowProgress;
- (void)completeProgressForAction:(id)arg1;
- (void)updateProgressForAction:(id)arg1;
- (void)startProgressForAction:(id)arg1;
@property(readonly) double totalRunTime;
- (void)logMessage:(id)arg1 withLevel:(unsigned long long)arg2 fromAction:(id)arg3;
- (void)_workflowRunner_logMessageOnMainThread:(id)arg1;
- (id)errorWithError:(id)arg1 fromAction:(id)arg2;
- (void)actionDidRun:(id)arg1 error:(id)arg2;
- (void)_workflowRunner_actionErrorOnMainThreadWithDictionary:(id)arg1;
- (void)_workflowRunner_didRunActionOnMainThread:(id)arg1;
- (void)actionWillRun:(id)arg1;
- (void)_workflowRunner_willRunActionOnMainThread:(id)arg1;
- (id)temporaryItemsPath;
- (void)finish;
- (void)cleanUp;
- (void)workflowStopped;
- (void)reportErrors;
- (void)_workflowRunner_reportErrorOnMainThread:(id)arg1;
- (void)stopWithError:(id)arg1;
- (void)saveLoopOutputAndReset;
- (id)loopActionsStartingWithAction:(id)arg1;
- (void)loopWorkflowFromAction:(id)arg1 withInput:(id)arg2;
- (void)_workflowRunner_didResumeWithActionOnMainThread:(id)arg1;
- (void)pause;
- (void)step;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_observeValueOnMainThreadWithDictionary:(id)arg1;
- (void)enqueueAction:(id)arg1;
- (void)_removeProgressObservingForActionIfNeeded:(id)arg1;
- (void)_addProgressObservingForActionIfNeeded:(id)arg1;
- (void)_clearAllProgressObserving;
- (void)_clearAllActionOperationObserving;
- (void)_unobserveActionOperation:(id)arg1;
- (void)_observeActionOperation:(id)arg1;
- (void)workflowCompleted;
- (void)runAction:(id)arg1 withInput:(id)arg2 loopParent:(id)arg3;
- (void)runNextActionAndConvertDataFromAction:(id)arg1;
- (void)_workflowRunner_didRunConversionOnMainThread:(id)arg1;
- (void)_workflowRunner_willRunConversionOnMainThread:(id)arg1;
- (void)runChildrenOfAction:(id)arg1;
- (void)runAction:(id)arg1;
- (void)run;
- (id)preflightWorkflow;
@property(readonly) NSProgress *progress;
@property(readonly, getter=isStopping) BOOL stopping;
@property(readonly, getter=isPaused) BOOL paused;
@property(readonly, getter=isRunning) BOOL running;
@property(readonly, getter=isIdle) BOOL idle;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

