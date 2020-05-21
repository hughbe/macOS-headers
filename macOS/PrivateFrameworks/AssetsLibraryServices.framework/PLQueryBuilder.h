//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLQuery;

@interface PLQueryBuilder : NSObject
{
    PLQuery *_query;
}

+ (id)validUnitValuesForQueryKey:(int)arg1;
+ (id)validComparatorsForQueryKey:(int)arg1;
+ (id)_combineFirstQuery:(id)arg1 secondQuery:(id)arg2 conjunction:(int)arg3;
+ (id)notQuery:(id)arg1;
+ (id)orCombineFirstQuery:(id)arg1 secondQuery:(id)arg2;
+ (id)andCombineFirstQuery:(id)arg1 secondQuery:(id)arg2;
- (void).cxx_destruct;
- (id)query;
- (void)_addQueryForKey:(int)arg1 withValue:(id)arg2 withType:(int)arg3 withComparator:(int)arg4;
- (void)addUnableToUploadQuery;
- (void)addPersonQuery:(id)arg1 comparator:(int)arg2;
- (void)addKeywordQuery:(id)arg1 exclude:(BOOL)arg2;
- (void)addIntegerQueryKey:(int)arg1 withValue:(long long)arg2 comparator:(int)arg3;
- (void)addDoubleQueryKey:(int)arg1 withValue:(double)arg2 comparator:(int)arg3;
- (void)addHasLocationQuery:(BOOL)arg1;
- (void)addWhiteBalanceQuery:(long long)arg1 comparator:(int)arg2;
- (void)addTrackFormatQuery:(long long)arg1 comparator:(int)arg2;
- (void)addShutterSpeedQuery:(double)arg1 comparator:(int)arg2;
- (void)addSampleRateQuery:(long long)arg1 comparator:(int)arg2;
- (void)addMeteringModeQuery:(long long)arg1 comparator:(int)arg2;
- (void)addLensModelQuery:(id)arg1 comparator:(int)arg2;
- (void)addFpsQuery:(double)arg1 comparator:(int)arg2;
- (void)addIsoQuery:(long long)arg1 comparator:(int)arg2;
- (void)addFocalLengthQuery:(double)arg1 comparator:(int)arg2;
- (void)addFlashQuery:(BOOL)arg1;
- (void)addExposureBiasQuery:(double)arg1 comparator:(int)arg2;
- (void)addDurationQuery:(double)arg1 comparator:(int)arg2;
- (void)addCodecQuery:(id)arg1 comparator:(int)arg2;
- (void)addCameraMakeQuery:(id)arg1 comparator:(int)arg2;
- (void)addCameraModelQuery:(id)arg1 comparator:(int)arg2;
- (void)addBitrateQuery:(double)arg1 comparator:(int)arg2;
- (void)addApertureQuery:(double)arg1 comparator:(int)arg2;
- (BOOL)_isValidNumericComparator:(int)arg1;
- (void)addIsEmptyQueryForKey:(int)arg1 isEmpty:(BOOL)arg2;
- (BOOL)_validIsEmptyQueryKey:(int)arg1;
- (void)_addStringQueryKey:(int)arg1 stringValue:(id)arg2 comparator:(int)arg3;
- (void)addTextQuery:(id)arg1 comparator:(int)arg2;
- (void)addDescriptionQuery:(id)arg1 comparator:(int)arg2;
- (void)addTitleQuery:(id)arg1 comparator:(int)arg2;
- (void)addFilenameQuery:(id)arg1 comparator:(int)arg2;
- (BOOL)_isValidStringComparator:(int)arg1;
- (void)addDateRangeQueryKey:(int)arg1 between:(id)arg2 and:(id)arg3;
- (void)addIsoRangeQueryBetweenValue:(long long)arg1 andValue:(long long)arg2;
- (void)addApertureRangeQueryBetweenValue:(double)arg1 andValue:(double)arg2;
- (void)_addRangeQueryForKey:(int)arg1 withFirstValue:(id)arg2 withSecondValue:(id)arg3 withType:(int)arg4;
- (void)_addDateUnitQueryForKey:(int)arg1 withValue:(id)arg2 withType:(int)arg3 withUnit:(int)arg4 exclude:(BOOL)arg5;
- (void)addInTheLastSecondsQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3;
- (void)addInTheLastYearsQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3;
- (void)addInTheLastMonthsQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3;
- (void)addInTheLastWeeksQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3;
- (void)addInTheLastDaysQueryKey:(int)arg1 withCount:(long long)arg2 exclude:(BOOL)arg3;
- (void)addIsBeforeDateQueryKey:(int)arg1 withDate:(id)arg2;
- (void)addIsAfterDateQueryKey:(int)arg1 withDate:(id)arg2;
- (void)addIsDateQueryKey:(int)arg1 withDate:(id)arg2 exclude:(BOOL)arg3;
- (BOOL)_isValidDateKey:(int)arg1;
- (void)addIsReferencedMediaQuery:(BOOL)arg1;
- (void)addIsInAnyAlbumQuery;
- (void)addIsInAlbumQuery:(id)arg1;
- (void)addAssetTypeQuery:(int)arg1 exclude:(BOOL)arg2;
- (void)addIsRawQuery:(BOOL)arg1;
- (void)addIsAdjustedQuery:(BOOL)arg1;
- (void)addIsHiddenQuery:(BOOL)arg1;
- (void)addIsFavoriteQuery:(BOOL)arg1;
- (void)_addQueryWithKey:(int)arg1 firstValue:(id)arg2 secondValue:(id)arg3 valueType:(int)arg4 unit:(int)arg5 comparator:(int)arg6;
- (id)initWithConjunction:(int)arg1;

@end

