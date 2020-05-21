//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioAlertProviding-Protocol.h>
#import <CoreSpeech/CSAudioMeterProviding-Protocol.h>
#import <CoreSpeech/CSAudioMetricProviding-Protocol.h>
#import <CoreSpeech/CSAudioSessionInfoProviding-Protocol.h>
#import <CoreSpeech/CSAudioSessionProviding-Protocol.h>
#import <CoreSpeech/CSAudioStreamProviding-Protocol.h>
#import <CoreSpeech/CSAudioTimeConversionProviding-Protocol.h>
#import <CoreSpeech/CSBargeInModeProviding-Protocol.h>
#import <CoreSpeech/CSFallbackAudioSessionReleaseProviding-Protocol.h>
#import <CoreSpeech/CSSmartSiriVolumeProviding-Protocol.h>
#import <CoreSpeech/CSTriggerInfoProviding-Protocol.h>

@class CSAudioStream, NSHashTable, NSMutableSet, NSString;
@protocol CSAudioAlertProvidingDelegate, CSAudioSessionProvidingDelegate, CSAudioStreamProvidingDelegate, CSXPCClientDelegate, OS_xpc_object;

@interface CSXPCClient : NSObject <CSAudioSessionProviding, CSFallbackAudioSessionReleaseProviding, CSAudioStreamProviding, CSAudioAlertProviding, CSAudioSessionInfoProviding, CSAudioMeterProviding, CSAudioMetricProviding, CSSmartSiriVolumeProviding, CSAudioTimeConversionProviding, CSTriggerInfoProviding, CSBargeInModeProviding>
{
    id <CSAudioSessionProvidingDelegate> _audioSessionProvidingDelegate;
    id <CSAudioStreamProvidingDelegate> _audioStreamProvidingDelegate;
    id <CSAudioAlertProvidingDelegate> _audioAlertProvidingDelegate;
    id <CSXPCClientDelegate> _delegate;
    NSString *_UUID;
    NSObject<OS_xpc_object> *_xpcConnection;
    CSAudioStream *_audioStream;
    NSMutableSet *_activationAssertions;
    NSHashTable *_audioSessionInfoObservers;
    unsigned long long _xpcClientType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long xpcClientType; // @synthesize xpcClientType=_xpcClientType;
@property(retain, nonatomic) NSHashTable *audioSessionInfoObservers; // @synthesize audioSessionInfoObservers=_audioSessionInfoObservers;
@property(retain, nonatomic) NSMutableSet *activationAssertions; // @synthesize activationAssertions=_activationAssertions;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak id <CSXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CSAudioAlertProvidingDelegate> audioAlertProvidingDelegate; // @synthesize audioAlertProvidingDelegate=_audioAlertProvidingDelegate;
@property(nonatomic) __weak id <CSAudioStreamProvidingDelegate> audioStreamProvidingDelegate; // @synthesize audioStreamProvidingDelegate=_audioStreamProvidingDelegate;
@property(nonatomic) __weak id <CSAudioSessionProvidingDelegate> audioSessionProvidingDelegate; // @synthesize audioSessionProvidingDelegate=_audioSessionProvidingDelegate;
- (void)_handleStreamProvidingDelegateTwoShotDetected:(id)arg1;
- (void)_handleStreamProvidingDelegateHardwareConfigChange:(id)arg1;
- (void)_handleStreamProvidingDelegateChunkForTVAvailable:(id)arg1;
- (void)_handleStreamProvidingDelegateChunkAvailable:(id)arg1;
- (void)_handleStreamProvidingDelegateDidStopUnexpectly:(id)arg1;
- (void)_handleStreamProvidingDelegateMessageBody:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereResetNotification:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateMediaServicesWereLostNotification:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateRouteChangeNotification:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateInterruptionNotification:(id)arg1;
- (void)_handleSessionInfoProvidingDelegateMessageBody:(id)arg1;
- (void)_handleSessionProvidingDelegateDidChangeContext:(id)arg1;
- (void)_handleSessionProvidingDelegateStreamHandleIdInvalidation:(id)arg1;
- (void)_handleSessionProvidingDelegateDidSetAudioSession:(id)arg1;
- (void)_handleSessionProvidingDelegateWillSetAudioSession:(id)arg1;
- (void)_handleSessionProvidingDelegateEndInterruption:(id)arg1;
- (void)_handleSessionProvidingDelegateBeginInterruptionWithContext:(id)arg1;
- (void)_handleSessionProvidingDelegateBeginInterruption:(id)arg1;
- (void)_handleSessionProvidingDelegateMessageBody:(id)arg1;
- (void)_handleAlertProvidingDelegateDidFinishAlertPlayback:(id)arg1;
- (void)_handleAlertProvidingDelegateMessageBody:(id)arg1;
- (void)_handleListenerDisconnectedError:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerMessage:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (BOOL)_sendMessageAndReplySync:(id)arg1 connection:(id)arg2 error:(id *)arg3;
- (id)_decodeError:(id)arg1;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enableBargeInMode:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)fallbackDeactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;
- (void)updateTimerState:(long long)arg1;
- (void)updateAlarmState:(long long)arg1;
- (void)updateAlarmVolume:(float)arg1;
- (void)updateMusicVolume:(float)arg1;
- (float)getEstimatedTTSVolume;
- (unsigned int)audioSessionID;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (BOOL)isRecording;
- (void)cancelAudioStreamHold:(id)arg1;
- (id)holdAudioStreamWithDescription:(id)arg1 timeout:(double)arg2;
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
- (id)audioChunkToEndFrom:(unsigned long long)arg1;
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)playbackRoute;
- (BOOL)isNarrowBand;
- (id)recordSettings;
- (id)recordDeviceInfo;
- (id)recordRoute;
- (void)enableVoiceTrigger:(BOOL)arg1 withAssertion:(id)arg2;
- (void)triggerInfoForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id *)arg3;
- (BOOL)setCurrentContext:(id)arg1 error:(id *)arg2;
- (id)audioMetric;
- (float)averagePowerForChannel:(unsigned long long)arg1;
- (float)peakPowerForChannel:(unsigned long long)arg1;
- (void)updateMeters;
- (void)setMeteringEnabled:(BOOL)arg1;
- (void)configureAlertBehavior:(id)arg1;
- (unsigned long long)alertStartTime;
- (BOOL)playRecordStartingAlertAndResetEndpointer;
- (BOOL)playAlertSoundForType:(long long)arg1;
- (BOOL)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2;
- (void)setAudioAlertDelegate:(id)arg1;
- (void)setAudioSessionDelegate:(id)arg1;
- (void)enableMiniDucking:(BOOL)arg1;
- (void)duckAudioDevice:(unsigned int)arg1 duckedLevel:(float)arg2 rampDuration:(float)arg3;
- (void)setDuckOthersOption:(BOOL)arg1;
- (BOOL)duckOthersOption;
- (BOOL)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)prewarmAudioSessionWithError:(id *)arg1;
- (void)pingpong:(CDUnknownBlockType)arg1;
- (BOOL)prepareAudioProviderWithContext:(id)arg1 clientType:(unsigned long long)arg2 error:(id *)arg3;
- (void)sendXPCClientType;
- (void)dealloc;
- (void)disconnect;
- (void)connect;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

