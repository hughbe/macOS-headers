//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIncidentEntityFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _nextStopMuids;
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
- (void)setNextStopMuids:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)nextStopMuidAtIndex:(unsigned long long)arg1;
- (void)addNextStopMuid:(unsigned long long)arg1;
- (void)clearNextStopMuids;
@property(readonly, nonatomic) unsigned long long *nextStopMuids;
@property(readonly, nonatomic) unsigned long long nextStopMuidsCount;
- (void)dealloc;

@end

