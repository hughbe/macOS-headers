//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSObject, NSPredicate, NSSet, NSString, PLXPCTransaction;
@protocol NSCopying, PLMomentAnalysisTransaction, PLMomentAssetData, PLMomentData, PLMomentListData, PLPhotosHighlightData;

@protocol PLMomentGenerationDataManagement <NSObject>
@property(readonly, nonatomic) NSDictionary *generationOptions;
@property(nonatomic) BOOL previousValidationSucceeded;
@property(nonatomic) long long previousValidatedModelVersion;
@property(nonatomic) BOOL shouldPerformLightweightValidation;
- (NSString *)replayLogPath;
- (BOOL)wantsMomentReplayLogging;
- (void)invalidateAllHighlightSubtitles;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(PLXPCTransaction *)arg2;
- (NSArray *)allAssetIDsNeedingLocationShiftWithError:(id *)arg1;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (NSDictionary *)locationCoordinatesForAssetIDs:(NSArray *)arg1;
- (void)logRoutineInformation;
- (void)fetchLocationsOfInterestIfNeeded;
- (NSArray *)locationsOfInterest;
- (BOOL)cameraIsActive;
- (BOOL)routineIsAvailable;
- (NSDictionary *)homeAddressDictionary;
- (BOOL)isNetworkReachable;
- (void)stopObservingNetworkReachabilityChanges;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(void (^)(BOOL))arg1;
- (NSSet *)deletedObjects;
- (NSSet *)updatedObjects;
- (NSSet *)insertedObjects;
- (void)refreshAllObjects;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (void)resetOnFailure;
- (BOOL)save:(id *)arg1;
- (BOOL)hasChanges;
- (id <PLPhotosHighlightData>)insertNewPhotosHighlight;
- (id <PLMomentData>)insertNewMoment;
- (id <PLMomentListData>)insertNewMomentListForGranularityLevel:(short)arg1;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (BOOL)deleteAllMomentListsWithError:(id *)arg1;
- (BOOL)deleteAllHighlightsWithError:(id *)arg1;
- (BOOL)deleteAllMomentsWithError:(id *)arg1;
- (NSArray *)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (NSArray *)allInvalidPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (NSArray *)allPhotosHighlightsWithPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (NSArray *)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(NSPredicate *)arg2 error:(id *)arg3;
- (NSArray *)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id *)arg2;
- (NSArray *)allPhotosHighlightsOfAllKindsWithError:(id *)arg1;
- (NSArray *)highlightsIntersectingDateInterval:(NSDateInterval *)arg1 ofKind:(unsigned short)arg2;
- (NSArray *)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)allInvalidAssetsWithError:(id *)arg1;
- (NSArray *)invalidAssetsIgnoringAssetIdentifiers:(NSSet *)arg1 error:(id *)arg2;
- (NSArray *)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)momentsIntersectingDateInterval:(NSDateInterval *)arg1;
- (NSArray *)orphanedAssetIDsWithError:(id *)arg1;
- (NSArray *)allMomentLists;
- (NSArray *)allMomentListsForLevel:(short)arg1;
- (NSArray *)allMomentsWithInvalidReverseLocationData;
- (NSArray *)allInvalidMomentIDsWithError:(id *)arg1;
- (NSArray *)allMomentIDsWithError:(id *)arg1;
- (NSArray *)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id *)arg1;
- (NSArray *)momentsWithLocationTypeUnprocessedWithError:(id *)arg1;
- (NSArray *)allInvalidMomentsWithError:(id *)arg1;
- (NSArray *)allMomentsWithError:(id *)arg1;
- (id <PLMomentListData>)monthMomentListForMonth:(long long)arg1 year:(long long)arg2;
- (id <PLMomentListData>)yearMomentListForYear:(long long)arg1;
- (NSArray *)momentsBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 sorted:(BOOL)arg3;
- (NSArray *)momentsSinceDate:(NSDate *)arg1;
- (NSArray *)momentsForAssetsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)momentsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (id <PLMomentListData>)momentListWithUniqueID:(NSObject<NSCopying> *)arg1 forLevel:(short)arg2 error:(id *)arg3;
- (void)enumerateAssetsWithIDs:(NSArray *)arg1 usingBlock:(void (^)(id <PLMomentAssetData>, unsigned long long, char *))arg2;
- (id <PLMomentData>)momentWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (NSArray *)assetsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (id <PLMomentAssetData>)assetWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (id <PLMomentAnalysisTransaction>)momentAnalysisTransactionWithName:(const char *)arg1;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
- (void)invalidateLocationDataForAssetsWithOIDs:(NSArray *)arg1;
- (void)invalidateLocationDataForAssetsInMoment:(id <PLMomentData>)arg1;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (void)performDataTransaction:(void (^)(void))arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(void (^)(void))arg4;
- (void)performBlock:(void (^)(void))arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(void (^)(void))arg4;
- (void)performDataTransaction:(void (^)(void))arg1 synchronously:(BOOL)arg2 completionHandler:(void (^)(void))arg3;
- (void)performBlock:(void (^)(void))arg1 synchronously:(BOOL)arg2 completionHandler:(void (^)(void))arg3;
@end

