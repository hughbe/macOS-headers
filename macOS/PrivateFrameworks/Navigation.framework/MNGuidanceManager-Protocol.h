//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, MNLocation, NSDictionary;

@protocol MNGuidanceManager <NSObject>
- (void)stop;
- (void)updateDestination:(GEOComposedWaypoint *)arg1;
- (void)updateForReroute:(GEOComposedRoute *)arg1;
- (void)updateForReturnToRoute;
- (void)addInjectedEvent:(NSDictionary *)arg1;
- (BOOL)repeatLastGuidanceAnnouncement:(MNLocation *)arg1;
- (double)timeUntilNextAnnouncement;
- (double)timeSinceLastAnnouncement;
- (void)updateGuidanceForLocation:(MNLocation *)arg1 navigatorState:(int)arg2;
@end

