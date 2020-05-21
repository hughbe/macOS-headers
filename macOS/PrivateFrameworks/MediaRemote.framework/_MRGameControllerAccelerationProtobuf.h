//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData;

@interface _MRGameControllerAccelerationProtobuf : PBCodable <NSCopying>
{
    NSData *_data;
    float _w;
    float _x;
    float _y;
    float _z;
    struct {
        unsigned int w:1;
        unsigned int x:1;
        unsigned int y:1;
        unsigned int z:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) float w; // @synthesize w=_w;
@property(nonatomic) float z; // @synthesize z=_z;
@property(nonatomic) float y; // @synthesize y=_y;
@property(nonatomic) float x; // @synthesize x=_x;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasW;
@property(nonatomic) BOOL hasZ;
@property(nonatomic) BOOL hasY;
@property(nonatomic) BOOL hasX;
@property(readonly, nonatomic) BOOL hasData;

@end

