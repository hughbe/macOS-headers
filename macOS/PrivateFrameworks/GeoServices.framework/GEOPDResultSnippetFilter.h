//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultSnippetFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _supportedChildActions;
    int _maxChildItems;
    int _maxChildPlaces;
    BOOL _supportChildItems;
    struct {
        unsigned int has_maxChildItems:1;
        unsigned int has_maxChildPlaces:1;
        unsigned int has_supportChildItems:1;
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
- (int)StringAsSupportedChildActions:(id)arg1;
- (id)supportedChildActionsAsString:(int)arg1;
- (void)setSupportedChildActions:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedChildActionAtIndex:(unsigned long long)arg1;
- (void)addSupportedChildAction:(int)arg1;
- (void)clearSupportedChildActions;
@property(readonly, nonatomic) int *supportedChildActions;
@property(readonly, nonatomic) unsigned long long supportedChildActionsCount;
@property(nonatomic) BOOL hasMaxChildItems;
@property(nonatomic) int maxChildItems;
@property(nonatomic) BOOL hasSupportChildItems;
@property(nonatomic) BOOL supportChildItems;
@property(nonatomic) BOOL hasMaxChildPlaces;
@property(nonatomic) int maxChildPlaces;
- (void)dealloc;

@end

