//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNMPContext : NSObject
{
    BOOL _useTimestampAdjustedDistances;
    BOOL _performClustersPostprocessing;
    BOOL _performSceneClassification;
    int _debugMode;
    int _timerMode;
    int _clusterSplitDistanceType;
    float _roiAreaThreshold;
    float _inliersRatioThreshold;
    int _numberOfKeypointsToConsider;
    float _naturalClusteringDistanceThreshold;
    NSArray *_qualityCriteriaList;
}

- (void).cxx_destruct;
@property float naturalClusteringDistanceThreshold; // @synthesize naturalClusteringDistanceThreshold=_naturalClusteringDistanceThreshold;
@property int numberOfKeypointsToConsider; // @synthesize numberOfKeypointsToConsider=_numberOfKeypointsToConsider;
@property float inliersRatioThreshold; // @synthesize inliersRatioThreshold=_inliersRatioThreshold;
@property float roiAreaThreshold; // @synthesize roiAreaThreshold=_roiAreaThreshold;
@property BOOL performSceneClassification; // @synthesize performSceneClassification=_performSceneClassification;
@property BOOL performClustersPostprocessing; // @synthesize performClustersPostprocessing=_performClustersPostprocessing;
@property BOOL useTimestampAdjustedDistances; // @synthesize useTimestampAdjustedDistances=_useTimestampAdjustedDistances;
@property(retain) NSArray *qualityCriteriaList; // @synthesize qualityCriteriaList=_qualityCriteriaList;
@property int clusterSplitDistanceType; // @synthesize clusterSplitDistanceType=_clusterSplitDistanceType;
@property int timerMode; // @synthesize timerMode=_timerMode;
@property int debugMode; // @synthesize debugMode=_debugMode;

@end

