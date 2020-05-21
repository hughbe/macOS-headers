//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPriceDescription, GEOPDRating, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultSnippet : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_category;
    NSMutableArray *_childItems;
    NSMutableArray *_childPlaces;
    NSString *_locationString;
    NSString *_name;
    GEOPDPriceDescription *_priceDescription;
    GEOPDRating *_priceRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distanceDisplayThreshold;
    struct {
        unsigned int has_distanceDisplayThreshold:1;
        unsigned int read_unknownFields:1;
        unsigned int read_category:1;
        unsigned int read_childItems:1;
        unsigned int read_childPlaces:1;
        unsigned int read_locationString:1;
        unsigned int read_name:1;
        unsigned int read_priceDescription:1;
        unsigned int read_priceRange:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_category:1;
        unsigned int wrote_childItems:1;
        unsigned int wrote_childPlaces:1;
        unsigned int wrote_locationString:1;
        unsigned int wrote_name:1;
        unsigned int wrote_priceDescription:1;
        unsigned int wrote_priceRange:1;
        unsigned int wrote_distanceDisplayThreshold:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)childItemType;
+ (Class)childPlaceType;
+ (id)resultSnippetForPlaceData:(id)arg1;
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
- (id)childItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)childItemsCount;
- (void)_addNoFlagsChildItem:(id)arg1;
- (void)addChildItem:(id)arg1;
- (void)clearChildItems;
@property(retain, nonatomic) NSMutableArray *childItems;
- (void)_readChildItems;
@property(retain, nonatomic) GEOPDPriceDescription *priceDescription;
@property(readonly, nonatomic) BOOL hasPriceDescription;
- (void)_readPriceDescription;
- (id)childPlaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)childPlacesCount;
- (void)_addNoFlagsChildPlace:(id)arg1;
- (void)addChildPlace:(id)arg1;
- (void)clearChildPlaces;
@property(retain, nonatomic) NSMutableArray *childPlaces;
- (void)_readChildPlaces;
@property(nonatomic) BOOL hasDistanceDisplayThreshold;
@property(nonatomic) unsigned int distanceDisplayThreshold;
@property(retain, nonatomic) NSString *locationString;
@property(readonly, nonatomic) BOOL hasLocationString;
- (void)_readLocationString;
@property(retain, nonatomic) GEOPDRating *priceRange;
@property(readonly, nonatomic) BOOL hasPriceRange;
- (void)_readPriceRange;
@property(retain, nonatomic) NSString *category;
@property(readonly, nonatomic) BOOL hasCategory;
- (void)_readCategory;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

