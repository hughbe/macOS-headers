//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADAdVector : PBCodable <NSCopying>
{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _vectors;
    NSString *_version;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setVectors:(double *)arg1 count:(unsigned long long)arg2;
- (double)vectorAtIndex:(unsigned long long)arg1;
- (void)addVector:(double)arg1;
- (void)clearVectors;
@property(readonly, nonatomic) double *vectors;
@property(readonly, nonatomic) unsigned long long vectorsCount;
@property(readonly, nonatomic) BOOL hasVersion;
- (void)dealloc;

@end

