//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORouteTrafficDetail, GEOShortTrafficSummary, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOETAResultByType : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _expectedTimeOfDeparture;
    GEORouteTrafficDetail *_routeTrafficDetail;
    GEOShortTrafficSummary *_shortTrafficSummary;
    NSMutableArray *_summaryForPredictedDestinations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    unsigned int _staticTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    struct {
        unsigned int has_expectedTimeOfDeparture:1;
        unsigned int has_distance:1;
        unsigned int has_historicTravelTime:1;
        unsigned int has_staticTravelTime:1;
        unsigned int has_status:1;
        unsigned int has_transportType:1;
        unsigned int has_travelTimeBestEstimate:1;
        unsigned int has_travelTimeAggressiveEstimate:1;
        unsigned int has_travelTimeConservativeEstimate:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeTrafficDetail:1;
        unsigned int read_shortTrafficSummary:1;
        unsigned int read_summaryForPredictedDestinations:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_expectedTimeOfDeparture:1;
        unsigned int wrote_routeTrafficDetail:1;
        unsigned int wrote_shortTrafficSummary:1;
        unsigned int wrote_summaryForPredictedDestinations:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_historicTravelTime:1;
        unsigned int wrote_staticTravelTime:1;
        unsigned int wrote_status:1;
        unsigned int wrote_transportType:1;
        unsigned int wrote_travelTimeBestEstimate:1;
        unsigned int wrote_travelTimeAggressiveEstimate:1;
        unsigned int wrote_travelTimeConservativeEstimate:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)summaryForPredictedDestinationType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOShortTrafficSummary *shortTrafficSummary;
@property(readonly, nonatomic) BOOL hasShortTrafficSummary;
- (void)_readShortTrafficSummary;
@property(retain, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property(readonly, nonatomic) BOOL hasRouteTrafficDetail;
- (void)_readRouteTrafficDetail;
- (id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)summaryForPredictedDestinationsCount;
- (void)_addNoFlagsSummaryForPredictedDestination:(id)arg1;
- (void)addSummaryForPredictedDestination:(id)arg1;
- (void)clearSummaryForPredictedDestinations;
@property(retain, nonatomic) NSMutableArray *summaryForPredictedDestinations;
- (void)_readSummaryForPredictedDestinations;
@property(nonatomic) BOOL hasStaticTravelTime;
@property(nonatomic) unsigned int staticTravelTime;
@property(nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property(nonatomic) unsigned int travelTimeAggressiveEstimate;
@property(nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property(nonatomic) unsigned int travelTimeConservativeEstimate;
@property(nonatomic) BOOL hasExpectedTimeOfDeparture;
@property(nonatomic) double expectedTimeOfDeparture;
@property(nonatomic) BOOL hasDistance;
@property(nonatomic) unsigned int distance;
@property(nonatomic) BOOL hasHistoricTravelTime;
@property(nonatomic) unsigned int historicTravelTime;
@property(nonatomic) BOOL hasTravelTimeBestEstimate;
@property(nonatomic) unsigned int travelTimeBestEstimate;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
- (int)StringAsTransportType:(id)arg1;
- (id)transportTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasTransportType;
@property(nonatomic) int transportType;
- (id)initWithData:(id)arg1;
- (id)init;

@end

