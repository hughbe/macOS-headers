//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMCloudKitHooks : NSObject
{
}

+ (id)logHandle;
+ (id)sharedInstance;
+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
- (BOOL)mocAccountsMatch;
- (void)reportMetricToCK:(id)arg1 withDict:(id)arg2;
- (void)reportMetricToCK:(id)arg1 withSuccess:(BOOL)arg2;
- (void)reportMetricToCK:(id)arg1;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (void)broadcastCloudKitStateAfterFetchingAccountStatus;
- (void)broadcastCloudKitState;
- (void)tryToAutoCollectLogsWithErrorString:(id)arg1 sendLogsTo:(id)arg2;
- (void)fetchCloudKitSyncStateDebuggingInfo:(id)arg1;
- (id)syncStateDictionary;
- (void)syncDeletesToCloudKit;
- (void)printCachedRampState;
- (void)fetchLatestRampState;
- (void)writeCloudKitSyncCounts:(id)arg1;
- (void)fetchSyncStateStatistics;
- (void)updateAttachmentFileSizes;
- (void)purgeAttachments:(long long)arg1;
- (void)metricAttachments:(long long)arg1;
- (void)deleteSalt;
- (void)printCachedSalt;
- (void)fetchLatestSalt;
- (void)clearTombStoneMessagesTable;
- (void)loadDeletedMessagesWithLimit:(long long)arg1;
- (void)_updateCloudKitState;
- (void)_updateCloudKitStateWithDictionary:(id)arg1;
- (id)exitDate;
- (BOOL)isInExitState;
- (void)_didAttemptToDisableAllDevicesResult:(BOOL)arg1;
- (BOOL)isDisablingDevices;
- (void)_didPerformAdditionalStorageRequiredCheckWithSuccess:(BOOL)arg1 additionalStorageRequired:(unsigned long long)arg2 forAccountId:(id)arg3 error:(id)arg4;
- (long long)isChangingEnabledState;
- (void)_didAttemptToSetEnabledTo:(BOOL)arg1 result:(BOOL)arg2;
- (id)lastSyncDate;
- (BOOL)isSyncing;
- (BOOL)isStartingSync;
- (void)initiateSync;
- (void)setShouldOptimizeAttachmentStorage:(BOOL)arg1;
- (BOOL)shouldOptimizeAttachmentStorage;
- (BOOL)eligibleForTruthZone;
- (BOOL)rampedIntoTruthZone;
- (BOOL)removedFromiCloudBackup;
- (void)tryToDisableAllDevices;
- (void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
- (void)performAdditionalStorageRequiredCheck;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (BOOL)shouldShowCloudKitUI;
- (void)sendRestoreFailuresLogDumps;
- (void)clearDataFromCloudKit;
- (void)clearLocalSyncState;
- (void)loadDirtyMessagesWithLimit:(long long)arg1;
- (void)initiatePeriodicSync;
- (void)downloadAttachmentAssets;
- (void)syncMessages;
- (void)deleteExitRecord;
- (void)fetchExitRecord;
- (void)writeExitRecord;
- (void)deleteMessagesZone;
- (void)writeDirtyMessages;
- (void)deleteAttachmentZone;
- (void)syncAttachments;
- (void)writeAttachments;
- (void)createAttachmentZone;
- (void)clearChatZoneSyncToken;
- (void)markAllChatsAsDirty;
- (void)syncChats;
- (void)deleteChatZone;
- (void)writeDirtyChats;
- (void)createChatZone;
- (void)setupIMCloudKitHooks;
- (void)clearAnalyticDefaultsAndLocalSyncState;
- (void)uploadDailyAnalyticstoCloudKit;
- (id)init;
- (id)logHandle;

@end

