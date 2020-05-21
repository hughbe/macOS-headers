//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface HMPBEncodeOption : PBCodable <NSCopying>
{
    BOOL _isSPI;
    BOOL _isXPC;
    struct {
        unsigned int isSPI:1;
        unsigned int isXPC:1;
    } _has;
}

@property(nonatomic) BOOL isSPI; // @synthesize isSPI=_isSPI;
@property(nonatomic) BOOL isXPC; // @synthesize isXPC=_isXPC;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsSPI;
@property(nonatomic) BOOL hasIsXPC;

@end

