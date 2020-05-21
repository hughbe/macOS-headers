//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray, AUPasscodeCodecConfiguration, NSData, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AUPasscodeEncoder : AUAudioUnit
{
    unique_ptr_5bd60e54 _kernel;
    struct BufferedInputBus _inputBus;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBusArray *_outputBusArray;
    map_fc0e2ca7 _apcEncoderConfig;
    long long _assetSampleCount;
    BOOL _outputIsSilenced;
    struct unique_ptr<EOFReachedMessage, std::__1::default_delete<EOFReachedMessage>> _eofMessage;
    struct unique_ptr<RealtimeMessenger, std::__1::default_delete<RealtimeMessenger>> _rtMessenger;
    unsigned int _fadeOutNumSamples;
    unsigned int _fadeOutSampleIndex;
    unsigned long long _loopNumber;
    unsigned long long _beginningTime;
    BOOL _silenceOutputOnNextAssetEnding;
    BOOL _triggerFadeOut;
    BOOL _embedPasscode;
    float _fadeOutTimeSeconds;
    NSData *_payload;
    AUPasscodeCodecConfiguration *_codecConfig;
    long long _assetLength;
    unsigned long long _numLoopsToStopAfter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _assetEndedAndSilencedHandler;
    NSMutableDictionary *_passcodeEmbedInfo;
}

+ (void)registerAU;
+ (struct AudioComponentDescription)getAUDesc;
+ (id)supportedEncoders;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *passcodeEmbedInfo; // @synthesize passcodeEmbedInfo=_passcodeEmbedInfo;
@property(copy, nonatomic) CDUnknownBlockType assetEndedAndSilencedHandler; // @synthesize assetEndedAndSilencedHandler=_assetEndedAndSilencedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) BOOL embedPasscode; // @synthesize embedPasscode=_embedPasscode;
@property(nonatomic) BOOL triggerFadeOut; // @synthesize triggerFadeOut=_triggerFadeOut;
@property(nonatomic) float fadeOutTimeSeconds; // @synthesize fadeOutTimeSeconds=_fadeOutTimeSeconds;
@property(nonatomic) unsigned long long numLoopsToStopAfter; // @synthesize numLoopsToStopAfter=_numLoopsToStopAfter;
@property(nonatomic) BOOL silenceOutputOnNextAssetEnding; // @synthesize silenceOutputOnNextAssetEnding=_silenceOutputOnNextAssetEnding;
@property(nonatomic) long long assetLength; // @synthesize assetLength=_assetLength;
@property(retain, nonatomic) AUPasscodeCodecConfiguration *codecConfig; // @synthesize codecConfig=_codecConfig;
@property(copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (BOOL)canProcessInPlace;
- (CDUnknownBlockType)internalRenderBlock;
- (void)reset;
- (void)deallocateRenderResources;
- (BOOL)allocateRenderResourcesAndReturnError:(id *)arg1;
- (id)outputBusses;
- (id)inputBusses;
- (void)handleEOFReachedForAsset;
- (void)dealloc;
- (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id *)arg3;

@end

