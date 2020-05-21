//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class GEOETARoute, GEORoute, MNRouteCoordinate, NSData;

@interface MNTrafficIncidentAlertDetails : PBCodable <NSCopying>
{
    double _alertTimestamp;
    double _distanceToIncident;
    double _etaTimestamp;
    NSData *_alertID;
    unsigned int _alertType;
    GEORoute *_alternateRoute;
    NSData *_alternateRouteTrafficData;
    MNRouteCoordinate *_endValidCoordinateRange;
    NSData *_etaResponseID;
    GEOETARoute *_etaRoute;
    MNRouteCoordinate *_incidentCoordinate;
    GEORoute *_originalRoute;
    NSData *_originalRouteTrafficData;
    MNRouteCoordinate *_startValidCoordinateRange;
    BOOL _isAutomaticReroute;
    struct {
        unsigned int alertTimestamp:1;
        unsigned int distanceToIncident:1;
        unsigned int etaTimestamp:1;
        unsigned int alertType:1;
        unsigned int isAutomaticReroute:1;
    } _has;
}

+ (id)detailsForTrafficIncidentAlert:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL isAutomaticReroute; // @synthesize isAutomaticReroute=_isAutomaticReroute;
@property(nonatomic) double distanceToIncident; // @synthesize distanceToIncident=_distanceToIncident;
@property(nonatomic) double etaTimestamp; // @synthesize etaTimestamp=_etaTimestamp;
@property(nonatomic) double alertTimestamp; // @synthesize alertTimestamp=_alertTimestamp;
@property(retain, nonatomic) MNRouteCoordinate *incidentCoordinate; // @synthesize incidentCoordinate=_incidentCoordinate;
@property(retain, nonatomic) MNRouteCoordinate *endValidCoordinateRange; // @synthesize endValidCoordinateRange=_endValidCoordinateRange;
@property(retain, nonatomic) MNRouteCoordinate *startValidCoordinateRange; // @synthesize startValidCoordinateRange=_startValidCoordinateRange;
@property(retain, nonatomic) NSData *alternateRouteTrafficData; // @synthesize alternateRouteTrafficData=_alternateRouteTrafficData;
@property(retain, nonatomic) GEORoute *alternateRoute; // @synthesize alternateRoute=_alternateRoute;
@property(retain, nonatomic) NSData *originalRouteTrafficData; // @synthesize originalRouteTrafficData=_originalRouteTrafficData;
@property(retain, nonatomic) GEORoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(retain, nonatomic) GEOETARoute *etaRoute; // @synthesize etaRoute=_etaRoute;
@property(nonatomic) unsigned int alertType; // @synthesize alertType=_alertType;
@property(retain, nonatomic) NSData *etaResponseID; // @synthesize etaResponseID=_etaResponseID;
@property(retain, nonatomic) NSData *alertID; // @synthesize alertID=_alertID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsAutomaticReroute;
@property(nonatomic) BOOL hasDistanceToIncident;
@property(nonatomic) BOOL hasEtaTimestamp;
@property(nonatomic) BOOL hasAlertTimestamp;
@property(readonly, nonatomic) BOOL hasIncidentCoordinate;
@property(readonly, nonatomic) BOOL hasEndValidCoordinateRange;
@property(readonly, nonatomic) BOOL hasStartValidCoordinateRange;
@property(readonly, nonatomic) BOOL hasAlternateRouteTrafficData;
@property(readonly, nonatomic) BOOL hasAlternateRoute;
@property(readonly, nonatomic) BOOL hasOriginalRouteTrafficData;
@property(readonly, nonatomic) BOOL hasOriginalRoute;
@property(readonly, nonatomic) BOOL hasEtaRoute;
@property(nonatomic) BOOL hasAlertType;
@property(readonly, nonatomic) BOOL hasEtaResponseID;
@property(readonly, nonatomic) BOOL hasAlertID;

@end

