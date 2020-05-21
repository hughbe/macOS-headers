//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableDictionary;

@interface PLAggregationProcessor : NSObject
{
    NSCalendar *_calendar;
    NSMutableDictionary *_curatedAssetCountByMomentUUID;
}

+ (unsigned long long)maximumNumberOfAssetsPerAggregation;
+ (unsigned long long)maximumNumberOfDaysPerAggregation;
+ (unsigned long long)maximumNumberOfAssetsPerMoment;
+ (void)restoreDefaultEnablement;
+ (void)setEnabled:(BOOL)arg1;
+ (BOOL)isEnabled;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *curatedAssetCountByMomentUUID; // @synthesize curatedAssetCountByMomentUUID=_curatedAssetCountByMomentUUID;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
- (id)_aggregationMomentClustersForMomentClusters:(id)arg1;
- (id)processAggregationsWithSortedMomentClusters:(id)arg1 momentsContainedInOtherHighlights:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (BOOL)_shouldAggregateMoment:(id)arg1;
- (id)sortedNeighborMomentClustersOfMomentClusters:(id)arg1 forAllMomentClusters:(id)arg2;
- (id)init;

@end

