//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineForceSyncTaskDelegate-Protocol.h>
#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLBackgroundDownloadsTask, CPLCleanupTask, CPLDerivativesFilter, CPLEngineForceSyncTask, CPLEngineLibrary, CPLMinglePulledChangesTask, CPLPlatformObject, CPLPullFromTransportTask, CPLPullScopesTask, CPLPushToTransportTask, CPLScopeUpdateTask, CPLSyncSession, CPLTransportUpdateTask, NSError, NSMutableArray, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncTaskDelegate, CPLAbstractObject, CPLEngineComponent, CPLEngineForceSyncTaskDelegate>
{
    id <CPLEngineStoreUserIdentifier> _transportUserIdentifier;
    CPLDerivativesFilter *_derivativesFilter;
    BOOL _setupIsDone;
    BOOL _shouldUpdateDisabledFeatures;
    BOOL _closed;
    id <CPLEngineTransportSetupTask> _setupTask;
    CDUnknownBlockType _closingCompletionHandler;
    CPLSyncSession *_session;
    NSObject<OS_dispatch_queue> *_lock;
    NSError *_lastError;
    CPLCleanupTask *_cleanupTask;
    CPLTransportUpdateTask *_transportUpdateTask;
    CPLPullScopesTask *_pullScopesTask;
    CPLScopeUpdateTask *_scopeUpdateTask;
    CPLPushToTransportTask *_pushHighPriorityTask;
    CPLPushToTransportTask *_pushTask;
    CPLPullFromTransportTask *_pullTask;
    CPLMinglePulledChangesTask *_mingleTask;
    CPLBackgroundDownloadsTask *_backgroundDownloadsTask;
    CPLEngineForceSyncTask *_currentForceSyncTask;
    CPLEngineForceSyncTask *_pendingForceSyncTask;
    unsigned long long _shouldRestartSessionFromState;
    NSMutableArray *_lastErrors;
    BOOL _foreground;
    BOOL _boostPriority;
    BOOL _hasOverridenBudgets;
    BOOL _disabledSchedulerForForceSyncTask;
    BOOL _shouldTryToMingleImmediately;
    CPLPlatformObject *_platformObject;
    CPLEngineLibrary *_engineLibrary;
    unsigned long long _state;
}

+ (id)platformImplementationProtocol;
+ (unsigned int)qualityOfServiceForForcedTasks;
+ (unsigned int)qualityOfServiceForSyncSessions;
+ (id)shortDescriptionForState:(unsigned long long)arg1;
+ (id)descriptionForState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldTryToMingleImmediately; // @synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately;
@property(nonatomic, setter=_setState:) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) CPLPlatformObject *platformObject; // @synthesize platformObject=_platformObject;
- (void)getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)componentName;
@property(readonly, nonatomic) NSError *lastError;
- (void)endClientWork:(id)arg1;
- (void)beginClientWork:(id)arg1;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (BOOL)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForBackgroundDownloads;
- (BOOL)_launchNecessaryTasksForBackgroundDownloads;
- (id)_descriptionForBackgroundDownloadsTasks;
- (BOOL)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (void)_releasePowerAssertionForMingleTaskIfNecessary;
- (void)_retainPowerAssertionForMingleTaskIfNecessary;
- (float)_progressForPullTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPull;
- (BOOL)_launchNecessaryTasksForPull;
- (id)_descriptionForPullTasks;
- (BOOL)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForPushTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPush:(BOOL)arg1;
- (BOOL)_launchNecessaryTasksForPush;
- (id)_descriptionForPushTasks;
- (BOOL)_didFinishPushHighPriorityTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForPushHighPriorityTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPushHighPriority:(BOOL)arg1;
- (BOOL)_launchNecessaryTasksForPushHighPriority;
- (id)_descriptionForPushHighPriorityTasks;
- (BOOL)_didFinishScopeUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForScopeUpdateTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForScopeUpdate;
- (BOOL)_launchNecessaryTasksForScopeUpdate;
- (id)_descriptionForScopeUpdateTasks;
- (BOOL)_didFinishTransportUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForTransportUpdateTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForTransportUpdate;
- (BOOL)_launchNecessaryTasksForTransportUpdate;
- (id)_descriptionForTransportUpdateTasks;
- (BOOL)_didFinishPullScopesTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForPullScopesTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForPullScopes;
- (BOOL)_launchNecessaryTasksForPullScopes;
- (id)_descriptionForPullScopesTasks;
- (BOOL)_didFinishCleanupTask:(id)arg1 withError:(id)arg2 shouldStop:(char *)arg3;
- (float)_progressForCleanupTask:(id)arg1 progress:(float)arg2;
- (void)_cancelAllTasksForCleanup;
- (BOOL)_launchNecessaryTasksForCleanup;
- (id)_descriptionForCleanupTasks;
- (BOOL)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(char *)arg2;
- (void)_cancelAllTasksForSetup;
- (BOOL)_launchSetupTask;
- (id)_descriptionForSetupTasks;
- (void)_launchForceSyncTaskIfNecessary;
- (void)forceSyncTaskHasBeenCancelled:(id)arg1;
- (void)launchForceSyncTaskWhenPossible:(id)arg1;
- (BOOL)_checkForegroundAtLaunchForForceSyncTask;
- (void)_reenableSchedulerForForceSyncTaskIfNecessary;
- (void)_disabledSchedulerForForceSyncTaskIfNecessary;
- (BOOL)_prepareAndLaunchSyncTask:(id *)arg1;
- (void)setBoostPriority:(BOOL)arg1;
- (void)_overrideBudgetsIfNeeded;
- (void)setSyncSessionShouldBeForeground:(BOOL)arg1;
- (void)requestDisabledFeaturesUpdate;
- (void)discardTransportUserIdentifier;
- (void)resetTransportUserIdentifier;
- (void)cancelCurrentSyncSession;
- (void)startSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2 rewind:(BOOL)arg3;
- (void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 session:(id)arg2 cancelIfNecessary:(BOOL)arg3;
- (void)_advanceToNextStateLockedMinimalState:(unsigned long long)arg1;
- (void)_advanceToNextStateLocked;
- (void)_notifyEndOfSyncSession;
- (BOOL)_launchNecessaryTasksForCurrentStateLocked;
- (id)_descriptionForLaunchedTasks;
- (id)_shortDescriptionForCurrentState;
- (id)_descriptionForCurrentState;
- (void)_moveAllTasksToBackgroundLocked;
- (void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(BOOL)arg1;
- (void)_cancelAllTasksLocked;
- (void)_resetErrorForSyncSession;
- (void)_setErrorForSyncSession:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)dispatchForcedTaskBlock:(CDUnknownBlockType)arg1;
- (void)dispatchSyncBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

