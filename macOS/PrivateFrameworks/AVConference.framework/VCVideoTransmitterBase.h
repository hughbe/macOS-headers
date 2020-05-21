//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCConnectionChangedHandler-Protocol.h>

@class NSString, VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCVideoTransmitterBase : NSObject <VCConnectionChangedHandler>
{
    void *_controlInfoGenerator;
    unsigned int _captureWidth;
    unsigned int _captureHeight;
    unsigned int _encodingWidth;
    unsigned int _encodingHeight;
    unsigned int _targetFramerate;
    unsigned int _targetBitrate;
    unsigned int _targetBitrateChangeCounter;
    unsigned int _txMaxBitrate;
    unsigned int _txMinBitrate;
    unsigned int _temporaryMaximumBitrate;
    VCVideoRule *_videoRule;
    CDStruct_1b6d18a9 _latestSampleBufferTimestamp;
    double _lastKeyFrameSentTime;
    unsigned int _timestamp;
    unsigned int _lastSentAudioSampleTime;
    double _lastSentAudioHostTime;
    BOOL _isServerBasedBandwidthProbingEnabled;
}

@property(nonatomic) unsigned int targetBitrateChangeCounter; // @synthesize targetBitrateChangeCounter=_targetBitrateChangeCounter;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(nonatomic) BOOL isServerBasedBandwidthProbingEnabled; // @synthesize isServerBasedBandwidthProbingEnabled=_isServerBasedBandwidthProbingEnabled;
@property double lastSentAudioHostTime; // @synthesize lastSentAudioHostTime=_lastSentAudioHostTime;
@property unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime;
@property double lastKeyFrameSentTime; // @synthesize lastKeyFrameSentTime=_lastKeyFrameSentTime;
@property unsigned int lastRTPTimestamp; // @synthesize lastRTPTimestamp=_timestamp;
@property CDStruct_1b6d18a9 lastFrameTime; // @synthesize lastFrameTime=_latestSampleBufferTimestamp;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)setFECRatio:(double)arg1;
- (void)collectChannelMetrics:(CDStruct_3ab08b48 *)arg1 interval:(float)arg2;
- (void)setStreamIDs:(unsigned short *)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short *)arg3 numOfRepairedStreamIDs:(unsigned char)arg4;
- (void)setKeyFrameOnlyStreamID:(unsigned short)arg1;
- (unsigned int)setTemporaryMaximumBitrate:(unsigned int)arg1;
- (void)generateKeyFrame;
- (void)stopVideo;
- (void)startVideo;
- (BOOL)enqueueVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

