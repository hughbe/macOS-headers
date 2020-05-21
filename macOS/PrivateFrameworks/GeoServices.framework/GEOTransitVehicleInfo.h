//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOTransitVehicleTime, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitVehicleInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _clusteredRouteLineArtworkIndexs;
    GEOTransitVehicleTime *_arrivalTime;
    GEOTransitVehicleTime *_departureTime;
    unsigned long long _tripMuid;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _departureFrequencyMax;
    unsigned int _departureFrequencyMin;
    unsigned int _lineIndex;
    int _pickupDropoffType;
    unsigned int _routeLineArtworkIndex;
    struct {
        unsigned int has_tripMuid:1;
        unsigned int has_departureFrequencyMax:1;
        unsigned int has_departureFrequencyMin:1;
        unsigned int has_lineIndex:1;
        unsigned int has_pickupDropoffType:1;
        unsigned int has_routeLineArtworkIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_clusteredRouteLineArtworkIndexs:1;
        unsigned int read_arrivalTime:1;
        unsigned int read_departureTime:1;
        unsigned int read_vehicleNumber:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_clusteredRouteLineArtworkIndexs:1;
        unsigned int wrote_arrivalTime:1;
        unsigned int wrote_departureTime:1;
        unsigned int wrote_tripMuid:1;
        unsigned int wrote_vehicleNumber:1;
        unsigned int wrote_departureFrequencyMax:1;
        unsigned int wrote_departureFrequencyMin:1;
        unsigned int wrote_lineIndex:1;
        unsigned int wrote_pickupDropoffType:1;
        unsigned int wrote_routeLineArtworkIndex:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *vehicleNumber;
@property(readonly, nonatomic) BOOL hasVehicleNumber;
- (void)_readVehicleNumber;
@property(nonatomic) BOOL hasTripMuid;
@property(nonatomic) unsigned long long tripMuid;
@property(nonatomic) BOOL hasDepartureFrequencyMax;
@property(nonatomic) unsigned int departureFrequencyMax;
@property(nonatomic) BOOL hasDepartureFrequencyMin;
@property(nonatomic) unsigned int departureFrequencyMin;
- (int)StringAsPickupDropoffType:(id)arg1;
- (id)pickupDropoffTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPickupDropoffType;
@property(nonatomic) int pickupDropoffType;
- (void)setClusteredRouteLineArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)clusteredRouteLineArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsClusteredRouteLineArtworkIndex:(unsigned int)arg1;
- (void)addClusteredRouteLineArtworkIndex:(unsigned int)arg1;
- (void)clearClusteredRouteLineArtworkIndexs;
@property(readonly, nonatomic) unsigned int *clusteredRouteLineArtworkIndexs;
@property(readonly, nonatomic) unsigned long long clusteredRouteLineArtworkIndexsCount;
- (void)_readClusteredRouteLineArtworkIndexs;
@property(nonatomic) BOOL hasRouteLineArtworkIndex;
@property(nonatomic) unsigned int routeLineArtworkIndex;
@property(nonatomic) BOOL hasLineIndex;
@property(nonatomic) unsigned int lineIndex;
@property(retain, nonatomic) GEOTransitVehicleTime *departureTime;
@property(readonly, nonatomic) BOOL hasDepartureTime;
- (void)_readDepartureTime;
@property(retain, nonatomic) GEOTransitVehicleTime *arrivalTime;
@property(readonly, nonatomic) BOOL hasArrivalTime;
- (void)_readArrivalTime;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

