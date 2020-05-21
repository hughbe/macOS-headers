//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader, PBUnknownFields;

@interface GEORPAmenityCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _addedAmenities;
    CDStruct_95bda58d _removedAmenities;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_addedAmenities:1;
        unsigned int read_removedAmenities:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_addedAmenities:1;
        unsigned int wrote_removedAmenities:1;
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
- (int)StringAsRemovedAmenities:(id)arg1;
- (id)removedAmenitiesAsString:(int)arg1;
- (void)setRemovedAmenities:(int *)arg1 count:(unsigned long long)arg2;
- (int)removedAmenitiesAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsRemovedAmenities:(int)arg1;
- (void)addRemovedAmenities:(int)arg1;
- (void)clearRemovedAmenities;
@property(readonly, nonatomic) int *removedAmenities;
@property(readonly, nonatomic) unsigned long long removedAmenitiesCount;
- (void)_readRemovedAmenities;
- (int)StringAsAddedAmenities:(id)arg1;
- (id)addedAmenitiesAsString:(int)arg1;
- (void)setAddedAmenities:(int *)arg1 count:(unsigned long long)arg2;
- (int)addedAmenitiesAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsAddedAmenities:(int)arg1;
- (void)addAddedAmenities:(int)arg1;
- (void)clearAddedAmenities;
@property(readonly, nonatomic) int *addedAmenities;
@property(readonly, nonatomic) unsigned long long addedAmenitiesCount;
- (void)_readAddedAmenities;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

