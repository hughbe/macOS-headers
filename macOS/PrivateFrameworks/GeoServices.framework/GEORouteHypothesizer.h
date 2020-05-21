//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPlannedDestination, GEORouteHypothesis, NSError, NSUUID, geo_isolater;
@protocol OS_dispatch_source;

@interface GEORouteHypothesizer : NSObject
{
    GEOPlannedDestination *_plannedDestination;
    unsigned long long _state;
    BOOL _unableToFindRouteForOriginalTransportType;
    GEORouteHypothesis *_currentHypothesis;
    NSError *_currentError;
    CDUnknownBlockType _updateHandler;
    NSUUID *_uuid;
    geo_isolater *_isolater;
    BOOL _wakeForDelay;
    NSObject<OS_dispatch_source> *_delayDispatchTimer;
}

+ (void)didDismissUINotification:(unsigned long long)arg1 forPlannedDestination:(id)arg2 dismissalType:(unsigned long long)arg3;
+ (BOOL)transitTTLSupportedInCurrentCountry;
+ (id)hypothesizerForPlannedDestination:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL unableToFindRouteForOriginalTransportType; // @synthesize unableToFindRouteForOriginalTransportType=_unableToFindRouteForOriginalTransportType;
@property(readonly, nonatomic) NSError *currentError; // @synthesize currentError=_currentError;
@property(readonly, nonatomic) GEOPlannedDestination *plannedDestination; // @synthesize plannedDestination=_plannedDestination;
@property(readonly, nonatomic) GEORouteHypothesis *currentHypothesis; // @synthesize currentHypothesis=_currentHypothesis;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)description;
- (void)dealloc;
- (void)didPostUINotification:(unsigned long long)arg1;
- (void)onlyPerformLocalUpdates;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)startHypothesizingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)_delayStartingWithXpc;
- (void)cancelDelayDispatchTimer;
- (void)_delayStartingWithoutXpc;
- (void)_performDelayedStart;
- (BOOL)_wontHypothesizeAgain;
- (void)setDoNotWakeForDelay;
- (BOOL)wakeForDelay;
@property(readonly, nonatomic) double willEndHypothesizingInterval;
@property(readonly, nonatomic) double willBeginHypothesizingInterval;
- (id)initWithPlannedDestination:(id)arg1;

@end

