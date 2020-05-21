//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, CLSHolidayCalendarEventService, NSArray, NSDate, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSSet, PGManager;
@protocol OS_os_log;

@interface PGMemoryController : NSObject
{
    NSMutableArray *_latentMemories;
    NSArray *_existingMemories;
    NSArray *_blacklistedMemories;
    long long _numberOfDaysSinceLastMemory;
    NSMutableIndexSet *_matchedCategories;
    NSMutableIndexSet *_excludedFeaturedSubcategories;
    NSArray *_existingSuggestions;
    NSMutableDictionary *_numberOfAssetsByMomentIDs;
    NSMutableDictionary *_momentsByMomentIDs;
    NSMutableDictionary *_backingMomentIDsByPHMemoryIDs;
    NSMutableDictionary *_featureVectorByPHMemoryIDs;
    NSMapTable *_numberOfMemoryGenerationDaysByMemory;
    NSDate *_localDate;
    NSDate *_universalDate;
    CLLocation *_location;
    unsigned long long _precision;
    NSDate *_earliestDate;
    NSDate *_latestDate;
    NSDate *_directModeStartDate;
    NSDate *_directModeEndDate;
    CLSHolidayCalendarEventService *_holidayService;
    unsigned long long _currentRandom;
    BOOL _isLastResort;
    BOOL _isFirstTimesAfterUpgrade;
    BOOL _isAttemptingToUpgradeBestOfPastToFeaturedTrip;
    double _forcedBeta;
    BOOL _isCreatingEverMemories;
    BOOL _bypassesCategoryCheckForUpgrades;
    BOOL _ignoresMomentIsInteresting;
    BOOL _ignoresMinimumNumberOfMoments;
    BOOL _ignoresMinimumNumberOfAssets;
    BOOL _skipsAssetCollection;
    BOOL _skipsCuration;
    BOOL _skipsTitleGeneration;
    BOOL _skipsWeekendUpgrades;
    BOOL _skipsMeaningfulEventUpgrades;
    BOOL _skipsBestOfPastUpgradeToFeaturedTrip;
    BOOL _skipsBlacklistedFeatureCheck;
    BOOL _isDryTesting;
    BOOL _probabilityAlwaysPasses;
    unsigned long long _numberOfNewMemoriesForPeriodicity;
    unsigned long long _numberOfNewMemoriesForUserRequest;
    unsigned long long _minimumNumberOfAssetsForMomentMemory;
    unsigned long long _minimumNumberOfAssetsForDisjointMomentsMemory;
    unsigned long long _minimumNumberOfAssetsForContiguousMomentsMemory;
    PGManager *_manager;
    NSObject<OS_os_log> *_loggingConnection;
    CDUnknownBlockType _progressBlock;
    NSSet *_mandatoryFeatures;
    NSSet *_blacklistedFeatures;
    NSSet *_categoryWhitelist;
    NSSet *_categoryBlacklist;
}

