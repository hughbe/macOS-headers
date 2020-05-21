//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAttribution, GEOPDPlaceCollection, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPlaceCollectionStorage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDAttribution *_attribution;
    GEOPDPlaceCollection *_placeCollection;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attribution:1;
        unsigned int read_placeCollection:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attribution:1;
        unsigned int wrote_placeCollection:1;
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
@property(retain, nonatomic) GEOPDAttribution *attribution;
@property(readonly, nonatomic) BOOL hasAttribution;
- (void)_readAttribution;
@property(retain, nonatomic) GEOPDPlaceCollection *placeCollection;
@property(readonly, nonatomic) BOOL hasPlaceCollection;
- (void)_readPlaceCollection;
- (id)initWithData:(id)arg1;
- (id)init;

@end

