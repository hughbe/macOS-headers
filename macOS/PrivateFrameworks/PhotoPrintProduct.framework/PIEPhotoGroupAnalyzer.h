//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCalendar, NSDictionary, NSMutableDictionary, PIEPhotoDateRange, PIEStatistics;

@interface PIEPhotoGroupAnalyzer : NSObject
{
    NSArray *_photoInfos;
    NSMutableDictionary *_cachedPhotoFeatureExtractions;
    PIEPhotoDateRange *_photoDateRange;
    PIEStatistics *_photoTimeGapStats;
    NSDictionary *_photoChronologicalSequenceMap;
    NSDictionary *_photoTimeClusterMap;
    NSDictionary *_photoEventMap;
    NSArray *_photosOrderedByTime;
    NSArray *_photosOrderedByImportance;
    NSDictionary *_photosGroupedByEvent;
    NSDictionary *_photosGroupedByPlace;
    NSDictionary *_photoTopCrustScoreMap;
    NSDictionary *_photoBottomCrustScoreMap;
    NSDictionary *_photoImportanceScoreMap;
    NSDictionary *_photoScaledImportanceScoreMap;
    NSArray *_personsOfInterest;
    NSDictionary *_personsOfInterestScoreMap;
    NSDictionary *_photosSortedByPerson;
    double _minGeoDistanceBetweenPhotos;
    double _maxGeoDistanceBetweenPhotos;
    BOOL _geoDistanceRangeCalculated;
    long long _photosWithLocationInfoCount;
    NSCalendar *_gregorianCalendar;
}

+ (id)_shatterMapUsingMap:(id)arg1 andMap:(id)arg2;
+ (id)_ensureSegmentMinSize:(unsigned long long)arg1 segmentationMap:(id)arg2 photoSequence:(id)arg3;
@property(readonly) NSArray *photoInfos; // @synthesize photoInfos=_photoInfos;
- (BOOL)_photoContainsFacesOfAnyPersonsOfInterest:(id)arg1;
- (id)_calculatePersonsOfInterestScoreMap;
- (id)personsOfInterestScoreMap;
- (id)personsOfInterest;
- (id)personsSortedByInterestScore;
- (id)_sortPhotosByPerson:(id)arg1 groupUnnamedWithKey:(id)arg2 groupNoFacesWithKey:(id)arg3;
- (id)_sortPhotosByPerson:(id)arg1 groupUnnamedWithKey:(id)arg2;
- (id)_sortPhotosByPerson:(id)arg1;
- (id)photosSortedByPerson;
- (id)_photoFaceCountStatistics:(id)arg1;
- (id)_photoKeywordCountStatistics:(id)arg1;
- (id)_photoTitleLengthStatistics:(id)arg1;
- (id)_photoRatingStatistics:(id)arg1;
- (id)_buildSequenceMap:(id)arg1;
- (id)_calculatePhotoImportanceScores;
- (id)_orderPhotoByImportance:(id)arg1;
- (id)photoImportanceScoreMap;
- (id)photoScaledImportanceScoreMap;
- (id)photosOrderedByImportance;
- (id)mostRepresentedEventId;
- (id)bestTitle:(id)arg1;
- (id)calculateAffinityScoreBetweenPhoto:(id)arg1 andPhoto:(id)arg2;
- (id)serveSlicesUsingParams:(id)arg1;
- (id)serveCrustSlicesUsingParams:(id)arg1;
- (void)_calculateCrustScoreMaps;
- (id)photoChronologicalSequenceMap;
- (id)_photoFaceInfosFor:(id)arg1;
- (id)_photoLocationInfoFor:(id)arg1;
- (id)_photoDateFor:(id)arg1;
- (id)photosGroupedByEvent;
- (id)_buildPhotoTimeSegmentationMap;
- (id)photoTimeClusterMap;
- (id)_buildPhotoEventMap;
- (id)photoEventMap;
- (id)_groupByEvent:(id)arg1;
- (id)_orderPhotoGroupsByTime:(id)arg1;
- (id)_orderPhotoByTime:(id)arg1;
- (id)photosOrderedByTime;
- (id)_groupByPlace:(id)arg1;
- (id)photosGroupedByPlace;
- (long long)photosWithLocationInfoCount;
- (void)_calculatePairwiseGeoDistanceRange;
- (double)maxGeoDistanceBetweenPhotos;
- (double)minGeoDistanceBetweenPhotos;
@property(readonly) PIEPhotoDateRange *photoDateRange; // @synthesize photoDateRange=_photoDateRange;
- (id)photoTimeGapStatistics;
- (void)dealloc;
- (id)initWithPhotoInfos:(id)arg1;
- (id)__refractPhotoPools:(id)arg1 intoCount:(unsigned long long)arg2;
- (id)__sortedCentroidIndicesByDate:(id)arg1;
- (id)_representativeSubset:(id)arg1 count:(unsigned long long)arg2;
- (long long)_representativeSubsetPhotoCount:(id)arg1 forPhotos:(id)arg2;
- (id)__groupByCalendarUnit:(unsigned long long)arg1 photos:(id)arg2;
- (id)_groupByCalendarMonth:(id)arg1;
- (id)_groupByCalendarDay:(id)arg1;
- (id)_groupByTimeClusters:(id)arg1 clusterCount:(unsigned long long)arg2;
- (id)_slicePhotoPoolsByMonth:(unsigned long long)arg1;
- (id)_slicePhotoPoolsByDay:(unsigned long long)arg1;
- (id)_slicePhotoPoolsByPlace:(unsigned long long)arg1;
- (id)_slicePhotoPoolsByTimeClustering:(unsigned long long)arg1;
- (id)_choosePhotosForSlicesFromPools:(id)arg1 params:(id)arg2;
- (id)serveCalendarSlicesUsingParams:(id)arg1;
- (id)__determineBestHoleCountSequence:(long long)arg1 bestHoleCounts:(long long *)arg2;
- (double)__calculateIncrementalScoreWithPhotos:(id)arg1 withPhotoIndexRange:(struct _NSRange)arg2 andSubsequence:(id)arg3 withAvailableHoleCounts:(id)arg4 favoredHoleCountCycle:(id)arg5 allowDroppingPhotos:(BOOL)arg6 segmentationMap:(id)arg7 minSliceCount:(unsigned long long)arg8 maxSliceCount:(unsigned long long)arg9 holeCountFavorabilityMap:(id)arg10;
- (id)_dynamicProgrammingByPhotoAffinityWithHoleCounts:(id)arg1 photos:(id)arg2 startIndex:(unsigned long long)arg3 length:(unsigned long long)arg4 minSlices:(unsigned long long)arg5 maxSlices:(unsigned long long)arg6 allowDroppingPhotos:(BOOL)arg7 favoredHoleCountCycle:(id)arg8 segmentationMap:(id)arg9 holeCountFavorabilityMap:(id)arg10;

@end

