//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOSubactionMetaData : PBCodable <NSCopying>
{
    NSString *_displayedString;
    int _selectedSubactionIndex;
    int _subactionType;
    struct {
        unsigned int has_selectedSubactionIndex:1;
        unsigned int has_subactionType:1;
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
@property(retain, nonatomic) NSString *displayedString;
@property(readonly, nonatomic) BOOL hasDisplayedString;
- (int)StringAsSubactionType:(id)arg1;
- (id)subactionTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSubactionType;
@property(nonatomic) int subactionType;
@property(nonatomic) BOOL hasSelectedSubactionIndex;
@property(nonatomic) int selectedSubactionIndex;

@end

