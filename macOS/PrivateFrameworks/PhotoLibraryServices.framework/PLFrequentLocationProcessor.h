//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLFrequentLocationProcessor : NSObject
{
}

+ (id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id *)arg3 progressBlock:(CDUnknownBlockType)arg4;
+ (id)_centroidItemForClusterItems:(id)arg1 withDistanceBlock:(CDUnknownBlockType)arg2;
+ (id)_dateIntervalForItems:(id)arg1;
+ (id)_createFrequentLocationsForItems:(id)arg1 withDistanceBlock:(CDUnknownBlockType)arg2;
+ (id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;

@end

