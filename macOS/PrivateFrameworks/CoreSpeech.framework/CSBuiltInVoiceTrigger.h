//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSActivationEventNotifierDelegate-Protocol.h>
#import <CoreSpeech/CSAudioServerCrashMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSKeywordAnalyzerNDAPIScoreDelegate-Protocol.h>
#import <CoreSpeech/CSSelfTriggerDetectorDelegate-Protocol.h>
#import <CoreSpeech/CSSiriClientBehaviorMonitorDelegate-Protocol.h>
#import <CoreSpeech/CSVoiceTriggerXPCServiceDelegate-Protocol.h>

@class CSAsset, CSAudioProvider, CSAudioStream, CSOSTransaction, CSPolicy, CSVoiceTriggerSecondPass, NSDictionary, NSMutableArray, NSString;
@protocol CSVoiceTriggerDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface CSBuiltInVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate, CSActivationEventNotifierDelegate, CSAudioStreamProvidingDelegate, CSSiriClientBehaviorMonitorDelegate, CSAudioServerCrashMonitorDelegate, CSSelfTriggerDetectorDelegate, CSVoiceTriggerXPCServiceDelegate>
{
    BOOL _voiceTriggerEnabled;
    BOOL _hasTriggerPending;
    BOOL _isSecondPassRunning;
    BOOL _isSiriClientListening;
    BOOL _isListenPollingStarting;
    BOOL _isPhraseSpotterBypassed;
    BOOL _shouldDisableOnSpeakerVerificationInSplitterMode;
    float _firstPassThreshold;
    float _bestScore;
    float _masterChannelScoreBoost;
    id <CSVoiceTriggerDelegate> _delegate;
    CSPolicy *_voiceTriggerStartPolicy;
    CSAudioStream *_audioStream;
    NSObject<OS_dispatch_queue> *_queue;
    CSAsset *_currentAsset;
    NSMutableArray *_keywordAnalyzersNDAPI;
    unsigned long long _bestChannel;
    NSDictionary *_onsetResult;
    unsigned long long _onsetChannel;
    unsigned long long _channelSelectionDelay;
    unsigned long long _delayInSamplesRequiredForChannelSelection;
    NSDictionary *_channelSelectionScores;
    unsigned long long _processingChunkSamples;
    unsigned long long _processingChannelsBitset;
    CSVoiceTriggerSecondPass *_voiceTriggerSecondPass;
    CSAudioProvider *_audioProvider;
    NSMutableArray *_audioStreamHoldings;
    CSOSTransaction *_secondPassTransaction;
    NSObject<OS_dispatch_group> *_recordingWillStartGroup;
    unsigned long long _secondChanceHotTillMachTime;
    unsigned long long _currentSplitterState;
    NSString *_name;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL shouldDisableOnSpeakerVerificationInSplitterMode; // @synthesize shouldDisableOnSpeakerVerificationInSplitterMode=_shouldDisableOnSpeakerVerificationInSplitterMode;
@property(nonatomic) unsigned long long currentSplitterState; // @synthesize currentSplitterState=_currentSplitterState;
@property(nonatomic) unsigned long long secondChanceHotTillMachTime; // @synthesize secondChanceHotTillMachTime=_secondChanceHotTillMachTime;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup; // @synthesize recordingWillStartGroup=_recordingWillStartGroup;
@property(nonatomic) BOOL isPhraseSpotterBypassed; // @synthesize isPhraseSpotterBypassed=_isPhraseSpotterBypassed;
@property(retain, nonatomic) CSOSTransaction *secondPassTransaction; // @synthesize secondPassTransaction=_secondPassTransaction;
@property(retain, nonatomic) NSMutableArray *audioStreamHoldings; // @synthesize audioStreamHoldings=_audioStreamHoldings;
@property(retain, nonatomic) CSAudioProvider *audioProvider; // @synthesize audioProvider=_audioProvider;
@property(nonatomic) BOOL isListenPollingStarting; // @synthesize isListenPollingStarting=_isListenPollingStarting;
@property(nonatomic) BOOL isSiriClientListening; // @synthesize isSiriClientListening=_isSiriClientListening;
@property(nonatomic) BOOL isSecondPassRunning; // @synthesize isSecondPassRunning=_isSecondPassRunning;
@property(retain, nonatomic) CSVoiceTriggerSecondPass *voiceTriggerSecondPass; // @synthesize voiceTriggerSecondPass=_voiceTriggerSecondPass;
@property(nonatomic) unsigned long long processingChannelsBitset; // @synthesize processingChannelsBitset=_processingChannelsBitset;
@property(nonatomic) unsigned long long processingChunkSamples; // @synthesize processingChunkSamples=_processingChunkSamples;
@property(retain, nonatomic) NSDictionary *channelSelectionScores; // @synthesize channelSelectionScores=_channelSelectionScores;
@property(nonatomic) float masterChannelScoreBoost; // @synthesize masterChannelScoreBoost=_masterChannelScoreBoost;
@property(nonatomic) unsigned long long delayInSamplesRequiredForChannelSelection; // @synthesize delayInSamplesRequiredForChannelSelection=_delayInSamplesRequiredForChannelSelection;
@property(nonatomic) unsigned long long channelSelectionDelay; // @synthesize channelSelectionDelay=_channelSelectionDelay;
@property(nonatomic) unsigned long long onsetChannel; // @synthesize onsetChannel=_onsetChannel;
@property(retain, nonatomic) NSDictionary *onsetResult; // @synthesize onsetResult=_onsetResult;
@property(nonatomic) unsigned long long bestChannel; // @synthesize bestChannel=_bestChannel;
@property(nonatomic) float bestScore; // @synthesize bestScore=_bestScore;
@property(nonatomic) float firstPassThreshold; // @synthesize firstPassThreshold=_firstPassThreshold;
@property(nonatomic) BOOL hasTriggerPending; // @synthesize hasTriggerPending=_hasTriggerPending;
@property(retain, nonatomic) NSMutableArray *keywordAnalyzersNDAPI; // @synthesize keywordAnalyzersNDAPI=_keywordAnalyzersNDAPI;
@property(retain, nonatomic) CSAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) BOOL voiceTriggerEnabled; // @synthesize voiceTriggerEnabled=_voiceTriggerEnabled;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(retain, nonatomic) CSPolicy *voiceTriggerStartPolicy; // @synthesize voiceTriggerStartPolicy=_voiceTriggerStartPolicy;
@property(nonatomic) __weak id <CSVoiceTriggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_teardownSecondPassIfNeeded;
- (void)_createSecondPassIfNeededWithFirstPassSource:(unsigned long long)arg1;
- (BOOL)_shouldSecondPassKeepAlive;
- (void)_cancelAllAudioStreamHold;
- (void)_cancelLastAudioStreamHold;
- (void)_addAudioStreamHold:(id)arg1;
- (void)activationEventNotifier:(id)arg1 event:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)voiceTriggerXPCService:(id)arg1 setPhraseSpotterBypassing:(BOOL)arg2;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;
- (void)selfTriggerDetector:(id)arg1 didDetectSelfTrigger:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4;
- (void)_handleSecondPassResult:(unsigned long long)arg1 voiceTriggerInfo:(id)arg2 deviceId:(id)arg3 secondChanceCandidate:(BOOL)arg4 error:(id)arg5;
- (void)_handleVoiceTriggerSecondPassWithSource:(unsigned long long)arg1 deviceId:(id)arg2 audioProviderUUID:(id)arg3 firstPassInfo:(id)arg4;
- (void)_reportVoiceTriggerFirstPassFireFromAP;
- (void)_keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)keywordAnalyzerNDAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)_stopAOPVoiceTrigger;
- (void)_stopAPVoiceTrigger;
- (void)_startAOPVoiceTrigger;
- (void)_startAPVoiceTriggerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startVoiceTriggerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopListening;
- (void)_requestStartAudioStreamWithSource:(unsigned long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startListenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startListenPollingWithInterval:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_transitVoiceTriggerStatus:(BOOL)arg1;
- (void)_setAsset:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)_reset;
- (void)reset;
- (void)start;
- (id)initWithTargetQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

