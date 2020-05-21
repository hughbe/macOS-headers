//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

#import <AVConference/VCAudioIODelegate-Protocol.h>
#import <AVConference/VCAudioIOSink-Protocol.h>
#import <AVConference/VCAudioPowerSpectrumSourceDelegate-Protocol.h>
#import <AVConference/VCConnectionChangedHandler-Protocol.h>
#import <AVConference/VCMediaStreamDelegate-Protocol.h>
#import <AVConference/VCRedundancyControllerDelegate-Protocol.h>
#import <AVConference/VCSecurityEventHandler-Protocol.h>

@class AVCBasebandCongestionDetector, AVCStatisticsCollector, NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString, VCAudioIO, VCAudioRuleCollection, VCCallInfoBlob, VCMediaNegotiator, VCRedundancyControllerAudio, VCRedundancyControllerVideo;
@protocol OS_dispatch_queue, VCSessionParticipantDelegate, VCSessionParticipantStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCSessionParticipant : VCObject <VCMediaStreamDelegate, VCSecurityEventHandler, VCAudioIOSink, VCAudioIODelegate, VCConnectionChangedHandler, VCRedundancyControllerDelegate, VCAudioPowerSpectrumSourceDelegate>
{
    unsigned int _state;
    union tagNTP _creationTime;
    NSObject<OS_dispatch_queue> *_participantQueue;
    int _processId;
    id _delegate;
    id _streamDelegate;
    long long _participantVideoToken;
    unsigned long long _spatialAudioSourceID;
    NSString *_uuid;
    NSString *_sessionUUID;
    NSString *_idsDestination;
    unsigned long long _idsParticipantID;
    NSData *_opaqueData;
    VCCallInfoBlob *_callInfoBlob;
    NSData *_mediaBlobCompressed;
    NSDictionary *_participantInfo;
    unsigned int _transportSessionID;
    VCAudioRuleCollection *_supportedAudioRules;
    int _deviceRole;
    NSMutableSet *_startingAudioStreams;
    NSMutableSet *_stoppingAudioStreams;
    NSMutableSet *_runningAudioStreams;
    NSMutableSet *_pausingAudioStreams;
    NSMutableSet *_resumingAudioStreams;
    NSMutableSet *_pausedAudioStreams;
    NSMutableSet *_startingVideoStreams;
    NSMutableSet *_stoppingVideoStreams;
    NSMutableSet *_runningVideoStreams;
    NSMutableSet *_pausingVideoStreams;
    NSMutableSet *_resumingVideoStreams;
    NSMutableSet *_pausedVideoStreams;
    NSMutableArray *_audioStreams;
    NSMutableArray *_videoStreams;
    NSMutableDictionary *_streamMap;
    AVCStatisticsCollector *_statisticsCollector;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    unsigned int _cellularUniqueTag;
    float _volume;
    float _audioPosition;
    BOOL _isMuted;
    BOOL _audioEnabled;
    BOOL _videoEnabled;
    BOOL _audioPaused;
    BOOL _videoPaused;
    BOOL _audioPausedToStart;
    BOOL _videoPausedToStart;
    BOOL _audioStateChangeInProgress;
    BOOL _videoStateChangeInProgress;
    BOOL _audioIOStateChangeInProgress;
    VCAudioIO *_audioIO;
    VCMediaNegotiator *_mediaNegotiator;
    BOOL _localOnWiFi;
    VCRedundancyControllerAudio *_audioRedundancyController;
    VCRedundancyControllerVideo *_videoRedundancyController;
    id _reportingAgentWeak;
}

