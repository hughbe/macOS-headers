//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLDataCluster : NSObject
{
    NSArray *_objects;
    double _diameter;
    id _clustroid;
    double _score;
}

+ (id)clusterWithObjects:(id)arg1;
+ (id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3;
- (void).cxx_destruct;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) id clustroid; // @synthesize clustroid=_clustroid;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (id)description;
- (id)init;
- (id)meanUniversalDate;
- (id)meanRegion:(double)arg1;
- (id)approximateRegionWithMaximumRadius:(double)arg1;
- (id)universalDates;
- (id)locations;

@end

