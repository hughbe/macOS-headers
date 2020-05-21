//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTFRoadSpeed : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_5df41632 _geoIds;
    CDStruct_fae3dc92 _latitudeCoordinates;
    CDStruct_fae3dc92 _longitudeCoordinates;
    long long _geoid;
    NSData *_openlr;
    NSMutableArray *_predictedSpeeds;
    NSData *_zilch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _color;
    float _confidence;
    unsigned int _decayTimeWindowInMinutes;
    float _endOffset;
    unsigned int _speedKph;
    float _startOffset;
    BOOL _hidden;
    struct {
        unsigned int has_color:1;
        unsigned int has_confidence:1;
        unsigned int has_decayTimeWindowInMinutes:1;
        unsigned int has_endOffset:1;
        unsigned int has_speedKph:1;
        unsigned int has_startOffset:1;
        unsigned int has_hidden:1;
        unsigned int read_geoIds:1;
        unsigned int read_latitudeCoordinates:1;
        unsigned int read_longitudeCoordinates:1;
        unsigned int read_openlr:1;
        unsigned int read_predictedSpeeds:1;
        unsigned int read_zilch:1;
        unsigned int wrote_geoIds:1;
        unsigned int wrote_latitudeCoordinates:1;
        unsigned int wrote_longitudeCoordinates:1;
        unsigned int wrote_geoid:1;
        unsigned int wrote_openlr:1;
        unsigned int wrote_predictedSpeeds:1;
        unsigned int wrote_zilch:1;
        unsigned int wrote_color:1;
        unsigned int wrote_confidence:1;
        unsigned int wrote_decayTimeWindowInMinutes:1;
        unsigned int wrote_endOffset:1;
        unsigned int wrote_speedKph:1;
        unsigned int wrote_startOffset:1;
        unsigned int wrote_hidden:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)predictedSpeedType;
- (void).cxx_destruct;
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
@property(retain, nonatomic) NSData *openlr;
@property(readonly, nonatomic) BOOL hasOpenlr;
- (void)_readOpenlr;
- (void)setGeoIds:(long long *)arg1 count:(unsigned long long)arg2;
- (long long)geoIdsAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsGeoIds:(long long)arg1;
- (void)addGeoIds:(long long)arg1;
- (void)clearGeoIds;
@property(readonly, nonatomic) long long *geoIds;
@property(readonly, nonatomic) unsigned long long geoIdsCount;
- (void)_readGeoIds;
- (void)setLongitudeCoordinates:(float *)arg1 count:(unsigned long long)arg2;
- (float)longitudeCoordinatesAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsLongitudeCoordinates:(float)arg1;
- (void)addLongitudeCoordinates:(float)arg1;
- (void)clearLongitudeCoordinates;
@property(readonly, nonatomic) float *longitudeCoordinates;
@property(readonly, nonatomic) unsigned long long longitudeCoordinatesCount;
- (void)_readLongitudeCoordinates;
- (void)setLatitudeCoordinates:(float *)arg1 count:(unsigned long long)arg2;
- (float)latitudeCoordinatesAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsLatitudeCoordinates:(float)arg1;
- (void)addLatitudeCoordinates:(float)arg1;
- (void)clearLatitudeCoordinates;
@property(readonly, nonatomic) float *latitudeCoordinates;
@property(readonly, nonatomic) unsigned long long latitudeCoordinatesCount;
- (void)_readLatitudeCoordinates;
@property(nonatomic) BOOL hasConfidence;
@property(nonatomic) float confidence;
@property(nonatomic) BOOL hasDecayTimeWindowInMinutes;
@property(nonatomic) unsigned int decayTimeWindowInMinutes;
@property(retain, nonatomic) NSData *zilch;
@property(readonly, nonatomic) BOOL hasZilch;
- (void)_readZilch;
@property(nonatomic) BOOL hasSpeedKph;
@property(nonatomic) unsigned int speedKph;
- (int)StringAsColor:(id)arg1;
- (id)colorAsString:(int)arg1;
@property(nonatomic) BOOL hasColor;
@property(nonatomic) int color;
- (id)predictedSpeedAtIndex:(unsigned long long)arg1;
- (unsigned long long)predictedSpeedsCount;
- (void)_addNoFlagsPredictedSpeed:(id)arg1;
- (void)addPredictedSpeed:(id)arg1;
- (void)clearPredictedSpeeds;
@property(retain, nonatomic) NSMutableArray *predictedSpeeds;
- (void)_readPredictedSpeeds;
@property(nonatomic) BOOL hasHidden;
@property(nonatomic) BOOL hidden;
@property(nonatomic) BOOL hasEndOffset;
@property(nonatomic) float endOffset;
@property(nonatomic) BOOL hasStartOffset;
@property(nonatomic) float startOffset;
@property(nonatomic) long long geoid;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

