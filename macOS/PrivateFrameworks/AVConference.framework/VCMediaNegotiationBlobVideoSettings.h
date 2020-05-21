//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying>
{
    unsigned int _customVideoHeight;
    unsigned int _customVideoWidth;
    unsigned int _rtpSSRC;
    unsigned int _tilesPerFrame;
    NSMutableArray *_videoPayloadCollections;
    BOOL _allowRTCPFB;
    struct {
        unsigned int customVideoHeight:1;
        unsigned int customVideoWidth:1;
        unsigned int tilesPerFrame:1;
    } _has;
}

+ (Class)videoPayloadCollectionsType;
@property(retain, nonatomic) NSMutableArray *videoPayloadCollections; // @synthesize videoPayloadCollections=_videoPayloadCollections;
@property(nonatomic) BOOL allowRTCPFB; // @synthesize allowRTCPFB=_allowRTCPFB;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasTilesPerFrame;
@property(nonatomic) unsigned int tilesPerFrame; // @synthesize tilesPerFrame=_tilesPerFrame;
@property(nonatomic) BOOL hasCustomVideoHeight;
@property(nonatomic) unsigned int customVideoHeight; // @synthesize customVideoHeight=_customVideoHeight;
@property(nonatomic) BOOL hasCustomVideoWidth;
@property(nonatomic) unsigned int customVideoWidth; // @synthesize customVideoWidth=_customVideoWidth;
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoPayloadCollectionsCount;
- (void)addVideoPayloadCollections:(id)arg1;
- (void)clearVideoPayloadCollections;
- (void)dealloc;
- (void)printScreenWithLogFile:(void *)arg1;
- (void)printVideoWithLogFile:(void *)arg1;
- (id)parameterSetStringFromPayloadSettings:(id)arg1;
- (id)newFeatureStrings;
- (id)newVideoRuleCollectionsForScreen:(BOOL)arg1 isCellular16x9Capable:(BOOL)arg2 isLocalConfig:(BOOL)arg3;
- (void)checkAndInsertRuleWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotiationBitfield:(unsigned int *)arg6 negotiationBit:(unsigned int)arg7 rules:(id)arg8 isCellular16x9Capable:(BOOL)arg9;
- (BOOL)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(BOOL)arg3 isCellular16x9Capable:(BOOL)arg4;
- (id)getPayloadSettingsForPayload:(int)arg1;
- (id)initWithScreenSSRC:(unsigned int)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5 customVideoWidth:(unsigned int)arg6 customVideoHeight:(unsigned int)arg7 tilesPerFrame:(unsigned int)arg8;
- (id)initWithSSRC:(unsigned int)arg1 allowRTCPFB:(BOOL)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(BOOL)arg5;

@end