@property(readonly, nonatomic) unsigned long long spatialAudioSourceID; // @synthesize spatialAudioSourceID=_spatialAudioSourceID;
@property(nonatomic, getter=isLocalOnWiFi) BOOL localOnWiFi; // @synthesize localOnWiFi=_localOnWiFi;
@property(readonly, nonatomic) VCMediaNegotiator *mediaNegotiator; // @synthesize mediaNegotiator=_mediaNegotiator;
@property(readonly, nonatomic) unsigned long long idsParticipantID; // @synthesize idsParticipantID=_idsParticipantID;
@property(readonly, nonatomic) VCAudioRuleCollection *supportedAudioRules; // @synthesize supportedAudioRules=_supportedAudioRules;
@property(nonatomic) unsigned int cellularUniqueTag; // @synthesize cellularUniqueTag=_cellularUniqueTag;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(readonly, nonatomic) float audioPosition; // @synthesize audioPosition=_audioPosition;
@property(readonly, nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic, getter=isVideoPaused) BOOL videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic, getter=isAudioPaused) BOOL audioPaused; // @synthesize audioPaused=_audioPaused;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, nonatomic) long long participantVideoToken; // @synthesize participantVideoToken=_participantVideoToken;
@property(readonly, nonatomic) union tagNTP creationTime; // @synthesize creationTime=_creationTime;
@property(readonly, nonatomic) NSData *opaqueData; // @synthesize opaqueData=_opaqueData;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;
- (void)sendAudioPowerSpectrumSourceRegistration:(BOOL)arg1;
- (void)audioPowerSpectrumSinkDidUnregister;
- (void)audioPowerSpectrumSinkDidRegister;
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;
- (void)spatialAudioSourceIDChanged:(unsigned long long)arg1;
- (void)didResumeAudioIO:(id)arg1;
- (void)didSuspendAudioIO:(id)arg1;
- (void)resetDecryptionTimeout;
- (BOOL)handleEncryptionInfoChange:(id)arg1;
- (void)vcMediaStream:(id)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStreamDidStop:(id)arg1;
- (void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3;
- (void)collectAudioChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)collectVideoChannelMetrics:(CDStruct_3ab08b48 *)arg1;
- (void)createRedundancyControllers;
- (BOOL)setAudioPosition:(float)arg1;
- (BOOL)setVolume:(float)arg1;
@property(nonatomic, getter=isMuted) BOOL muted; // @synthesize muted=_isMuted;
@property(readonly, nonatomic) NSArray *allParticipantStreamInfo;
@property(readonly, nonatomic) NSArray *audioStreams;
- (void)updateAudioSpectrumState;
- (void)updateVideoPaused:(BOOL)arg1;
- (void)applyVideoEnabledSetting:(BOOL)arg1;
- (void)stop;
- (void)start;
@property(nonatomic) id <VCSessionParticipantStreamDelegate> streamDelegate;
@property(readonly, nonatomic) id <VCSessionParticipantDelegate> delegate;
- (char *)participantStateToString:(unsigned int)arg1;
- (BOOL)setState:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithIDSDestination:(id)arg1 delegate:(id)arg2 processId:(int)arg3 sessionUUID:(id)arg4;
- (BOOL)configureWithDeviceRole:(int)arg1;
- (BOOL)updateConfigurationWithDeviceRole:(int)arg1;
- (BOOL)configureAudioIOWithDeviceRole:(int)arg1;
- (void)completeStreamSetup:(id)arg1;
- (void)setupNetworkAddressesForMediaConfig:(id)arg1;
- (void)stopAudioDump;
- (void)startAudioDump;
- (id)getAudioDumpName;
- (void)processPausedStream:(id)arg1 didPause:(BOOL)arg2;
- (void)processResumedStream:(id)arg1 didResume:(BOOL)arg2;
- (void)onDidResumeAudioStream:(id)arg1;
- (void)processStoppedStream:(id)arg1;
- (void)processStartedStream:(id)arg1 didStart:(BOOL)arg2;
- (void)pauseVideoStreams;
- (void)pauseAudioStreams;
- (void)onPauseAudioStreams;
- (void)resumeVideoStreams;
- (void)resumeAudioStreams;
- (void)stopVideoStreams;
- (void)stopAudioStreams;
- (void)stopAudioStreamsCompletion;
- (void)stopAudioIOCompletion;
- (void)startVideoStreams;
- (void)startAudioStreams;
- (void)startAudioIO;
- (void)onStartAudioIO;
- (BOOL)isVideoStream:(id)arg1;
- (BOOL)isAudioStream:(id)arg1;
- (BOOL)shouldStartAudioIO;
- (BOOL)isAnyStreamRunningOrPaused;
- (BOOL)allPausingStreamsPaused;
- (BOOL)allResumingStreamsResumed;
- (BOOL)allStartingStreamsStarted;
- (BOOL)allStoppingStreamsStopped;
- (void)tearDown;
- (id)generateEncryptionKey;
- (id)streamsToString;
@property(readonly, copy) NSString *description;
- (void)dispatchedSetVideoPaused:(BOOL)arg1;
- (void)dispatchedSetAudioPaused:(BOOL)arg1;
- (void)dispatchedSetVideoEnabled:(BOOL)arg1;
- (void)dispatchedSetAudioEnabled:(BOOL)arg1;
- (void)dispatchedStream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
- (void)dispatchedStream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
- (void)dispatchedStreamDidStop:(id)arg1;
- (void)dispatchedStream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
- (void)dispatchedStop;
- (void)dispatchedStart;
- (void)callStreamDelegateWithBlock:(CDUnknownBlockType)arg1;
- (void)callDelegateWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

