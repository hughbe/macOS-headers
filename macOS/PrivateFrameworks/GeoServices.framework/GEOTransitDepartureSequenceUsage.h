//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_direction;
    NSString *_headsign;
    unsigned long long _lineId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_lineId:1;
        unsigned int read_direction:1;
        unsigned int read_headsign:1;
        unsigned int wrote_direction:1;
        unsigned int wrote_headsign:1;
        unsigned int wrote_lineId:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
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
@property(retain, nonatomic) NSString *headsign;
@property(readonly, nonatomic) BOOL hasHeadsign;
- (void)_readHeadsign;
@property(retain, nonatomic) NSString *direction;
@property(readonly, nonatomic) BOOL hasDirection;
- (void)_readDirection;
@property(nonatomic) BOOL hasLineId;
@property(nonatomic) unsigned long long lineId;
- (id)initWithData:(id)arg1;
- (id)init;

@end

