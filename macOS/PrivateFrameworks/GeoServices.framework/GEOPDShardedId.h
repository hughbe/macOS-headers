//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDShardedId : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _basemapId;
    GEOLatLng *_center;
    unsigned long long _muid;
    int _resultProviderId;
    struct {
        unsigned int has_basemapId:1;
        unsigned int has_muid:1;
        unsigned int has_resultProviderId:1;
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
@property(nonatomic) BOOL hasBasemapId;
@property(nonatomic) unsigned long long basemapId;
@property(nonatomic) BOOL hasResultProviderId;
@property(nonatomic) int resultProviderId;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) BOOL hasCenter;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) unsigned long long muid;

@end

