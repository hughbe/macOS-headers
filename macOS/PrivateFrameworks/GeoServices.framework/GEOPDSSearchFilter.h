//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPoiIconCategoryFilter, GEOPDSBrandFilter, GEOPDSCategoryFilter, GEOPDSSearchVenueFilter, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSSearchFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDSBrandFilter *_brandFilter;
    GEOPDSCategoryFilter *_categoryFilter;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    GEOPDSSearchVenueFilter *_venueFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _searchIntentFilter;
    struct {
        unsigned int has_searchIntentFilter:1;
        unsigned int read_unknownFields:1;
        unsigned int read_brandFilter:1;
        unsigned int read_categoryFilter:1;
        unsigned int read_poiIconCategoryFilter:1;
        unsigned int read_venueFilter:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_brandFilter:1;
        unsigned int wrote_categoryFilter:1;
        unsigned int wrote_poiIconCategoryFilter:1;
        unsigned int wrote_venueFilter:1;
        unsigned int wrote_searchIntentFilter:1;
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
@property(retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
@property(readonly, nonatomic) BOOL hasPoiIconCategoryFilter;
- (void)_readPoiIconCategoryFilter;
- (int)StringAsSearchIntentFilter:(id)arg1;
- (id)searchIntentFilterAsString:(int)arg1;
@property(nonatomic) BOOL hasSearchIntentFilter;
@property(nonatomic) int searchIntentFilter;
@property(retain, nonatomic) GEOPDSBrandFilter *brandFilter;
@property(readonly, nonatomic) BOOL hasBrandFilter;
- (void)_readBrandFilter;
@property(retain, nonatomic) GEOPDSCategoryFilter *categoryFilter;
@property(readonly, nonatomic) BOOL hasCategoryFilter;
- (void)_readCategoryFilter;
@property(retain, nonatomic) GEOPDSSearchVenueFilter *venueFilter;
@property(readonly, nonatomic) BOOL hasVenueFilter;
- (void)_readVenueFilter;
- (id)initWithData:(id)arg1;
- (id)init;

@end

