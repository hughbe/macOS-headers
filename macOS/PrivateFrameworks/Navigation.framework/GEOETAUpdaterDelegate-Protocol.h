//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedRoute, GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, GEOETAUpdater, GEOStep, NSArray, NSError;

@protocol GEOETAUpdaterDelegate <NSObject>
- (void)etaUpdaterReceivedInvalidRoute:(GEOETAUpdater *)arg1 newRoute:(GEOComposedRoute *)arg2 incidentsOnRoute:(NSArray *)arg3 incidentsOffRoute:(NSArray *)arg4;
- (void)etaUpdaterUpdatedETA:(GEOETAUpdater *)arg1;
- (void)etaUpdater:(GEOETAUpdater *)arg1 receivedError:(NSError *)arg2;
- (void)etaUpdater:(GEOETAUpdater *)arg1 receivedETATrafficUpdateResponse:(GEOETATrafficUpdateResponse *)arg2;
- (void)etaUpdater:(GEOETAUpdater *)arg1 willSendETATrafficUpdateRequest:(GEOETATrafficUpdateRequest *)arg2;
- (NSArray *)etaUpdaterRoutesForETATrafficUpdateRequest:(GEOETAUpdater *)arg1;

@optional
- (void)etaUpdaterRequestCompleted:(GEOETAUpdater *)arg1;
- (BOOL)etaUpdater:(GEOETAUpdater *)arg1 updateRouteWithETATrafficUpdateResponse:(GEOETATrafficUpdateResponse *)arg2 step:(GEOStep *)arg3 percentOfCurrentStepRemaining:(double)arg4;
@end

