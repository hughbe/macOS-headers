//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPAddressCorrections, GEORPAmenityCorrections, GEORPCategoryCorrections, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPPoiCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAddressCorrections *_address;
    GEORPAmenityCorrections *_amenity;
    NSMutableArray *_businessHours;
    GEORPCategoryCorrections *_category;
    NSString *_hoursText;
    NSString *_name;
    NSString *_originalName;
    NSString *_originalPhone;
    NSString *_originalUrl;
    NSString *_phone;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _flagHoursIncorrect;
    BOOL _flagNotAtThisAddress;
    struct {
        unsigned int has_flagHoursIncorrect:1;
        unsigned int has_flagNotAtThisAddress:1;
        unsigned int read_unknownFields:1;
        unsigned int read_address:1;
        unsigned int read_amenity:1;
        unsigned int read_businessHours:1;
        unsigned int read_category:1;
        unsigned int read_hoursText:1;
        unsigned int read_name:1;
        unsigned int read_originalName:1;
        unsigned int read_originalPhone:1;
        unsigned int read_originalUrl:1;
        unsigned int read_phone:1;
        unsigned int read_url:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_address:1;
        unsigned int wrote_amenity:1;
        unsigned int wrote_businessHours:1;
        unsigned int wrote_category:1;
        unsigned int wrote_hoursText:1;
        unsigned int wrote_name:1;
        unsigned int wrote_originalName:1;
        unsigned int wrote_originalPhone:1;
        unsigned int wrote_originalUrl:1;
        unsigned int wrote_phone:1;
        unsigned int wrote_url:1;
        unsigned int wrote_flagHoursIncorrect:1;
        unsigned int wrote_flagNotAtThisAddress:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)businessHoursType;
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
@property(retain, nonatomic) NSString *hoursText;
@property(readonly, nonatomic) BOOL hasHoursText;
- (void)_readHoursText;
@property(retain, nonatomic) NSString *originalUrl;
@property(readonly, nonatomic) BOOL hasOriginalUrl;
- (void)_readOriginalUrl;
@property(retain, nonatomic) NSString *originalPhone;
@property(readonly, nonatomic) BOOL hasOriginalPhone;
- (void)_readOriginalPhone;
@property(retain, nonatomic) NSString *originalName;
@property(readonly, nonatomic) BOOL hasOriginalName;
- (void)_readOriginalName;
@property(nonatomic) BOOL hasFlagNotAtThisAddress;
@property(nonatomic) BOOL flagNotAtThisAddress;
@property(nonatomic) BOOL hasFlagHoursIncorrect;
@property(nonatomic) BOOL flagHoursIncorrect;
@property(retain, nonatomic) GEORPAmenityCorrections *amenity;
@property(readonly, nonatomic) BOOL hasAmenity;
- (void)_readAmenity;
@property(retain, nonatomic) GEORPCategoryCorrections *category;
@property(readonly, nonatomic) BOOL hasCategory;
- (void)_readCategory;
@property(retain, nonatomic) NSString *url;
@property(readonly, nonatomic) BOOL hasUrl;
- (void)_readUrl;
- (id)businessHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessHoursCount;
- (void)_addNoFlagsBusinessHours:(id)arg1;
- (void)addBusinessHours:(id)arg1;
- (void)clearBusinessHours;
@property(retain, nonatomic) NSMutableArray *businessHours;
- (void)_readBusinessHours;
@property(retain, nonatomic) GEORPAddressCorrections *address;
@property(readonly, nonatomic) BOOL hasAddress;
- (void)_readAddress;
@property(retain, nonatomic) NSString *phone;
@property(readonly, nonatomic) BOOL hasPhone;
- (void)_readPhone;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL hasName;
- (void)_readName;
- (id)initWithData:(id)arg1;
- (id)init;

@end

