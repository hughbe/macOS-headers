//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRColorProtobuf : PBCodable <NSCopying>
{
    float _alpha;
    float _blue;
    float _green;
    float _red;
    struct {
        unsigned int alpha:1;
        unsigned int blue:1;
        unsigned int green:1;
        unsigned int red:1;
    } _has;
}

@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) float blue; // @synthesize blue=_blue;
@property(nonatomic) float green; // @synthesize green=_green;
@property(nonatomic) float red; // @synthesize red=_red;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAlpha;
@property(nonatomic) BOOL hasBlue;
@property(nonatomic) BOOL hasGreen;
@property(nonatomic) BOOL hasRed;

@end

