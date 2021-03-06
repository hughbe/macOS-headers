//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueLabel, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueBuilding : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _directoryGroupingIds;
    CDStruct_62a50c50 _levelIds;
    unsigned long long _buildingId;
    GEOPDVenueLabel *_label;
    unsigned long long _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_buildingId:1;
        unsigned int has_muid:1;
        unsigned int read_unknownFields:1;
        unsigned int read_directoryGroupingIds:1;
        unsigned int read_levelIds:1;
        unsigned int read_label:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_directoryGroupingIds:1;
        unsigned int wrote_levelIds:1;
        unsigned int wrote_buildingId:1;
        unsigned int wrote_label:1;
        unsigned int wrote_muid:1;
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
- (void)setDirectoryGroupingIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)directoryGroupingIdAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsDirectoryGroupingId:(unsigned long long)arg1;
- (void)addDirectoryGroupingId:(unsigned long long)arg1;
- (void)clearDirectoryGroupingIds;
@property(readonly, nonatomic) unsigned long long *directoryGroupingIds;
@property(readonly, nonatomic) unsigned long long directoryGroupingIdsCount;
- (void)_readDirectoryGroupingIds;
@property(nonatomic) BOOL hasMuid;
@property(nonatomic) unsigned long long muid;
@property(retain, nonatomic) GEOPDVenueLabel *label;
@property(readonly, nonatomic) BOOL hasLabel;
- (void)_readLabel;
- (void)setLevelIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)levelIdAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsLevelId:(unsigned long long)arg1;
- (void)addLevelId:(unsigned long long)arg1;
- (void)clearLevelIds;
@property(readonly, nonatomic) unsigned long long *levelIds;
@property(readonly, nonatomic) unsigned long long levelIdsCount;
- (void)_readLevelIds;
@property(nonatomic) BOOL hasBuildingId;
@property(nonatomic) unsigned long long buildingId;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

