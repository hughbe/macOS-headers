/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficProbeFlow : PBCodable <NSCopying> {
    unsigned int  _aggregationCount;
    unsigned int  _aggregationWindowSeconds;
    struct { 
        unsigned int has_aggregationCount : 1; 
        unsigned int has_aggregationWindowSeconds : 1; 
        unsigned int has_partialTraversalAggregationCount : 1; 
    }  _flags;
    unsigned int  _partialTraversalAggregationCount;
}

@property (nonatomic) unsigned int aggregationCount;
@property (nonatomic) unsigned int aggregationWindowSeconds;
@property (nonatomic) bool hasAggregationCount;
@property (nonatomic) bool hasAggregationWindowSeconds;
@property (nonatomic) bool hasPartialTraversalAggregationCount;
@property (nonatomic) unsigned int partialTraversalAggregationCount;

+ (bool)isValid:(id)arg1;

- (unsigned int)aggregationCount;
- (unsigned int)aggregationWindowSeconds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAggregationCount;
- (bool)hasAggregationWindowSeconds;
- (bool)hasPartialTraversalAggregationCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)partialTraversalAggregationCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAggregationCount:(unsigned int)arg1;
- (void)setAggregationWindowSeconds:(unsigned int)arg1;
- (void)setHasAggregationCount:(bool)arg1;
- (void)setHasAggregationWindowSeconds:(bool)arg1;
- (void)setHasPartialTraversalAggregationCount:(bool)arg1;
- (void)setPartialTraversalAggregationCount:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
