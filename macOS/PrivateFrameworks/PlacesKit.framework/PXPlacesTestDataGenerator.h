//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXPlacesTestDataGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSArray *_latOffsets;
    NSArray *_longOffsets;
    unsigned long long _max;
    struct CLLocationCoordinate2D _from;
    struct CLLocationCoordinate2D _to;
    NSMutableArray *_dataPoints;
}

- (void).cxx_destruct;
- (void)generateTestImages:(unsigned long long)arg1 fromLocation:(struct CLLocationCoordinate2D)arg2 toLocation:(struct CLLocationCoordinate2D)arg3 atEnd:(CDUnknownBlockType)arg4;
- (unsigned long long)generateDataPointsFromLocation:(struct CLLocationCoordinate2D)arg1 toLocation:(struct CLLocationCoordinate2D)arg2 longDir:(long long)arg3 currentCount:(unsigned long long)arg4;
- (id)generateOffsetArray:(double)arg1 insert:(BOOL)arg2;
- (id)init;

@end

