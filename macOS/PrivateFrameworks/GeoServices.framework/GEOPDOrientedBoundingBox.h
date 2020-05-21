//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDOrientedPosition;

__attribute__((visibility("hidden")))
@interface GEOPDOrientedBoundingBox : PBCodable <NSCopying>
{
    double _depth;
    double _height;
    GEOPDOrientedPosition *_position;
    double _width;
    struct {
        unsigned int has_depth:1;
        unsigned int has_height:1;
        unsigned int has_width:1;
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
@property(nonatomic) BOOL hasDepth;
@property(nonatomic) double depth;
@property(nonatomic) BOOL hasHeight;
@property(nonatomic) double height;
@property(nonatomic) BOOL hasWidth;
@property(nonatomic) double width;
@property(retain, nonatomic) GEOPDOrientedPosition *position;
@property(readonly, nonatomic) BOOL hasPosition;

@end

