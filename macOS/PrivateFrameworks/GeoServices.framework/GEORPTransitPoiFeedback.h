//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlace, GEOPDPlaceRequest, GEORPTransitLineTileInfo, GEORPTransitPoiCorrections, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPTransitPoiFeedback : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPTransitPoiCorrections *_corrections;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _correctionType;
    struct {
        unsigned int has_correctionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_corrections:1;
        unsigned int read_directionsRequests:1;
        unsigned int read_directionsResponses:1;
        unsigned int read_placeRequest:1;
        unsigned int read_place:1;
        unsigned int read_transitLineTileInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_corrections:1;
        unsigned int wrote_directionsRequests:1;
        unsigned int wrote_directionsResponses:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_place:1;
        unsigned int wrote_transitLineTileInfo:1;
        unsigned int wrote_correctionType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)directionsResponseType;
+ (Class)directionsRequestType;
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
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)_addNoFlagsDirectionsResponse:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)clearDirectionsResponses;
@property(retain, nonatomic) NSMutableArray *directionsResponses;
- (void)_readDirectionsResponses;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)_addNoFlagsDirectionsRequest:(id)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (void)clearDirectionsRequests;
@property(retain, nonatomic) NSMutableArray *directionsRequests;
- (void)_readDirectionsRequests;
@property(retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property(readonly, nonatomic) BOOL hasPlaceRequest;
- (void)_readPlaceRequest;
@property(retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo;
@property(readonly, nonatomic) BOOL hasTransitLineTileInfo;
- (void)_readTransitLineTileInfo;
@property(retain, nonatomic) GEOPDPlace *place;
@property(readonly, nonatomic) BOOL hasPlace;
- (void)_readPlace;
@property(retain, nonatomic) GEORPTransitPoiCorrections *corrections;
@property(readonly, nonatomic) BOOL hasCorrections;
- (void)_readCorrections;
- (int)StringAsCorrectionType:(id)arg1;
- (id)correctionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasCorrectionType;
@property(nonatomic) int correctionType;
- (id)initWithData:(id)arg1;
- (id)init;

@end

