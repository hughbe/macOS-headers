//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEODirectionsRequest, GEODirectionsResponse, GEOETATrafficUpdateResponse, GEORouteAttributes, NSArray;

@interface GEORouteInitializerData : NSObject <NSSecureCoding>
{
    NSArray *_waypoints;
    GEODirectionsResponse *_directionsResponse;
    GEOETATrafficUpdateResponse *_etaTrafficUpdateResponse;
    GEORouteAttributes *_routeAttributes;
    GEODirectionsRequest *_directionsRequest;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(readonly, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(readonly, nonatomic) GEOETATrafficUpdateResponse *etaTrafficUpdateResponse; // @synthesize etaTrafficUpdateResponse=_etaTrafficUpdateResponse;
@property(readonly, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
- (BOOL)_MapsCarPlay_isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3 directionsRequest:(id)arg4;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 ETATrafficUpdateResponse:(id)arg3;
- (id)initWithWaypoints:(id)arg1 routeAttributes:(id)arg2 directionsResponse:(id)arg3;

@end

