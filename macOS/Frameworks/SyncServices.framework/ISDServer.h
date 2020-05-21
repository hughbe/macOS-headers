//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SyncServices/ISyncServer-Protocol.h>
#import <SyncServices/NSMachPortDelegate-Protocol.h>
#import <SyncServices/SchemaModificationCallbacks-Protocol.h>

@class ISDDataManager, ISDSyncManager, NSConnection, NSDate, NSMachPort, NSMutableDictionary, NSString, NSTimer;

@interface ISDServer : NSObject <ISyncServer, SchemaModificationCallbacks, NSMachPortDelegate>
{
    ISDDataManager *_dataManager;
    ISDSyncManager *_syncManager;
    NSMutableDictionary *_clientConnections;
    NSDate *_launchDate;
    NSTimer *_inactivityTimer;
    double _inactivityInterval;
    BOOL _isPrivateInstance;
    id _fileLocker;
    NSTimer *_fileLockerTimer;
    long long _tickCount;
    NSConnection *_uiHandlerConnection;
    NSMachPort *_calendarRequestPort;
    NSDate *_timerRefreshDate;
}

+ (id)defaultServer;
+ (void)initialize;
- (void)handleMachMessage:(void *)arg1;
- (id)uiHandler;
- (void)_uiHandlerDied:(id)arg1;
- (void)_cleanupUIHandlerConnection:(id)arg1;
- (bycopy id)detectedSyncAnchorMismatch:(bycopy id)arg1 forClient:(bycopy id)arg2;
- (void)_resetClientsWithLastSyncDatesEarlierThanDate:(bycopy id)arg1 purgeTruth:(bycopy id)arg2 andVacuum:(bycopy id)arg3;
- (bycopy id)_syncDatesForClientsEarlierThanDate:(bycopy id)arg1;
- (void)_reallyResetSyncData;
- (void)_resetSyncData;
- (void)killConnection:(byref id)arg1;
- (oneway void)cancelSyncSessionForPlanWithIdentifier:(bycopy id)arg1;
- (void)_reallyCancelSyncSessionForPlanWithIdentifier:(bycopy id)arg1;
- (bycopy id)syncPlanWithIdentifier:(bycopy id)arg1;
- (bycopy id)allSyncPlans;
- (id)dictionaryWithInfoForSyncPlan:(id)arg1;
- (bycopy id)syncServerStatistics;
- (bycopy id)addClients:(bycopy id)arg1 toSyncPlanWithIdentifier:(bycopy id)arg2;
- (bycopy id)setOneShotSyncGroupWithClientIdentifiers:(bycopy id)arg1 entityNames:(bycopy id)arg2;
- (bycopy id)clientWithId:(bycopy id)arg1 didEndSyncPlan:(bycopy id)arg2 finishedSyncing:(bycopy id)arg3;
- (void)clientWithId:(bycopy id)arg1 didEndPushingChangesInSyncPlan:(bycopy id)arg2 hasChanges:(bycopy id)arg3;
- (void)clientWithId:(bycopy id)arg1 didBeginPushingChangesInSyncPlan:(bycopy id)arg2 negotiatedSyncStates:(bycopy id)arg3;
- (int)clientNumberForClient:(id)arg1;
- (bycopy id)clientWithId:(bycopy id)arg1 wantsToBeginSyncPlanRightNow:(bycopy id)arg2;
- (bycopy id)getServerNameNumberMappings;
- (oneway void)mingleForPlanCanceled:(bycopy id)arg1;
- (BOOL)minglerHasFinishedMinglingPlanWithIdentifier:(bycopy id)arg1 exception:(bycopy id)arg2;
- (bycopy id)mingler:(id)arg1 hasStartedMinglingPlanWithIdentifier:(bycopy id)arg2;
- (bycopy id)clientWithId:(bycopy id)arg1 wantsToBeginSyncPlanBeforeDate:(bycopy id)arg2 entityNames:(bycopy id)arg3 pushTruthForEntityNames:(bycopy id)arg4 quietlyPushingTruth:(bycopy id)arg5 callback:(byref id)arg6 withPlanIdentifier:(id)arg7 hasChanges:(bycopy id)arg8 skip:(bycopy id)arg9;
- (void)_lostClientConnection:(id)arg1;
- (void)_stopMonitoringConnectionForClientId:(id)arg1;
- (void)_startMonitoringConnectionForProxy:(id)arg1 clientId:(id)arg2;
- (bycopy id)schemaNameForDataclass:(bycopy id)arg1;
- (void)unregisterSchemaWithName:(bycopy id)arg1;
- (void)autoregisterDefaultClients;
- (void)autoregisterSystemSchemas;
- (void)_autoregisterSystemSchemaWithPath:(id)arg1;
- (void)registerSchemaWithDescription:(bycopy id)arg1 descriptionFilePath:(bycopy id)arg2 bundlePath:(bycopy id)arg3 linkedOnTiger:(bycopy id)arg4;
- (void)registerSchemaWithDescription:(bycopy id)arg1 descriptionFilePath:(bycopy id)arg2 linkedOnTiger:(bycopy id)arg3;
- (void)cancelSyncPlansInvolvingEntityNames:(id)arg1;
- (bycopy id)schemaDataModifiedSinceAnchor:(inout unsigned int *)arg1 dataClassesNamed:(id)arg2 entitiesNamed:(id)arg3;
- (void)validateClientDescriptionFilesAndUnregisterIfNecessary;
- (void)setFilterData:(bycopy id)arg1 filteredEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (bycopy id)filterDataForClientWithIdentifier:(bycopy id)arg1;
- (void)setTrackRecordModificationTimes:(id)arg1 forClientWithIdentifier:(id)arg2;
- (void)setSyncsAfterClients:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2;
- (void)setShouldSynchronize:(bycopy id)arg1 withClientsOfType:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (bycopy id)setSyncMode:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (void)setShouldReplaceClientRecords:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (void)setEnabled:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (void)setHasDynamicSyncAlertHandler:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2;
- (void)setSyncAlertToolPath:(bycopy id)arg1 bundleId:(bycopy id)arg2 bundleRelativePath:(bycopy id)arg3 forClientWithIdentifier:(bycopy id)arg4;
- (void)setImagePath:(bycopy id)arg1 bundleId:(bycopy id)arg2 bundleRelativePath:(bycopy id)arg3 forClientWithIdentifier:(bycopy id)arg4;
- (void)setDisplayName:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2;
- (void)setNeverFormatsRelationships:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2;
- (void)setUseLocalIdsForGUIDs:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2;
- (bycopy id)latestGenerationForEntitiesNamed:(bycopy id)arg1;
- (bycopy id)allClients;
- (void)unregisterClientWithIdentifier:(bycopy id)arg1;
- (bycopy id)registerClientWithIdentifier:(bycopy id)arg1 description:(bycopy id)arg2 descriptionFilePath:(bycopy id)arg3 descriptionBundleId:(bycopy id)arg4 descriptionBundleRelativePath:(bycopy id)arg5;
- (bycopy id)registerClientWithIdentifier:(bycopy id)arg1 description:(bycopy id)arg2 descriptionFilePath:(bycopy id)arg3 descriptionBundleId:(bycopy id)arg4 descriptionBundleRelativePath:(bycopy id)arg5 descriptionBinRelativePath:(bycopy id)arg6;
- (bycopy id)clientsWithIdentifiers:(bycopy id)arg1 modifiedSinceAnchor:(inout unsigned int *)arg2;
- (void)_refreshLockFile:(id)arg1;
- (void)_timeToDie:(id)arg1;
- (void)setTimeIntervalToWaitBeforeDying:(double)arg1;
- (void)refreshWatchdogTimer;
- (void)stopWatchdog;
- (void)startWatchdog;
- (void)setCalendarRequestPort:(id)arg1;
- (void)setTimerRefreshDate:(id)arg1;
- (void)fileLockWasStolen;
- (void)resetEntityNamesAndSetAllClientsToRefresh:(bycopy id)arg1;
- (void)_resetEntityNamesAndSetAllClientsToRefresh:(id)arg1;
- (oneway void)detectedDataDirectoryCorruption;
- (oneway void)resetClientWithIdentifier:(bycopy id)arg1;
- (oneway void)resetSyncModesForClientWithIdentifier:(bycopy id)arg1;
- (void)_sayGoodnightGracieSkippingVacuum:(BOOL)arg1;
- (oneway void)sayGoodnightGracie;
- (void)_vacuum;
- (bycopy id)serverPID;
- (oneway void)pingFromClientWithIdentifier:(bycopy id)arg1 withPlanIdentifier:(bycopy id)arg2;
- (oneway void)removeLockFile;
- (bycopy id)isSyncServerAvailable:(inout id *)arg1;
- (void)setIsPrivateInstance:(BOOL)arg1;
- (BOOL)isPrivateInstance;
- (void)setSyncManager:(id)arg1;
- (id)dataManager;
- (void)setDataManager:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setFileLocker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

