//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@interface GEORouteHypothesisIncident : NSObject <NSSecureCoding>
{
    int _routeIncidentType;
    int _routeIncidentSignificance;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int routeIncidentSignificance; // @synthesize routeIncidentSignificance=_routeIncidentSignificance;
@property(readonly, nonatomic) int routeIncidentType; // @synthesize routeIncidentType=_routeIncidentType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncidentType:(int)arg1 incidentSignificance:(int)arg2;

@end

