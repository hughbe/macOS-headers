//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSLocationOfInterestVisit, NSDate, NSMutableDictionary, NSMutableSet;

@interface CLSLocationOfInterestCache : NSObject
{
    NSMutableDictionary *_visitsCache;
    NSMutableDictionary *_transitionsCache;
    NSMutableSet *_allLocationsOfInterest;
    NSMutableSet *_allLocationsOfInterestTransitionIdentifiers;
    NSMutableSet *_homeLocations;
    NSMutableSet *_workLocations;
    unsigned long long _numberOfLocationsOfInterestVisits;
    NSDate *_earliestVisitStartDate;
    CLSLocationOfInterestVisit *_lastLocationOfInterestVisit;
}

- (void).cxx_destruct;
@property(readonly) CLSLocationOfInterestVisit *lastLocationOfInterestVisit; // @synthesize lastLocationOfInterestVisit=_lastLocationOfInterestVisit;
@property(readonly) NSDate *earliestVisitStartDate; // @synthesize earliestVisitStartDate=_earliestVisitStartDate;
@property(readonly) unsigned long long numberOfLocationsOfInterestVisits; // @synthesize numberOfLocationsOfInterestVisits=_numberOfLocationsOfInterestVisits;
@property(retain, nonatomic) NSMutableSet *workLocations; // @synthesize workLocations=_workLocations;
@property(retain, nonatomic) NSMutableSet *homeLocations; // @synthesize homeLocations=_homeLocations;
@property(retain, nonatomic) NSMutableSet *allLocationsOfInterestTransitionIdentifiers; // @synthesize allLocationsOfInterestTransitionIdentifiers=_allLocationsOfInterestTransitionIdentifiers;
@property(retain, nonatomic) NSMutableSet *allLocationsOfInterest; // @synthesize allLocationsOfInterest=_allLocationsOfInterest;
@property(retain, nonatomic) NSMutableDictionary *transitionsCache; // @synthesize transitionsCache=_transitionsCache;
@property(retain, nonatomic) NSMutableDictionary *visitsCache; // @synthesize visitsCache=_visitsCache;
@property(readonly) unsigned long long numberOfLocationsOfInterestTransitions;
- (id)locationsOfInterestTransitionInDateInterval:(id)arg1;
- (void)addLocationOfInterestTransition:(id)arg1;
@property(readonly) unsigned long long numberOfLocationsOfInterest;
- (id)locationsOfInterestVisitsInDateInterval:(id)arg1;
- (id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3;
- (id)locationsOfInterestOfType:(long long)arg1;
- (void)addLocationOfInterest:(id)arg1;
- (id)init;

@end

