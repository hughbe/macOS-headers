//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogFrameworkMetricItem : PBCodable <NSCopying>
{
    unsigned long long _metricItemSize;
    unsigned int _metricItemCount;
    unsigned int _metricItemIdHash;
    unsigned int _metricItemQueueTime;
    unsigned int _metricItemRetryCount;
    int _metricItemType;
    struct {
        unsigned int has_metricItemSize:1;
        unsigned int has_metricItemCount:1;
        unsigned int has_metricItemIdHash:1;
        unsigned int has_metricItemQueueTime:1;
        unsigned int has_metricItemRetryCount:1;
        unsigned int has_metricItemType:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(nonatomic) BOOL hasMetricItemIdHash;
@property(nonatomic) unsigned int metricItemIdHash;
@property(nonatomic) BOOL hasMetricItemQueueTime;
@property(nonatomic) unsigned int metricItemQueueTime;
@property(nonatomic) BOOL hasMetricItemSize;
@property(nonatomic) unsigned long long metricItemSize;
@property(nonatomic) BOOL hasMetricItemRetryCount;
@property(nonatomic) unsigned int metricItemRetryCount;
@property(nonatomic) BOOL hasMetricItemCount;
@property(nonatomic) unsigned int metricItemCount;
- (int)StringAsMetricItemType:(id)arg1;
- (id)metricItemTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasMetricItemType;
@property(nonatomic) int metricItemType;

@end