+ (void)computeMinimumNumbersOfAssetsWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (unsigned long long)minimumNumberOfCuratedAssetsForMemories;
+ (double)computeBetaWithManager:(id)arg1;
- (void).cxx_destruct;
@property BOOL probabilityAlwaysPasses; // @synthesize probabilityAlwaysPasses=_probabilityAlwaysPasses;
@property BOOL isDryTesting; // @synthesize isDryTesting=_isDryTesting;
@property BOOL skipsBlacklistedFeatureCheck; // @synthesize skipsBlacklistedFeatureCheck=_skipsBlacklistedFeatureCheck;
@property BOOL skipsBestOfPastUpgradeToFeaturedTrip; // @synthesize skipsBestOfPastUpgradeToFeaturedTrip=_skipsBestOfPastUpgradeToFeaturedTrip;
@property BOOL skipsMeaningfulEventUpgrades; // @synthesize skipsMeaningfulEventUpgrades=_skipsMeaningfulEventUpgrades;
@property BOOL skipsWeekendUpgrades; // @synthesize skipsWeekendUpgrades=_skipsWeekendUpgrades;
@property BOOL skipsTitleGeneration; // @synthesize skipsTitleGeneration=_skipsTitleGeneration;
@property BOOL skipsCuration; // @synthesize skipsCuration=_skipsCuration;
@property BOOL skipsAssetCollection; // @synthesize skipsAssetCollection=_skipsAssetCollection;
@property BOOL ignoresMinimumNumberOfAssets; // @synthesize ignoresMinimumNumberOfAssets=_ignoresMinimumNumberOfAssets;
@property BOOL ignoresMinimumNumberOfMoments; // @synthesize ignoresMinimumNumberOfMoments=_ignoresMinimumNumberOfMoments;
@property BOOL ignoresMomentIsInteresting; // @synthesize ignoresMomentIsInteresting=_ignoresMomentIsInteresting;
@property(retain) NSSet *categoryBlacklist; // @synthesize categoryBlacklist=_categoryBlacklist;
@property(retain) NSSet *categoryWhitelist; // @synthesize categoryWhitelist=_categoryWhitelist;
@property(retain) NSSet *blacklistedFeatures; // @synthesize blacklistedFeatures=_blacklistedFeatures;
@property(retain, nonatomic) NSSet *mandatoryFeatures; // @synthesize mandatoryFeatures=_mandatoryFeatures;
@property BOOL bypassesCategoryCheckForUpgrades; // @synthesize bypassesCategoryCheckForUpgrades=_bypassesCategoryCheckForUpgrades;
@property(readonly) BOOL isCreatingEverMemories; // @synthesize isCreatingEverMemories=_isCreatingEverMemories;
@property(readonly, copy) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly) NSObject<OS_os_log> *loggingConnection; // @synthesize loggingConnection=_loggingConnection;
@property(readonly, nonatomic) __weak PGManager *manager; // @synthesize manager=_manager;
@property(readonly) unsigned long long minimumNumberOfAssetsForContiguousMomentsMemory; // @synthesize minimumNumberOfAssetsForContiguousMomentsMemory=_minimumNumberOfAssetsForContiguousMomentsMemory;
@property(readonly) unsigned long long minimumNumberOfAssetsForDisjointMomentsMemory; // @synthesize minimumNumberOfAssetsForDisjointMomentsMemory=_minimumNumberOfAssetsForDisjointMomentsMemory;
@property(readonly) unsigned long long minimumNumberOfAssetsForMomentMemory; // @synthesize minimumNumberOfAssetsForMomentMemory=_minimumNumberOfAssetsForMomentMemory;
@property unsigned long long numberOfNewMemoriesForUserRequest; // @synthesize numberOfNewMemoriesForUserRequest=_numberOfNewMemoriesForUserRequest;
@property unsigned long long numberOfNewMemoriesForPeriodicity; // @synthesize numberOfNewMemoriesForPeriodicity=_numberOfNewMemoriesForPeriodicity;
- (void)resetIgnoresAndSkips;
- (id)_doDirectModeWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 parameters:(id)arg4 progress:(CDUnknownBlockType)arg5;
- (id)createMemoriesWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (unsigned long long)_meaningFromString:(id)arg1;
- (unsigned long long)subcategoryForString:(id)arg1;
- (id)_createFirstTimesAfterUpgradeMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createThirdEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createSecondEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createFirstEverMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createTodayWidgetMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createPeriodicMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (double)updatedBeta:(double)arg1 forNumberOfDaysSinceLastMemory:(long long)arg2;
- (id)_createMoreMemoriesWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 progress:(CDUnknownBlockType)arg4;
- (id)_createOneMemoryWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 localDate:(id)arg3 location:(id)arg4 peopleNames:(id)arg5;
- (BOOL)_doOneFeaturedWithLocalDate:(id)arg1 reason:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 hasExhaustedFeatured:(char *)arg4;
- (BOOL)_doFeaturedForType:(unsigned long long)arg1 beforeLocalDate:(id)arg2 usingLowRequirements:(BOOL)arg3 oldMemory:(BOOL)arg4;
- (BOOL)_wantsFeaturedForType:(unsigned long long)arg1 reason:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3;
- (BOOL)_hasExhaustedFeatured:(char *)arg1;
- (unsigned long long)_featuredSubcategoryForGeneratorType:(unsigned long long)arg1;
- (unsigned long long)_generatorTypeForFeaturedSubcategory:(unsigned long long)arg1;
- (BOOL)_doFeaturedRecurrentTripBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedRecurrentTripWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doContextualTodayWidgetWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3;
- (BOOL)_doContextualWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3;
- (BOOL)_wantsContextualWithReason:(unsigned long long)arg1 location:(id)arg2 peopleNames:(id)arg3;
- (BOOL)_doSometimeInHistory;
- (BOOL)_doThrowbackThursdayForLocalDate:(id)arg1;
- (BOOL)_wantsThrowbackThursdayWithReason:(unsigned long long)arg1;
- (BOOL)_doEarlyMomentsWithPeopleForLocalDate:(id)arg1;
- (BOOL)_wantsEarlyMomentsWithPeopleWithReason:(unsigned long long)arg1;
- (BOOL)_doPlaceAreaBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsPlaceAreaWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doPlaceBusinessBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsPlaceBusinessWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doPlaceLocationBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsPlaceLocationWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doPlaceRegionBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsPlaceRegionWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedPeopleVisitingBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedPeopleVisitingWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 meaning:(unsigned long long)arg2 lowRequirements:(BOOL)arg3;
- (BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 eventType:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 oldMemory:(BOOL)arg4;
- (BOOL)_doFeaturedMeaningfulEventAggregationBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedMeaningfulEventAggregationWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 meaning:(unsigned long long)arg2 lowRequirements:(BOOL)arg3;
- (BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 eventType:(unsigned long long)arg2 usingLowRequirements:(BOOL)arg3 oldMemory:(BOOL)arg4;
- (BOOL)_doFeaturedMeaningfulEventBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedMeaningfulEventWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedPastSupersetBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedPastSupersetWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedBabyBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedBabyWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedPetBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedPetWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedWeekendBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedWeekendWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedTripBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2;
- (BOOL)_doFeaturedTripBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedTripWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedSocialGroupOverTimeBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedSocialGroupOverTimeWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedPersonOverTimeBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedPersonOverTimeWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedPersonBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedPersonWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedSocialGroupBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedSocialGroupWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedPeopleBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedPeopleWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doFeaturedNeighborBeforeLocalDate:(id)arg1 usingLowRequirements:(BOOL)arg2 oldMemory:(BOOL)arg3;
- (BOOL)_wantsFeaturedNeighborWithReason:(unsigned long long)arg1 usingLowRequirements:(BOOL)arg2;
- (BOOL)_doHomeAggregationWithLocalDate:(id)arg1;
- (BOOL)_wantsHomeAggregationWithLocalDate:(id)arg1 reason:(unsigned long long)arg2;
- (BOOL)_doCelebrationOverTimeWithLocalDate:(id)arg1;
- (BOOL)_wantsCelebrationOverTimeWithReason:(unsigned long long)arg1;
- (BOOL)_doSeasonWithLocalDate:(id)arg1 forType:(unsigned long long)arg2;
- (unsigned long long)_desireLevelForSeasonInHistoryWithLocalDate:(id)arg1;
- (unsigned long long)_desireLevelForLastSeasonWithLocalDate:(id)arg1;
- (BOOL)_doTodayInTimeWithLocalDate:(id)arg1;
- (BOOL)_wantsTodayInTimeWithReason:(unsigned long long)arg1;
- (BOOL)_doKeyPeopleForUpcomingHolidayEventWithLocalDate:(id)arg1;
- (BOOL)_wantsKeyPeopleForUpcomingHolidayEventWithReason:(unsigned long long)arg1;
- (BOOL)_doUpcomingRelatedEventsWithLocalDate:(id)arg1;
- (BOOL)_wantsUpcomingRelatedEventsWithReason:(unsigned long long)arg1;
- (BOOL)_doRecentPastEventsWithLocalDate:(id)arg1;
- (BOOL)_wantsRecentPastEventsWithReason:(unsigned long long)arg1;
- (BOOL)_doBestOfPastWithLocalDate:(id)arg1;
- (BOOL)_wantsBestOfPastWithReason:(unsigned long long)arg1;
- (BOOL)_doBestOfRandomYear;
- (BOOL)_doYearSummaryWithLocalDate:(id)arg1;
- (unsigned long long)desireLevelForYearSummaryWithLocalDate:(id)arg1;
- (BOOL)_doNearbyTodayWithLocalDate:(id)arg1 andLocation:(id)arg2;
- (BOOL)_wantsNearbyTodayWithReason:(unsigned long long)arg1 location:(id)arg2;
- (BOOL)_doDayInHistoryWithLocalDate:(id)arg1;
- (BOOL)_wantsDayInHistoryWithReason:(unsigned long long)arg1;
- (BOOL)_doTodaysBirthdayWithLocalDate:(id)arg1;
- (id)_uuidOfPersonsWithBirthdayOnDate:(id)arg1;
- (BOOL)_wantsTodaysBirthdayWithReason:(unsigned long long)arg1;
- (BOOL)canUsePotentialMemory:(id)arg1 isDebug:(BOOL)arg2;
- (BOOL)isOKToProceedWithEarlyPotentialMemory:(id)arg1;
- (BOOL)isOKToProceedWithDirectEarlyPotentialMemory:(id)arg1;
- (id)_idsOfMomentsBackingPHMemory:(id)arg1;
- (BOOL)potentialMemory:(id)arg1 isTooSimilarTooSoonToPHMemory:(id)arg2;
- (float)_assetOverlapBetweenMomentsForIDs:(id)arg1 andMomentsForIDs:(id)arg2 withNumberOfAssetsByMomentIDs:(id)arg3;
- (float)_assetOverlapBetweenMomentsForIDs:(id)arg1 andMomentsForIDs:(id)arg2;
- (unsigned long long)_numberOfAssetsInMomentsForIDs:(id)arg1 withNumberOfAssetsByMomentIDs:(id)arg2;
- (BOOL)_memories:(id)arg1 coverTypeOfMemory:(id)arg2;
- (BOOL)_assetCollection:(id)arg1 matchesAssetCollection:(id)arg2;
- (BOOL)_memories:(id)arg1 containAssetCollection:(id)arg2;
- (BOOL)_memories:(id)arg1 containMemory:(id)arg2;
- (BOOL)eventIsTimely:(id)arg1;
- (id)momentForMomentID:(id)arg1;
- (BOOL)probabilityPassWithThreshold:(double)arg1;
- (unsigned int)randomNumberLessThan:(unsigned long long)arg1;
- (unsigned int)randomNumber;
@property(readonly) double minimumRatioOfFocusedPersonFacesPerAssetForMultipleFocusedPersonsFacedAssets;
@property(readonly) unsigned long long maximumNumberOfFacesPerAssetForSingleFocusedPersonFacedAssets;
- (id)initWithManager:(id)arg1;
- (BOOL)anyBlacklistedFeatureIsHitByEvent:(id)arg1;
- (id)anyBlacklistedFeatureHitByCompletePotentialMemory:(id)arg1;
- (id)anyBlacklistedFeatureHitByEarlyPotentialMemory:(id)arg1;
- (id)_personFeatureForEarlyPotentialMemory:(id)arg1;
- (id)_addressFeatureForPotentialMemory:(id)arg1;
- (id)_areaFeatureForPotentialMemory:(id)arg1;
- (id)_dateFeatureForPotentialMemory:(id)arg1;
- (id)_holidayFeatureForPotentialMemory:(id)arg1;
- (id)blacklistableFeaturesForPotentialMemory:(id)arg1;
- (id)_peopleBlacklistableFeatureForPotentialMemory:(id)arg1;
- (id)_localIdentifierOfMainPersonInEvent:(id)arg1 prominentOnly:(BOOL)arg2;
- (id)_personFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2;
- (id)_locationBlacklistableFeatureForPotentialMemory:(id)arg1;
- (id)_addressFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2;
- (id)_areaFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2;
- (id)_timeBlacklistableFeatureForPotentialMemory:(id)arg1;
- (id)_dateFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2;
- (id)_holidayFeatureForPotentialMemory:(id)arg1 prominentOnly:(BOOL)arg2;

@end

