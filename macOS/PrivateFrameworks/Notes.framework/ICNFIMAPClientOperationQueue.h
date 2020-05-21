//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class ICNFIMAPClientDoneOperation, ICNFIMAPClientSelectOperation, ICNFIMAPClientSuspendOperation, ICNFIMAPGateway, ICNFMCActivityMonitor, NSObject, NSRecursiveLock, NSString;
@protocol OS_dispatch_source;

@interface ICNFIMAPClientOperationQueue : NSOperationQueue
{
    ICNFIMAPClientDoneOperation *_doneOperation;
    ICNFIMAPClientSelectOperation *_selectOperation;
    ICNFIMAPClientSuspendOperation *_suspendOperation;
    NSRecursiveLock *_activityMonitorLock;
    NSObject<OS_dispatch_source> *_activityFinishTimer;
    BOOL _activityMonitorIsActive;
    NSRecursiveLock *_addOperationLock;
    ICNFIMAPGateway *_gateway;
    NSString *_activityName;
    ICNFMCActivityMonitor *_activityMonitor;
}

- (void).cxx_destruct;
@property(readonly) ICNFMCActivityMonitor *activityMonitor; // @synthesize activityMonitor=_activityMonitor;
@property(copy) NSString *activityName; // @synthesize activityName=_activityName;
@property(retain) ICNFIMAPGateway *gateway; // @synthesize gateway=_gateway;
@property(retain, nonatomic) NSRecursiveLock *addOperationLock; // @synthesize addOperationLock=_addOperationLock;
- (id)description;
- (void)refreshIdle;
- (void)finishIdling;
@property(retain) ICNFIMAPClientSuspendOperation *suspendOperation;
- (void)suspendIfNeededAndClear:(BOOL)arg1;
- (BOOL)setupDependenciesOnSuspendCreatingIfNeeded;
- (BOOL)shouldAllowIdleToExecute:(id)arg1;
@property(readonly, nonatomic) BOOL isIdle;
- (void)clearDoneWithOperation:(id)arg1;
- (void)_setupDependeciesOnDone;
- (BOOL)refreshDoneWithGateway:(id)arg1 operation:(id)arg2;
- (void)setDoneToReady;
- (void)changeSelectDependenciesTo:(id)arg1;
- (id)newSelectOperationForResumingIfNeeded;
- (BOOL)waitUntilOperationIsFinished:(id)arg1;
- (BOOL)addClientOperation:(id)arg1 outUpdatedOperation:(id *)arg2;
@property(retain) ICNFIMAPClientSelectOperation *selectOperation;
@property(retain) ICNFIMAPClientDoneOperation *doneOperation;
@property(readonly, copy, nonatomic) NSString *selectedMailboxName;
- (void)activityDidFinish:(id)arg1;
- (void)_postDelayedActivityFinished;
- (void)_clearActivityFinishTimer;
- (void)activityDidStart:(id)arg1;
- (id)init;
- (void)dealloc;

@end

