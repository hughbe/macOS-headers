//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLHighlightItemModelReader-Protocol.h>
#import <PhotoLibraryServices/PLMomentGenerationDataManagement-Protocol.h>

@class CNContactStore, NSDictionary, NSManagedObjectContext, NSString, PLCameraAppWatcher, PLLibraryServicesManager, PLMomentGeneration, PLPhotoLibrary, PLPhotoLibraryPathManager, PLRoutineService, PLXPCTransaction;

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement, PLHighlightItemModelReader>
{
    PLXPCTransaction *_keepAliveTransaction;
    CDUnknownBlockType _reachabilityBlock;
    CNContactStore *_contactStore;
    PLMomentGeneration *_generator;
    NSDictionary *_generationOptions;
    BOOL _observingReachability;
    BOOL _isLightweightMigrationManager;
    PLPhotoLibraryPathManager *_lightWeightMigrationPathManager;
    PLLibraryServicesManager *_libraryServicesManager;
    PLRoutineService *_routineManager;
    BOOL _shouldPerformLightweightValidation;
    BOOL _previousValidationSucceeded;
    long long _previousValidatedModelVersion;
    PLCameraAppWatcher *_cameraWatcher;
    NSManagedObjectContext *_managedObjectContext;
    PLPhotoLibrary *_momentGenerationLibrary;
}

+ (BOOL)isManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (void)_setManagedObjectContextMomentarilyBlessed:(id)arg1;
+ (void)setManagerMomentarilyBlessed:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) PLPhotoLibrary *momentGenerationLibrary; // @synthesize momentGenerationLibrary=_momentGenerationLibrary;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(readonly, nonatomic) PLCameraAppWatcher *cameraWatcher; // @synthesize cameraWatcher=_cameraWatcher;
@property(nonatomic) BOOL previousValidationSucceeded; // @synthesize previousValidationSucceeded=_previousValidationSucceeded;
@property(nonatomic) long long previousValidatedModelVersion; // @synthesize previousValidatedModelVersion=_previousValidatedModelVersion;
@property(nonatomic) BOOL shouldPerformLightweightValidation; // @synthesize shouldPerformLightweightValidation=_shouldPerformLightweightValidation;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2;
- (void)fetchLocationsOfInterestIfNeeded;
- (BOOL)cameraIsActive;
- (id)locationsOfInterest;
- (BOOL)routineIsAvailable;
- (void)logRoutineInformation;
- (id)replayLogPath;
- (BOOL)wantsMomentReplayLogging;
- (void)verifyAndRepairOrphanedAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)orphanedAssetIDsWithError:(id *)arg1;
- (void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)allAssetIDsNeedingLocationShiftWithError:(id *)arg1;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (id)locationCoordinatesForAssetIDs:(id)arg1;
- (id)insertNewPhotosHighlight;
- (id)insertNewMoment;
- (id)insertNewMomentListForGranularityLevel:(short)arg1;
- (BOOL)deleteAllMomentListsWithError:(id *)arg1;
- (BOOL)deleteAllHighlightsWithError:(id *)arg1;
- (BOOL)deleteAllMomentsWithError:(id *)arg1;
- (BOOL)_batchDeleteForEntityName:(id)arg1 error:(id *)arg2;
- (id)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg1;
- (id)allInvalidAssetsWithError:(id *)arg1;
- (id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 error:(id *)arg2;
- (id)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (id)allMomentLists;
- (id)allMomentListsForLevel:(short)arg1;
- (id)allMomentsWithInvalidReverseLocationData;
- (id)allInvalidMomentIDsWithError:(id *)arg1;
- (id)allMomentIDsWithError:(id *)arg1;
- (id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id *)arg1;
- (id)momentsWithLocationTypeUnprocessedWithError:(id *)arg1;
- (id)allInvalidMomentsWithError:(id *)arg1;
- (id)allMomentsWithError:(id *)arg1;
- (id)allPhotosHighlightsWithPredicate:(id)arg1 error:(id *)arg2;
- (id)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(id)arg2 error:(id *)arg3;
- (id)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (id)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (id)allInvalidPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (id)allPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (id)yearMomentListForYear:(long long)arg1;
- (id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2;
- (id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(BOOL)arg3;
- (id)momentsSinceDate:(id)arg1;
- (id)momentsIntersectingDateInterval:(id)arg1;
- (id)highlightsIntersectingDateInterval:(id)arg1 ofKind:(unsigned short)arg2;
- (id)_highlightsRelationshipKeyPathsForPrefetching;
- (id)_highlightsRelationshipKeyPathsForPrefetchingForKind:(unsigned short)arg1;
- (void)_removeKeepAlive;
- (void)_updateKeepAlive;
- (id)homeAddressDictionary;
- (id)_currentHomeAddressDictionary;
@property(readonly, nonatomic) __weak CNContactStore *_contactStore;
- (BOOL)isNetworkReachable;
- (void)stopObservingNetworkReachabilityChanges;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)fetchParentHighlightItemsForHighlightItems:(id)arg1;
- (id)fetchChildHighlightItemsForHighlightItem:(id)arg1;
- (id)fetchNeighborHighlightItemsForHighlightItems:(id)arg1;
- (id)momentAnalysisTransactionWithName:(const char *)arg1;
- (void)invalidateLocationDataForAssetsInMoment:(id)arg1;
- (void)invalidateLocationDataForAssetsWithOIDs:(id)arg1;
@property(readonly, nonatomic) NSDictionary *generationOptions;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
- (void)resetOnFailure;
- (BOOL)save:(id *)arg1;
- (Class)momentAssetDataClass;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (Class)momentDataClass;
- (BOOL)hasChanges;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id *)arg2;
- (id)momentsWithUniqueIDs:(id)arg1 error:(id *)arg2;
- (id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id *)arg3;
- (id)momentWithUniqueID:(id)arg1 error:(id *)arg2;
- (id)assetsWithUniqueIDs:(id)arg1 error:(id *)arg2;
- (id)assetWithUniqueID:(id)arg1 error:(id *)arg2;
- (id)deletedObjects;
- (id)updatedObjects;
- (id)insertedObjects;
- (void)performDataTransaction:(CDUnknownBlockType)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performDataTransaction:(CDUnknownBlockType)arg1 synchronously:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)performBlock:(CDUnknownBlockType)arg1 synchronously:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidateAllHighlightSubtitles;
- (id)generator;
- (void)reloadGenerationOptions;
- (void)_finalizeInit;
- (void)dealloc;
- (id)initWithLibraryServicesManager:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1 pathManagerForLightweightMigration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

