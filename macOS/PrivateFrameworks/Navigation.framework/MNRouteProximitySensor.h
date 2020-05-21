//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOLocation, GEORouteMatch, GEORouteMatcher;

@interface MNRouteProximitySensor : NSObject
{
    double _proximityThreshold;
    GEOLocation *_location;
    GEORouteMatch *_routeMatch;
    GEORouteMatcher *_routeMatcher;
    unsigned long long _proximity;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long proximity; // @synthesize proximity=_proximity;
- (void)_updateRouteMatch;
- (void)_updateProximity;
@property(nonatomic) double proximityThreshold;
@property(readonly, nonatomic) double remainingTimeOnRoute;
@property(readonly, nonatomic) double distanceFromDestination;
@property(readonly, nonatomic) double distanceFromRoute;
@property(readonly, nonatomic) double distanceFromOrigin;
@property(readonly, nonatomic) double courseOnRoute;
@property(readonly, nonatomic) GEOComposedRouteStep *closestStepOnRoute;
@property(readonly, nonatomic) GEOLocation *closestPointOnRoute;
@property(readonly, nonatomic) GEOLocation *location;
@property(readonly, nonatomic) GEOComposedRoute *route;
- (void)updateForLocation:(id)arg1;
- (id)initWithRoute:(id)arg1;
- (id)init;

@end

