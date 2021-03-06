//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDictionary, NSHashTable, NSMutableDictionary, PLClientServerTransaction, PLPhotoLibrary, PLPhotoLibraryPathManager, PLSearchIndexDateFormatter, PLSearchMetadataStore, PLThrottleTimer, PLZeroKeywordStore, PSIDatabase;
@protocol OS_dispatch_queue, PLSearchIndexManagerSceneTaxonomyProxy;

@interface PLSearchIndexManager : NSObject
{
    PLSearchIndexDateFormatter *_dateFormatter;
    PLPhotoLibraryPathManager *_pathManager;
    PLPhotoLibrary *_photoLibrary;
    PSIDatabase *_db;
    PLZeroKeywordStore *_zeroKeywordStore;
    PLSearchMetadataStore *_searchMetadataStore;
    PLThrottleTimer *_throttleTimer;
    PLClientServerTransaction *_serverTransaction;
    Class _sceneTaxonomyProxyClass;
    id <PLSearchIndexManagerSceneTaxonomyProxy> _sceneTaxonomyProxy;
    NSDictionary *_searchSystemInfo;
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_inqUUIDsToProcess;
    NSMutableDictionary *_inqGraphDataByUUID;
    NSMutableDictionary *_inqSynonymsByIndexCategoryMask;
    BOOL _receivedUpdatesWhileIndexing;
    BOOL _hasScheduledCloseIndex;
    BOOL _hasValidSearchIndex;
    BOOL _hasValidSearchSupportingData;
    BOOL _shouldCheckLookupTableIsOutOfSync;
    BOOL _shouldCheckDatabaseIntegrity;
    BOOL _isTrackingRebuild;
    long long _rebuildReason;
    long long _updateState;
    double _lastIndexingStartTime;
    BOOL _startedIndexing;
    struct os_unfair_lock_s _stateLock;
    BOOL _searchIndexInvalidated;
    NSHashTable *_blocksOnQueueAfterDelay;
    BOOL __indexing;
    CDUnknownBlockType __inqAfterIndexingDidIterate;
    NSCountedSet *__pauseReasons;
}

