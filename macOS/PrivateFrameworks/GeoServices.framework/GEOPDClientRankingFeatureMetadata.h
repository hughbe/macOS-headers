//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDClientRankingFeatureFunctionTypeDiscrete, GEOPDClientRankingFeatureFunctionTypeLinear, GEOPDClientRankingFeatureTypeResult, GEOPDClientRankingFeatureTypeSource, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureMetadata : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDClientRankingFeatureTypeResult *_featureTypeResult;
    GEOPDClientRankingFeatureTypeSource *_featureTypeSource;
    GEOPDClientRankingFeatureFunctionTypeDiscrete *_functionTypeDiscrete;
    GEOPDClientRankingFeatureFunctionTypeLinear *_functionTypeLinear;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _featureType;
    int _functionType;
    struct {
        unsigned int has_featureType:1;
        unsigned int has_functionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_featureTypeResult:1;
        unsigned int read_featureTypeSource:1;
        unsigned int read_functionTypeDiscrete:1;
        unsigned int read_functionTypeLinear:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_featureTypeResult:1;
        unsigned int wrote_featureTypeSource:1;
        unsigned int wrote_functionTypeDiscrete:1;
        unsigned int wrote_functionTypeLinear:1;
        unsigned int wrote_featureType:1;
        unsigned int wrote_functionType:1;
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
@property(retain, nonatomic) GEOPDClientRankingFeatureFunctionTypeDiscrete *functionTypeDiscrete;
@property(readonly, nonatomic) BOOL hasFunctionTypeDiscrete;
- (void)_readFunctionTypeDiscrete;
@property(retain, nonatomic) GEOPDClientRankingFeatureFunctionTypeLinear *functionTypeLinear;
@property(readonly, nonatomic) BOOL hasFunctionTypeLinear;
- (void)_readFunctionTypeLinear;
- (int)StringAsFunctionType:(id)arg1;
- (id)functionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFunctionType;
@property(nonatomic) int functionType;
@property(retain, nonatomic) GEOPDClientRankingFeatureTypeResult *featureTypeResult;
@property(readonly, nonatomic) BOOL hasFeatureTypeResult;
- (void)_readFeatureTypeResult;
@property(retain, nonatomic) GEOPDClientRankingFeatureTypeSource *featureTypeSource;
@property(readonly, nonatomic) BOOL hasFeatureTypeSource;
- (void)_readFeatureTypeSource;
- (int)StringAsFeatureType:(id)arg1;
- (id)featureTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasFeatureType;
@property(nonatomic) int featureType;
- (id)initWithData:(id)arg1;
- (id)init;

@end

