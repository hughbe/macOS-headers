//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>

@class VCPProtoPoint;

@interface VCPProtoLine : PBCodable <NSCopying>
{
    VCPProtoPoint *_end;
    VCPProtoPoint *_start;
}

+ (id)lineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) VCPProtoPoint *end; // @synthesize end=_end;
@property(retain, nonatomic) VCPProtoPoint *start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (struct CGPoint)endPointValue;
- (struct CGPoint)startPointValue;

@end

