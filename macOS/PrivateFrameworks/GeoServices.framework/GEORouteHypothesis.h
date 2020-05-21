//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOLocation, GEORouteHypothesisIncident, NSDate, NSError, NSString;

@interface GEORouteHypothesis : NSObject <NSSecureCoding>
{
    NSDate *_generationDate;
    GEOLocation *_lastLocation;
    int _transportType;
    NSDate *_suggestedDepartureDate;
    double _estimatedTravelTime;
    unsigned long long _currentTrafficDensity;
    unsigned long long _historicTrafficDensity;
    GEORouteHypothesisIncident *_mostRelevantIncident;
    long long _travelState;
    BOOL _supportsLiveTraffic;
    NSError *_error;
    NSDate *_conservativeDepartureDate;
    NSDate *_aggressiveDepartureDate;
    double _conservativeTravelTime;
    double _aggressiveTravelTime;
    NSString *_routeName;
    NSString *_trafficDensityDescription;
}

+ (BOOL)supportsTravelState:(long long)arg1 forTransportType:(int)arg2;
+ (id)_routeHypothesisErrorWithUnderlyingError:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(readonly, nonatomic) double aggressiveTravelTime; // @synthesize aggressiveTravelTime=_aggressiveTravelTime;
@property(readonly, nonatomic) double conservativeTravelTime; // @synthesize conservativeTravelTime=_conservativeTravelTime;
@property(readonly, nonatomic) NSDate *aggressiveDepartureDate; // @synthesize aggressiveDepartureDate=_aggressiveDepartureDate;
@property(readonly, nonatomic) NSDate *conservativeDepartureDate; // @synthesize conservativeDepartureDate=_conservativeDepartureDate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL supportsLiveTraffic; // @synthesize supportsLiveTraffic=_supportsLiveTraffic;
@property(readonly, nonatomic) long long travelState; // @synthesize travelState=_travelState;
@property(readonly, nonatomic) GEORouteHypothesisIncident *mostRelevantIncident; // @synthesize mostRelevantIncident=_mostRelevantIncident;
@property(readonly, nonatomic) unsigned long long historicTrafficDensity; // @synthesize historicTrafficDensity=_historicTrafficDensity;
@property(readonly, nonatomic) unsigned long long currentTrafficDensity; // @synthesize currentTrafficDensity=_currentTrafficDensity;
@property(readonly, nonatomic) double estimatedTravelTime; // @synthesize estimatedTravelTime=_estimatedTravelTime;
@property(readonly, nonatomic) NSDate *suggestedDepartureDate; // @synthesize suggestedDepartureDate=_suggestedDepartureDate;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) GEOLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(readonly, nonatomic) NSDate *generationDate; // @synthesize generationDate=_generationDate;
- (id)description;
- (void)_clearHypothesisAndSetErrorWithCode:(long long)arg1;
- (void)_setError:(id)arg1;
- (void)_updateTravelStateHasArrived:(BOOL)arg1 isTraveling:(BOOL)arg2 travelScore:(double)arg3 isNavigating:(BOOL)arg4 isNavigatingToDestination:(BOOL)arg5;
- (void)_updateTrafficIncidents:(id)arg1;
- (void)_updateTrafficDensityDescription:(id)arg1;
- (void)_updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)_updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;
- (void)_updateDepartureAndArrivalSuggestionsForArrivalDate:(id)arg1 travelTimeWithTraffic:(double)arg2 conservativeTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4 transportType:(int)arg5;
@property(readonly, nonatomic) NSString *trafficDensityDescription;
- (void)setRouteName:(id)arg1;
- (void)setSupportsLiveTraffic:(BOOL)arg1;
- (void)setLastLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

