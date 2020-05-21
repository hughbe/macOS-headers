//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VideoProcessing/NSCopying-Protocol.h>
#import <VideoProcessing/VCPProtoResultLegacyConversionProtocol-Protocol.h>

@class VCPProtoLine, VCPProtoPoint;

@interface VCPProtoImageCompositionResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying>
{
    float _confidence;
    VCPProtoLine *_dominantLine;
    VCPProtoPoint *_vanishingPoint;
}

+ (id)resultFromLegacyDictionary:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) VCPProtoLine *dominantLine; // @synthesize dominantLine=_dominantLine;
@property(retain, nonatomic) VCPProtoPoint *vanishingPoint; // @synthesize vanishingPoint=_vanishingPoint;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)exportToLegacyDictionary;

@end