+ (void)setShouldIndexFilenames:(BOOL)arg1;
+ (BOOL)shouldIndexFilenames;
+ (id)localeForSearchIndex;
+ (id)_defaultDatabaseDirectoryWithPathManager:(id)arg1;
+ (int)currentSearchIndexVersion;
+ (id)fetchMomentUUIDsToPopulateAssetSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchHighlightUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchMemoryUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAlbumUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchAssetUUIDsToPopulateSearchIndexWithManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)fetchMomentsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchHighlightsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchMemoriesWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAlbumsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchAssetsWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSCountedSet *_pauseReasons; // @synthesize _pauseReasons=__pauseReasons;
@property(copy, nonatomic, setter=_setInqAfterIndexingDidIterate:) CDUnknownBlockType _inqAfterIndexingDidIterate; // @synthesize _inqAfterIndexingDidIterate=__inqAfterIndexingDidIterate;
@property(getter=_isIndexing, setter=_setIndexing:) BOOL _indexing; // @synthesize _indexing=__indexing;
- (id)searchIndexManagerLog;
- (id)_featuredPeopleIdentifiersFromPhotosGraphData:(id)arg1 photosGraphVersion:(long long)arg2;
- (void)_fetchMemoriesToIndexWithUUIDs:(id)arg1 managedObjectContext:(id)arg2 result:(CDUnknownBlockType)arg3;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetUUIDsBySocialGroup:(id)arg1;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1;
- (id)_inqKeywordsByCategoryMaskByAssetUUIDFromAssetSearchKeywords:(id)arg1 andAssetUUIDsBySocialGroup:(id)arg2;
- (void)_inqResumeIndexingIfNeeded;
- (void)_inqValidateSearchIndex;
- (id)_collectionUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (id)_assetUUIDsToRemoveFromUUIDsToProcess:(id)arg1;
- (long long)_inqRebuildReasonIfSearchSupportingDataIsValid;
- (long long)_inqRebuildReasonIfSearchIndexIsValid;
- (id)_inqPhotoLibrary;
- (void)_inqEnsurePhotoLibraryExists;
- (void)_inqEnsureSceneTaxonomyProxyExists;
- (void)_inqIndexPhotoLibrary;
- (void)_inqEnsureSearchProgressExists;
- (void)_inqEnsureSearchSystemInfoExists;
- (void)_inqEnsureSearchIndexExists;
- (void)_inqCloseIndexIfAbleOrForce:(BOOL)arg1 isDelete:(BOOL)arg2;
- (void)_inqDropClientServerTransactionIfNeeded;
- (void)_inqTakeClientServerTransactionIfNeeded;
- (void)_inqScheduleCloseIndexIfNeeded;
- (BOOL)_removeFileAtPath:(id)arg1 description:(id)arg2;
- (id)_dbSearchSystemInfoPath;
- (id)_searchMetadataStorePath;
- (id)_dbPath;
- (id)_oldDbPath;
- (id)_synonymsProcessPath;
- (id)_graphDataProcessPath;
- (id)_cxindexProgressPath;
- (void)applyGraphUpdates:(id)arg1 supportingData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyUpdates:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_updatesEnsuringMutableArraysFromUpdates:(id)arg1;
- (id)_updatesAfterConvertingDetectedFacesToAssetsInUpdates:(id)arg1;
- (id)_updatesAfterConvertingPersonsToAssetsInUpdates:(id)arg1;
- (void)resetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (void)_inqResetSearchIndexWithReason:(long long)arg1 dropCompletion:(CDUnknownBlockType)arg2;
- (void)dropSearchIndexWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)ensureSearchIndexExistsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_inqCloseSearchIndexAndDelete:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_throttleTimerFire:(id)arg1;
- (void)unpauseIndexingWithReason:(id)arg1;
- (void)pauseIndexingWithReason:(id)arg1;
- (void)_setIndexingPaused:(BOOL)arg1 synchronously:(BOOL)arg2 reason:(id)arg3;
- (void)_inqSetIndexingPaused:(BOOL)arg1 reason:(id)arg2;
@property(readonly, getter=isIndexingPaused) BOOL indexingPaused;
- (BOOL)_inqIsIndexingPaused;
- (void)_inqAddUpdatesWithUUIDs:(id)arg1 forKey:(id)arg2;
- (void)enqueuedUUIDsCountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)_inqEnqueuedUUIDsCountForceLoad:(BOOL)arg1;
- (void)_inqEndTrackingUpdateIfNeeded;
- (void)_inqTrackTransitionFromUpdateScheduledToUpdatingIfAble;
- (void)_inqStartTrackingUpdateIfAble;
- (void)_inqEndTrackingRebuildIfNeeded;
- (void)_inqStartTrackingRebuildWithReason:(long long)arg1;
- (BOOL)_inqUpdateWordEmbeddingVersion:(id)arg1;
- (BOOL)_inqUpdateSceneTaxonomySHA:(id)arg1;
- (BOOL)_inqUpdateLocale;
- (BOOL)_inqUpdateVersion;
- (BOOL)_inqUpdateSearchSystemInfo:(id)arg1 forKey:(id)arg2 logMessage:(id)arg3;
- (BOOL)_onQueueAsyncWithDelay:(double)arg1 perform:(CDUnknownBlockType)arg2;
- (BOOL)_onQueueAsync:(CDUnknownBlockType)arg1;
- (BOOL)_onQueueSync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPathManager:(id)arg1;
@property(retain, nonatomic) Class sceneTaxonomyProxyClass;
- (id)defaultSearchMetadataStorePath;
- (id)defaultDatabasePath;
- (id)_defaultDatabaseDirectory;

@end

