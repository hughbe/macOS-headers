//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCSessionParticipant.h>

#import <AVConference/VCMomentTransportDelegate-Protocol.h>
#import <AVConference/VCSessionUplinkVideoStreamControllerDelegate-Protocol.h>
#import <AVConference/VCVideoCaptureClient-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, VCAudioPowerSpectrumSource, VCMoments, VCSessionUplinkBandwidthAllocator, VCSessionUplinkVideoStreamController, VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantLocal : VCSessionParticipant <VCVideoCaptureClient, VCSessionUplinkVideoStreamControllerDelegate, VCMomentTransportDelegate>
{
    VCSessionUplinkBandwidthAllocator *_uplinkBandwidthAllocator;
    NSMutableDictionary *_activeUplinkAudioStreams;
    NSMutableDictionary *_pendingActiveUplinkVideoStreams;
    BOOL _encryptionInfoReceived;
    int _shouldUpdateActiveVideoStream;
    unsigned int _currentUplinkTargetBitrate;
    struct opaqueCMSimpleQueue *_audioStreamUpdateEventQueue;
    struct opaqueCMSimpleQueue *_audioRedundancyChangeEventQueue;
    struct opaqueCMSimpleQueue *_videoRedundancyChangeEventQueue;
    unsigned int _lastSentAudioSampleTime;
    double _lastSentAudioHostTime;
    struct _opaque_pthread_rwlock_t _audioTimestampRWLock;
    unsigned char _audioPriority;
    unsigned short _connectionStatsStreamID;
    VCSessionUplinkVideoStreamController *_uplinkVideoStreamController;
    struct tagVCMediaQueue *_mediaQueue;
    unsigned int _uplinkBitrateCapWifi;
    unsigned int _uplinkBitrateCapCell;
    struct tagVCMemoryPool *_audioStreamUpdatePool;
    struct tagVCMemoryPool *_redundancyPool;
    struct tagVCMemoryPool *_videoRedundancyPool;
    _Atomic unsigned char _videoPriority;
    BOOL _shouldResize;
    BOOL _enableRedundancy;
    BOOL _enableVADFiltering;
    NSMutableArray *_peerSubscribedStreams;
    NSMutableSet *_localPublishedStreams;
    float _averageSilenceAudioPower;
    unsigned char _audioPriorityRampUp;
    unsigned char _audioPriorityDecaySlow;
    unsigned char _audioPriorityDecayFast;
    float _audioVoiceDetectionSensitivity;
    float _audioSilencePowerAverageMultiplier;
    unsigned char _forcedAudioPriorityValue;
    double _forcedAudioPriorityLastUpdateTime;
    BOOL _forcedAudioPriorityEnabled;
    VCVideoRule *_videoRule;
    BOOL _speechDetected;
    struct opaqueVCVoiceDetector *_voiceDetector;
    double _fecRatio;
    NSMutableSet *_audioPayloadTypes;
    NSMutableSet *_videoPayloadTypes;
    unsigned int _currentUplinkTotalBitrateVideo;
    unsigned int _currentUplinkTotalBitrateAudio;
    VCMoments *_moments;
    VCAudioPowerSpectrumSource *_powerSpectrumSource;
}

