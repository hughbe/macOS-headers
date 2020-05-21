//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEOTFTrafficSnapshot : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_compactSpeeds;
    NSString *_feedId;
    unsigned long long _feedPublishTime;
    long long _feedUpdateTime;
    NSMutableArray *_incidents;
    NSMutableArray *_regions;
    NSString *_snapshotId;
    NSMutableArray *_speeds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _trafficVersion;
    struct {
        unsigned int has_feedPublishTime:1;
        unsigned int has_feedUpdateTime:1;
        unsigned int has_trafficVersion:1;
        unsigned int read_compactSpeeds:1;
        unsigned int read_feedId:1;
        unsigned int read_incidents:1;
        unsigned int read_regions:1;
        unsigned int read_snapshotId:1;
        unsigned int read_speeds:1;
        unsigned int wrote_compactSpeeds:1;
        unsigned int wrote_feedId:1;
        unsigned int wrote_feedPublishTime:1;
        unsigned int wrote_feedUpdateTime:1;
        unsigned int wrote_incidents:1;
        unsigned int wrote_regions:1;
        unsigned int wrote_snapshotId:1;
        unsigned int wrote_speeds:1;
        unsigned int wrote_trafficVersion:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)compactSpeedsType;
+ (Class)speedsType;
+ (Class)incidentsType;
+ (Class)regionType;
- (void).cxx_destruct;
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
@property(retain, nonatomic) NSString *snapshotId;
@property(readonly, nonatomic) BOOL hasSnapshotId;
- (void)_readSnapshotId;
- (id)compactSpeedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)compactSpeedsCount;
- (void)_addNoFlagsCompactSpeeds:(id)arg1;
- (void)addCompactSpeeds:(id)arg1;
- (void)clearCompactSpeeds;
@property(retain, nonatomic) NSMutableArray *compactSpeeds;
- (void)_readCompactSpeeds;
@property(nonatomic) BOOL hasFeedPublishTime;
@property(nonatomic) unsigned long long feedPublishTime;
@property(nonatomic) BOOL hasTrafficVersion;
@property(nonatomic) unsigned int trafficVersion;
@property(retain, nonatomic) NSString *feedId;
@property(readonly, nonatomic) BOOL hasFeedId;
- (void)_readFeedId;
@property(nonatomic) BOOL hasFeedUpdateTime;
@property(nonatomic) long long feedUpdateTime;
- (id)speedsAtIndex:(unsigned long long)arg1;
- (unsigned long long)speedsCount;
- (void)_addNoFlagsSpeeds:(id)arg1;
- (void)addSpeeds:(id)arg1;
- (void)clearSpeeds;
@property(retain, nonatomic) NSMutableArray *speeds;
- (void)_readSpeeds;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (void)_addNoFlagsIncidents:(id)arg1;
- (void)addIncidents:(id)arg1;
- (void)clearIncidents;
@property(retain, nonatomic) NSMutableArray *incidents;
- (void)_readIncidents;
- (id)regionAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionsCount;
- (void)_addNoFlagsRegion:(id)arg1;
- (void)addRegion:(id)arg1;
- (void)clearRegions;
@property(retain, nonatomic) NSMutableArray *regions;
- (void)_readRegions;
- (id)initWithData:(id)arg1;
- (id)init;

@end

