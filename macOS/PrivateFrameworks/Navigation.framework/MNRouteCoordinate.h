//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@interface MNRouteCoordinate : PBCodable <NSCopying>
{
    unsigned int _index;
    float _offset;
    struct {
        unsigned int index:1;
        unsigned int offset:1;
    } _has;
}

@property(nonatomic) float offset; // @synthesize offset=_offset;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasOffset;
@property(nonatomic) BOOL hasIndex;

@end