@property(readonly, nonatomic) VCMoments *moments; // @synthesize moments=_moments;
@property(readonly, nonatomic) unsigned int currentUplinkTotalBitrateAudio; // @synthesize currentUplinkTotalBitrateAudio=_currentUplinkTotalBitrateAudio;
@property(readonly, nonatomic) unsigned int currentUplinkTotalBitrateVideo; // @synthesize currentUplinkTotalBitrateVideo=_currentUplinkTotalBitrateVideo;
@property(readonly, nonatomic) NSSet *videoPayloadTypes; // @synthesize videoPayloadTypes=_videoPayloadTypes;
@property(readonly, nonatomic) NSSet *audioPayloadTypes; // @synthesize audioPayloadTypes=_audioPayloadTypes;
@property(copy, nonatomic) NSArray *peerSubscribedStreams; // @synthesize peerSubscribedStreams=_peerSubscribedStreams;
@property(nonatomic) BOOL enableVADFiltering; // @synthesize enableVADFiltering=_enableVADFiltering;
@property(nonatomic) unsigned int uplinkBitrateCapCell; // @synthesize uplinkBitrateCapCell=_uplinkBitrateCapCell;
@property(nonatomic) unsigned int uplinkBitrateCapWifi; // @synthesize uplinkBitrateCapWifi=_uplinkBitrateCapWifi;
@property(nonatomic) struct tagVCMediaQueue *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(readonly, nonatomic) unsigned short connectionStatsStreamID; // @synthesize connectionStatsStreamID=_connectionStatsStreamID;
@property(nonatomic) BOOL encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
- (void)moments:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)controller:(id)arg1 didChangeActiveVideoStreams:(id)arg2;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)sourceFrameRateDidChange:(unsigned int)arg1;
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;
- (void)thermalLevelDidChange:(int)arg1;
- (id)clientCaptureRule;
- (void)avConferencePreviewError:(id)arg1;
- (BOOL)onCaptureFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4;
- (void)generateKeyFrameForStreamsWithNewCompoundStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)updateStreamIDsWithActiveVideoStreams:(id)arg1;
- (void)updateActiveAudioStreams:(id)arg1 allStreamIds:(id)arg2;
- (void)updateActiveAudioStreamWithTargetBitrate:(unsigned int)arg1;
- (void)updateActiveVideoStreamWithTargetBitrate:(unsigned int)arg1;
- (void)dispatchedUpdateUplinkMediaStreamsWithTargetBitrate:(unsigned int)arg1;
- (void)updateUplinkTargetBitrate:(unsigned int)arg1;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)flushVideoRedundancyEventQueue;
- (void)processVideoEventQueue;
- (void)enableRedundancy:(BOOL)arg1;
- (BOOL)checkSubscribedStreamsConsistency:(id)arg1;
- (void)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1;
- (void)generateKeyFrameWithStreamID:(unsigned short)arg1;
- (void)setupEncodingModeWithVideoStreamConfig:(id)arg1;
- (BOOL)setupVideoStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (void)setupVideoStreamConfig:(id)arg1 initialConfiguration:(id)arg2;
- (id)getAudioDumpName;
- (void)updateAudioPriorityWithSampleBuffer:(struct opaqueVCAudioBufferList *)arg1;
- (void)stopVoiceActivityDetection;
- (void)startVoiceActivityDetection;
- (BOOL)isHighPriorityAudioWithPower:(float)arg1 voiceActive:(BOOL)arg2;
- (void)flushAudioRedundancyEventQueue;
- (void)flushAudioEventQueue;
- (void)processEventQueues;
- (void)processAudioRedundancyChangeEvent;
- (void)processAudioStreamUpdateEvent;
- (void)setMuted:(BOOL)arg1;
- (void)createOpaqueData;
- (BOOL)createParticipantInfo;
- (void)addCallInfoBlobToParticipantInfo:(id)arg1;
- (BOOL)setupAudioStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2;
- (id)setupStreamRTP:(id)arg1;
- (id)audioRuleCollectionWithAudioStreamConfig:(id)arg1;
- (unsigned short)generateStreamID;
- (BOOL)containsStreamWithIDSStreamID:(unsigned short)arg1;
- (unsigned int)generateSSRC;
- (BOOL)containsStreamWithSSRC:(unsigned int)arg1;
- (void)updateSupportedAudioRules:(id)arg1;
- (id)supportedAudioRules;
- (void)updatePayloadTypesWithConfigProvider:(id)arg1;
- (BOOL)initializeMediaNegotiator;
- (id)newMediaNegotiatorAudioConfiguration;
- (id)multiwayVideoStreamConfigs;
- (id)multiwayVideoStreamNegotiatorConfigForStreamConfig:(id)arg1 isSubstream:(BOOL)arg2;
- (id)multiwayAudioStreamNegotiatorConfigForStreamConfig:(id)arg1;
- (void)initializeUplinkVideoStreamController;
- (BOOL)setupVideoStreamWithConfiguration:(id)arg1;
- (BOOL)setupVideoStreamsWithConfigProvider:(id)arg1;
- (BOOL)setupVideoStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2;
- (BOOL)setupAudioStreamWithConfiguration:(id)arg1;
- (BOOL)setupAudioStreamsWithConfigProvider:(id)arg1;
- (BOOL)setupAudioStreamsWithConfigProvider:(id)arg1 mediaNegotiatorConfig:(id)arg2;
- (BOOL)applyCachedMediaStreams:(id)arg1 toMultiwayConfig:(id)arg2;
- (BOOL)configureAudioIOWithDeviceRole:(int)arg1;
- (void)updateMomentsCapabillities:(unsigned int)arg1 imageType:(int)arg2 videoCodec:(int)arg3;
- (void)updateMediaSettingsWithConfig:(id)arg1;
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;
- (void)collectAudioChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectVideoChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)stopAudioIOCompletion;
- (BOOL)setState:(unsigned int)arg1;
- (void)deregisterForVideoCapture;
- (void)registerForVideoCapture;
- (void)updateActiveVoiceOnly;
- (void)updateVideoPaused:(BOOL)arg1;
- (void)applyVideoEnabledSetting:(BOOL)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithIDSDestination:(id)arg1 negotiationData:(id)arg2 delegate:(id)arg3 processId:(int)arg4 sessionUUID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

