//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOTileSetVersion : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_availableTiles;
    unsigned long long _availableTilesCount;
    unsigned long long _availableTilesSpace;
    struct GEOGenericTile *_genericTiles;
    unsigned long long _genericTilesCount;
    unsigned long long _genericTilesSpace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _identifier;
    unsigned int _supportedLanguagesVersion;
    unsigned int _timeToLiveSeconds;
    CDStruct_40288aee _flags;
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
@property(nonatomic) BOOL hasSupportedLanguagesVersion;
@property(nonatomic) unsigned int supportedLanguagesVersion;
- (void)setGenericTiles:(struct GEOGenericTile *)arg1 count:(unsigned long long)arg2;
- (struct GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsGenericTile:(struct GEOGenericTile)arg1;
- (void)addGenericTile:(struct GEOGenericTile)arg1;
- (void)clearGenericTiles;
@property(readonly, nonatomic) struct GEOGenericTile *genericTiles;
@property(readonly, nonatomic) unsigned long long genericTilesCount;
- (void)_readGenericTiles;
@property(nonatomic) BOOL hasTimeToLiveSeconds;
@property(nonatomic) unsigned int timeToLiveSeconds;
- (void)setAvailableTiles:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (struct GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsAvailableTiles:(struct GEOTileSetRegion)arg1;
- (void)addAvailableTiles:(struct GEOTileSetRegion)arg1;
- (void)clearAvailableTiles;
@property(readonly, nonatomic) struct GEOTileSetRegion *availableTiles;
@property(readonly, nonatomic) unsigned long long availableTilesCount;
- (void)_readAvailableTiles;
@property(nonatomic) unsigned int identifier;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)init;

@end

