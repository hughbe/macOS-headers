//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextToSpeech/TTSSpeechConnectionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, TTSSpeechSynthesizerDelegate;

@interface TTSSpeechSynthesizer : NSObject <TTSSpeechConnectionDelegate>
{
    long long _footprint;
    id <TTSSpeechSynthesizerDelegate> _delegate;
    BOOL _useSharedSession;
    BOOL _audioSessionIDIsValid;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    BOOL _useMonarchStyleRate;
    NSMutableDictionary *_channels;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_currentRequestOwners;
    NSMutableArray *_speechRequests;
    struct {
        unsigned int delegateStartWithRequest:1;
        unsigned int delegateFinishWithRequest:1;
        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;
        unsigned int delegatePauseWithRequest:1;
        unsigned int delegateContinueWithRequest:1;
        unsigned int delegateWillSpeakWithRequest:1;
        unsigned int delegateSynthesizedSilentlyURL:1;
        unsigned int willUseInput:1;
    } _synthesizerFlags;
    unsigned long long _synthesizerInstanceID;
    NSArray *_outputChannels;
    NSMutableDictionary *_testingLastRuleConversion;
    BOOL _supportsAccurateWordCallbacks;
    BOOL _ignoreSubstitutions;
    BOOL _synthesizeSilently;
    float _rate;
    float _pitch;
    float _volume;
    NSString *_voiceIdentifier;
    NSString *_bundleIdentifier;
    unsigned long long _requestClientIdentifier;
    void *_speakingRequestClientContext;
    NSArray *_userSubstitutions;
    NSArray *_phonemeSubstitutions;
    CDUnknownBlockType _audioBufferCallback;
}

+ (id)supportedIPAPhonemeLanguages;
+ (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3 useFallbackDefault:(BOOL)arg4;
+ (id)_speechVoiceForIdentifier:(id)arg1 language:(id)arg2 footprint:(long long)arg3;
+ (id)audioFileSettingsForVoice:(id)arg1;
+ (void)setSpeechJobStartedUnitTestBlock:(CDUnknownBlockType)arg1;
+ (void)setSpeechJobFinishedUnitTestBlock:(CDUnknownBlockType)arg1;
+ (id)availableLanguageCodes;
+ (id)availableVoicesForLanguageCode:(id)arg1 queryingMobileAssets:(BOOL)arg2;
+ (void)setTestingAvailableVoicesForLanguageCode:(id)arg1;
+ (id)voiceAccessQueue;
+ (id)allAvailableVoices;
+ (id)refreshAllAvailableVoices:(BOOL)arg1;
+ (id)refreshAllAvailableVoices;
+ (id)synthesizerForSynthesizerID:(unsigned long long)arg1;
+ (id)voiceAssetsForTesting;
+ (void)setVoiceAssetsForTesting:(id)arg1;
+ (void)testingSetAllVoices:(id)arg1;
+ (id)speechMarkupStringForType:(long long)arg1 forIdentifier:(id)arg2 string:(id)arg3;
+ (BOOL)employSpeechMarkupForType:(long long)arg1 identifier:(id)arg2 withLanguage:(id)arg3;
+ (id)voiceForIdentifier:(id)arg1;
+ (id)availableVoices;
+ (void)_initializeServers;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) BOOL synthesizeSilently; // @synthesize synthesizeSilently=_synthesizeSilently;
@property(nonatomic) BOOL ignoreSubstitutions; // @synthesize ignoreSubstitutions=_ignoreSubstitutions;
@property(copy, nonatomic) CDUnknownBlockType audioBufferCallback; // @synthesize audioBufferCallback=_audioBufferCallback;
@property(copy, nonatomic) NSArray *phonemeSubstitutions; // @synthesize phonemeSubstitutions=_phonemeSubstitutions;
@property(copy, nonatomic) NSArray *userSubstitutions; // @synthesize userSubstitutions=_userSubstitutions;
@property(nonatomic) unsigned int audioQueueFlags; // @synthesize audioQueueFlags=_audioQueueFlags;
@property(nonatomic) BOOL supportsAccurateWordCallbacks; // @synthesize supportsAccurateWordCallbacks=_supportsAccurateWordCallbacks;
@property(nonatomic) void *speakingRequestClientContext; // @synthesize speakingRequestClientContext=_speakingRequestClientContext;
@property(nonatomic) unsigned long long requestClientIdentifier; // @synthesize requestClientIdentifier=_requestClientIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *voiceIdentifier; // @synthesize voiceIdentifier=_voiceIdentifier;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didSynthesizeSilentlyToURL:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (BOOL)continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id *)arg4;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id *)arg4;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 request:(id *)arg4 error:(id *)arg5;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id *)arg3 error:(id *)arg4;
- (BOOL)startSpeakingString:(id)arg1 request:(id *)arg2 error:(id *)arg3;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;
- (long long)footprint;
- (void)setFootprint:(long long)arg1;
- (BOOL)useMonarchStyleRate;
- (void)setUseMonarchStyleRate:(BOOL)arg1;
- (float)maximumRate;
- (float)minimumRate;
- (id)speechString;
- (BOOL)isSpeaking;
- (BOOL)continueSpeakingWithError:(id *)arg1;
- (BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id *)arg3;
- (BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (BOOL)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id *)arg3;
- (BOOL)stopSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id *)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)startSpeakingString:(id)arg1 error:(id *)arg2;
@property(nonatomic) __weak id <TTSSpeechSynthesizerDelegate> delegate; // @dynamic delegate;
- (BOOL)_continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (BOOL)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id *)arg5 error:(id *)arg6;
- (unsigned long long)synthesizerInstanceID;
- (id)_applySubstitution:(id)arg1 toText:(id)arg2 wordRange:(struct _NSRange)arg3 request:(id)arg4 phonemes:(id *)arg5;
- (void)_processUserSubstitutions:(id)arg1 toText:(id)arg2 request:(id)arg3 bundleIdentifier:(id)arg4 voice:(id)arg5;
- (BOOL)_skipSubstition:(id)arg1 language:(id)arg2 bundleIdentifier:(id)arg3 voice:(id)arg4;
- (id)_preprocessText:(id)arg1 languageCode:(id)arg2;
- (id)resolvedVoiceIdentifierForLanguageCode:(id)arg1;
@property(readonly, nonatomic) NSString *resolvedVoiceIdentifier;
@property(retain, nonatomic) NSArray *outputChannels;
- (void)_setDelegate:(id)arg1;
- (void)dealloc;
- (void)_mediaServicesDied;
- (id)init;
- (void)testingSetLastRuleConversion:(id)arg1 replacement:(id)arg2;
- (id)testingLastRuleConversion;

@end

