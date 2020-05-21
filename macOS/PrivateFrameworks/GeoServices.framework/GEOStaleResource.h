//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOResource, PBDataReader, PBUnknownFields;

@interface GEOStaleResource : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOResource *_desiredResource;
    GEOResource *_fallbackResource;
    double _originalTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_originalTimestamp:1;
        unsigned int read_unknownFields:1;
        unsigned int read_desiredResource:1;
        unsigned int read_fallbackResource:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_desiredResource:1;
        unsigned int wrote_fallbackResource:1;
        unsigned int wrote_originalTimestamp:1;
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
@property(nonatomic) BOOL hasOriginalTimestamp;
@property(nonatomic) double originalTimestamp;
@property(retain, nonatomic) GEOResource *fallbackResource;
@property(readonly, nonatomic) BOOL hasFallbackResource;
- (void)_readFallbackResource;
@property(retain, nonatomic) GEOResource *desiredResource;
@property(readonly, nonatomic) BOOL hasDesiredResource;
- (void)_readDesiredResource;
- (id)initWithData:(id)arg1;
- (id)init;

@end

