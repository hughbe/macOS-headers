//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBatchRevGeocodeResponse : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_batchPlaceResults;
    NSMutableArray *_clusters;
    double _timestamp;
    NSMutableArray *_versionDomains;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _statusCode;
    unsigned int _ttl;
    unsigned int _version;
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_statusCode:1;
        unsigned int has_ttl:1;
        unsigned int has_version:1;
        unsigned int read_batchPlaceResults:1;
        unsigned int read_clusters:1;
        unsigned int read_versionDomains:1;
        unsigned int wrote_batchPlaceResults:1;
        unsigned int wrote_clusters:1;
        unsigned int wrote_timestamp:1;
        unsigned int wrote_versionDomains:1;
        unsigned int wrote_statusCode:1;
        unsigned int wrote_ttl:1;
        unsigned int wrote_version:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)versionDomainType;
+ (Class)batchPlaceResultType;
+ (Class)clusterType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)clearSensitiveFields;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTimestamp;
@property(nonatomic) double timestamp;
@property(nonatomic) BOOL hasVersion;
@property(nonatomic) unsigned int version;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionDomainsCount;
- (void)_addNoFlagsVersionDomain:(id)arg1;
- (void)addVersionDomain:(id)arg1;
- (void)clearVersionDomains;
@property(retain, nonatomic) NSMutableArray *versionDomains;
- (void)_readVersionDomains;
@property(nonatomic) BOOL hasTtl;
@property(nonatomic) unsigned int ttl;
- (id)batchPlaceResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)batchPlaceResultsCount;
- (void)_addNoFlagsBatchPlaceResult:(id)arg1;
- (void)addBatchPlaceResult:(id)arg1;
- (void)clearBatchPlaceResults;
@property(retain, nonatomic) NSMutableArray *batchPlaceResults;
- (void)_readBatchPlaceResults;
- (id)clusterAtIndex:(unsigned long long)arg1;
- (unsigned long long)clustersCount;
- (void)_addNoFlagsCluster:(id)arg1;
- (void)addCluster:(id)arg1;
- (void)clearClusters;
@property(retain, nonatomic) NSMutableArray *clusters;
- (void)_readClusters;
- (int)StringAsStatusCode:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
@property(nonatomic) BOOL hasStatusCode;
@property(nonatomic) int statusCode;
- (id)initWithData:(id)arg1;
- (id)init;

@end

