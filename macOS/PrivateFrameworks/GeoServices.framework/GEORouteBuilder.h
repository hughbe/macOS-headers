//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapRegion, GEORoute, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEORouteBuilder : NSObject
{
    BOOL _usesZilch;
    NSMutableArray *_steps;
    NSMutableArray *_composedGuidanceEvents;
    NSMutableArray *_legs;
    NSData *_pointsData;
    NSMutableArray *_pointSections;
    GEOMapRegion *_boundingMapRegion;
    GEORoute *_route;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) NSMutableArray *pointSections; // @synthesize pointSections=_pointSections;
- (void)buildPointSectionsForRoute:(id)arg1;
- (id)_composedRouteLegForSteps:(id)arg1 route:(id)arg2;
- (id)_composedRouteStepForStep:(id)arg1 route:(id)arg2;
- (void)buildRoute:(id)arg1;
- (id)initWithRoute:(id)arg1;

@end

