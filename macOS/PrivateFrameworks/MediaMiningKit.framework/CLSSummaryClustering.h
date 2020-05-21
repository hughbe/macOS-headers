//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLSSummaryClustering : NSObject
{
    BOOL _enableConcurrency;
    BOOL _enableDensityClusteringLocationsDistance;
    BOOL _enableMultipassDensityClustering;
    BOOL _enableAdaptiveElectionSmoother;
    BOOL _enableAdaptiveElectionSmootherAutomaticLimit;
    double _optimalDayDistributionThreshold;
    unsigned long long _timeSpanDensityAverageNumberOfObjects;
    unsigned long long _densityClusteringLocationsDistanceUnit;
    double _diffuseDensityClusteringMaximumDistance;
    unsigned long long _diffuseDensityClusteringMinimumNumberOfObjects;
    double _conciseDensityClusteringMaximumDistance;
    unsigned long long _conciseDensityClusteringMinimumNumberOfObjects;
    unsigned long long _adaptiveElectionMinimumNumberOfItemsByCluster;
    unsigned long long _adaptiveElectionMaximumNumberOfItemsByCluster;
    unsigned long long _adaptiveElectionSmootherMaximumLimit;
    unsigned long long _adaptiveElectionSmootherMinimumLimit;
}

+ (double)maximumScoreForItems:(id)arg1;
+ (double)meanScoreForItems:(id)arg1;
+ (double)scoreForItems:(id)arg1;
+ (id)clustering;
@property(nonatomic) unsigned long long adaptiveElectionSmootherMinimumLimit; // @synthesize adaptiveElectionSmootherMinimumLimit=_adaptiveElectionSmootherMinimumLimit;
@property(nonatomic) unsigned long long adaptiveElectionSmootherMaximumLimit; // @synthesize adaptiveElectionSmootherMaximumLimit=_adaptiveElectionSmootherMaximumLimit;
@property(nonatomic) BOOL enableAdaptiveElectionSmootherAutomaticLimit; // @synthesize enableAdaptiveElectionSmootherAutomaticLimit=_enableAdaptiveElectionSmootherAutomaticLimit;
@property(nonatomic) BOOL enableAdaptiveElectionSmoother; // @synthesize enableAdaptiveElectionSmoother=_enableAdaptiveElectionSmoother;
@property(nonatomic) unsigned long long adaptiveElectionMaximumNumberOfItemsByCluster; // @synthesize adaptiveElectionMaximumNumberOfItemsByCluster=_adaptiveElectionMaximumNumberOfItemsByCluster;
@property(nonatomic) unsigned long long adaptiveElectionMinimumNumberOfItemsByCluster; // @synthesize adaptiveElectionMinimumNumberOfItemsByCluster=_adaptiveElectionMinimumNumberOfItemsByCluster;
@property(nonatomic) BOOL enableMultipassDensityClustering; // @synthesize enableMultipassDensityClustering=_enableMultipassDensityClustering;
@property(nonatomic) unsigned long long conciseDensityClusteringMinimumNumberOfObjects; // @synthesize conciseDensityClusteringMinimumNumberOfObjects=_conciseDensityClusteringMinimumNumberOfObjects;
@property(nonatomic) double conciseDensityClusteringMaximumDistance; // @synthesize conciseDensityClusteringMaximumDistance=_conciseDensityClusteringMaximumDistance;
@property(nonatomic) unsigned long long diffuseDensityClusteringMinimumNumberOfObjects; // @synthesize diffuseDensityClusteringMinimumNumberOfObjects=_diffuseDensityClusteringMinimumNumberOfObjects;
@property(nonatomic) double diffuseDensityClusteringMaximumDistance; // @synthesize diffuseDensityClusteringMaximumDistance=_diffuseDensityClusteringMaximumDistance;
@property(nonatomic) unsigned long long densityClusteringLocationsDistanceUnit; // @synthesize densityClusteringLocationsDistanceUnit=_densityClusteringLocationsDistanceUnit;
@property(nonatomic) BOOL enableDensityClusteringLocationsDistance; // @synthesize enableDensityClusteringLocationsDistance=_enableDensityClusteringLocationsDistance;
@property(nonatomic) unsigned long long timeSpanDensityAverageNumberOfObjects; // @synthesize timeSpanDensityAverageNumberOfObjects=_timeSpanDensityAverageNumberOfObjects;
@property(nonatomic) double optimalDayDistributionThreshold; // @synthesize optimalDayDistributionThreshold=_optimalDayDistributionThreshold;
@property(nonatomic) BOOL enableConcurrency; // @synthesize enableConcurrency=_enableConcurrency;
- (id)adaptiveElection:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)performWithItems:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)performWithItems:(id)arg1 maximumNumberOfItemsToElect:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)_densityClustersWithItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)densityClustersWithItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (CDUnknownBlockType)densityClusteringDistanceBlock;

@end

