//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <C2/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEvent : PBCodable <NSCopying>
{
    unsigned long long _timestampEnd;
    unsigned long long _timestampStart;
    NSMutableArray *_metrics;
    NSString *_name;
    int _type;
    struct {
        unsigned int timestampEnd:1;
        unsigned int timestampStart:1;
        unsigned int type:1;
    } _has;
}

+ (Class)metricType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) unsigned long long timestampEnd; // @synthesize timestampEnd=_timestampEnd;
@property(nonatomic) unsigned long long timestampStart; // @synthesize timestampStart=_timestampStart;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)metricAtIndex:(unsigned long long)arg1;
- (unsigned long long)metricsCount;
- (void)addMetric:(id)arg1;
- (void)clearMetrics;
@property(nonatomic) BOOL hasTimestampEnd;
@property(nonatomic) BOOL hasTimestampStart;
@property(readonly, nonatomic) BOOL hasName;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

