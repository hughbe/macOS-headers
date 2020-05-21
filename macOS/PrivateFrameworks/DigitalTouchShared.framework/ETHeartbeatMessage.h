//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DigitalTouchShared/ETMessage.h>

@class SKEmitterNode, SKNode, SKShader, SKSpriteNode, SKTexture, SKUniform;

@interface ETHeartbeatMessage : ETMessage
{
    SKNode *_heartNode;
    SKSpriteNode *_heartLines;
    SKSpriteNode *_heart;
    SKEmitterNode *_heartWisp;
    SKShader *_linesShader;
    SKShader *_heartShader;
    SKUniform *_speedUniform;
    SKUniform *_warpedTexAtlasUniform;
    SKUniform *_burTexUniform;
    SKUniform *_noiseTexUniform;
    SKUniform *_scaleUniform;
    SKUniform *_shaderTimeUniform;
    SKNode *_heartScale;
    float _hapticLoopPeriod;
    SKTexture *_heartbreakAtlas;
    BOOL _broken;
    float _beatsPerMinute;
    int _duration;
    float _scale;
    double _rotation;
    double _heartbreakTime;
    struct CGPoint _normalizedCenter;
}

+ (unsigned short)messageType;
- (void).cxx_destruct;
@property(readonly, nonatomic) double heartbreakTime; // @synthesize heartbreakTime=_heartbreakTime;
@property(readonly, nonatomic, getter=isBroken) BOOL broken; // @synthesize broken=_broken;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGPoint normalizedCenter; // @synthesize normalizedCenter=_normalizedCenter;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) float beatsPerMinute; // @synthesize beatsPerMinute=_beatsPerMinute;
- (double)messageDuration;
- (void)_startAudioPlayback;
- (void)_stopAudioPlayback;
- (void)setMute:(BOOL)arg1;
- (id)description;
- (id)messageTypeAsString;
- (void)breakHeart;
- (void)stopPlaying;
- (void)startHeartbeat:(id)arg1 fastStart:(BOOL)arg2;
- (void)startHeartbeat:(id)arg1;
- (void)playBeatWithDuration:(double)arg1;
- (void)moveHeartNodeByX:(double)arg1 y:(double)arg2 duration:(double)arg3;
- (void)_displayInScene:(id)arg1 useDuration:(BOOL)arg2 fastStart:(BOOL)arg3;
- (void)_displayInScene:(id)arg1 useDuration:(BOOL)arg2;
- (void)displayInScene:(id)arg1;
- (id)archiveData;
- (id)initWithArchiveData:(id)arg1;

@end

