//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPoiIconCategoryFilter, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _requestedEntryTypes;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_requestedEntryTypes:1;
        unsigned int read_poiIconCategoryFilter:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_requestedEntryTypes:1;
        unsigned int wrote_poiIconCategoryFilter:1;
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
- (int)StringAsRequestedEntryTypes:(id)arg1;
- (id)requestedEntryTypesAsString:(int)arg1;
- (void)setRequestedEntryTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)requestedEntryTypeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsRequestedEntryType:(int)arg1;
- (void)addRequestedEntryType:(int)arg1;
- (void)clearRequestedEntryTypes;
@property(readonly, nonatomic) int *requestedEntryTypes;
@property(readonly, nonatomic) unsigned long long requestedEntryTypesCount;
- (void)_readRequestedEntryTypes;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

