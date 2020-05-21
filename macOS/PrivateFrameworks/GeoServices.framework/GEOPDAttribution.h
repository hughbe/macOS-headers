//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAttribution : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_actionUrlComponent;
    NSMutableArray *_attributionUrls;
    NSString *_externalComponentId;
    NSString *_externalItemId;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_actionUrlComponent:1;
        unsigned int read_attributionUrls:1;
        unsigned int read_externalComponentId:1;
        unsigned int read_externalItemId:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_actionUrlComponent:1;
        unsigned int wrote_attributionUrls:1;
        unsigned int wrote_externalComponentId:1;
        unsigned int wrote_externalItemId:1;
        unsigned int wrote_vendorId:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)attributionUrlType;
+ (id)attributionForAnnotatedItemList:(id)arg1 placeData:(id)arg2;
+ (id)attributionForPlaceDataRestaurantReservationLink:(id)arg1;
+ (id)attributionForPlaceDataEncyclopedia:(id)arg1;
+ (id)attributionForPlaceDataEntity:(id)arg1;
+ (id)attributionForPlaceDataPhotos:(id)arg1;
+ (id)attributionForPlaceDataReview:(id)arg1;
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
@property(retain, nonatomic) NSString *actionUrlComponent;
@property(readonly, nonatomic) BOOL hasActionUrlComponent;
- (void)_readActionUrlComponent;
- (id)attributionUrlAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionUrlsCount;
- (void)_addNoFlagsAttributionUrl:(id)arg1;
- (void)addAttributionUrl:(id)arg1;
- (void)clearAttributionUrls;
@property(retain, nonatomic) NSMutableArray *attributionUrls;
- (void)_readAttributionUrls;
@property(retain, nonatomic) NSString *externalComponentId;
@property(readonly, nonatomic) BOOL hasExternalComponentId;
- (void)_readExternalComponentId;
@property(retain, nonatomic) NSString *externalItemId;
@property(readonly, nonatomic) BOOL hasExternalItemId;
- (void)_readExternalItemId;
@property(retain, nonatomic) NSString *vendorId;
@property(readonly, nonatomic) BOOL hasVendorId;
- (void)_readVendorId;
- (id)initWithData:(id)arg1;
- (id)init;
- (BOOL)_isYelp;

@end

