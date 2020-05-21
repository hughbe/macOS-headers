//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSArray, NSMutableArray, VCAudioPayload, VCTransportSession;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitterConfig : NSObject
{
    struct tagHANDLE *_rtpHandle;
    struct tagHANDLE *_rtpVideo;
    struct tagHANDLE *_mediaQueue;
    struct tagHANDLE *_afrcHandle;
    void *_controlInfoGenerator;
    AVCStatisticsCollector *_statisticsCollector;
    NSMutableArray *_audioPayloads;
    VCAudioPayload *_chosenAudioPayload;
    VCAudioPayload *_chosenDTXPayload;
    unsigned char _packetsPerBundle;
    BOOL _useRateControl;
    int _bundlingScheme;
    BOOL _isUseCaseWatchContinuity;
    BOOL _allowAudioSwitching;
    BOOL _supportsAdaptation;
    int _chosenRedPayloadType;
    BOOL _redEnabled;
    BOOL _includeRedSequenceOffset;
    unsigned int _redNumPayloads;
    unsigned int _redMaxDelay20ms;
    BOOL _transmitROC;
    BOOL _needsPacketThread;
    int _operatingMode;
    struct AudioStreamBasicDescription _inputFormat;
    struct opaqueRTCReporting *_reportingAgent;
    int _reportingParentID;
    VCTransportSession *_transportSession;
    BOOL _ignoreSilence;
    unsigned int _maxIDSStreamIdCount;
    NSArray *_streamIDs;
    unsigned int _tierNetworkBitrate;
    NSArray *_supportedNumRedundantPayload;
    BOOL _sendActiveVoiceOnly;
    BOOL _currentDTXEnable;
    unsigned char _mediaControlInfoVersion;
    BOOL _alwaysOnAudioRedundancyEnabled;
    BOOL _cellularAllowRedLowBitratesEnabled;
    BOOL _wifiAllowRedLowBitratesEnabled;
}

@property(nonatomic) BOOL wifiAllowRedLowBitratesEnabled; // @synthesize wifiAllowRedLowBitratesEnabled=_wifiAllowRedLowBitratesEnabled;
@property(nonatomic) BOOL cellularAllowRedLowBitratesEnabled; // @synthesize cellularAllowRedLowBitratesEnabled=_cellularAllowRedLowBitratesEnabled;
@property(nonatomic) BOOL alwaysOnAudioRedundancyEnabled; // @synthesize alwaysOnAudioRedundancyEnabled=_alwaysOnAudioRedundancyEnabled;
@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property(nonatomic, getter=isCurrentDTXEnabled) BOOL currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(nonatomic) int reportingParentID; // @synthesize reportingParentID=_reportingParentID;
@property(nonatomic) BOOL sendActiveVoiceOnly; // @synthesize sendActiveVoiceOnly=_sendActiveVoiceOnly;
@property(retain, nonatomic) NSArray *supportedNumRedundantPayload; // @synthesize supportedNumRedundantPayload=_supportedNumRedundantPayload;
@property(nonatomic) unsigned int maxIDSStreamIdCount; // @synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount;
@property(nonatomic) unsigned int tierNetworkBitrate; // @synthesize tierNetworkBitrate=_tierNetworkBitrate;
@property(retain, nonatomic) NSArray *streamIDs; // @synthesize streamIDs=_streamIDs;
@property(nonatomic) BOOL needsPacketThread; // @synthesize needsPacketThread=_needsPacketThread;
@property(nonatomic) BOOL ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property(nonatomic) BOOL transmitROC; // @synthesize transmitROC=_transmitROC;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(nonatomic) unsigned int redMaxDelay20ms; // @synthesize redMaxDelay20ms=_redMaxDelay20ms;
@property(nonatomic) unsigned int redNumPayloads; // @synthesize redNumPayloads=_redNumPayloads;
@property(nonatomic) BOOL includeRedSequenceOffset; // @synthesize includeRedSequenceOffset=_includeRedSequenceOffset;
@property(nonatomic, getter=isRedEnabled) BOOL redEnabled; // @synthesize redEnabled=_redEnabled;
@property(retain, nonatomic) VCTransportSession *transportSession; // @synthesize transportSession=_transportSession;
@property(nonatomic) struct opaqueRTCReporting *reportingAgent; // @synthesize reportingAgent=_reportingAgent;
@property(nonatomic) struct AudioStreamBasicDescription inputFormat; // @synthesize inputFormat=_inputFormat;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(nonatomic) BOOL supportsAdaptation; // @synthesize supportsAdaptation=_supportsAdaptation;
@property(nonatomic) BOOL allowAudioSwitching; // @synthesize allowAudioSwitching=_allowAudioSwitching;
@property(nonatomic) BOOL isUseCaseWatchContinuity; // @synthesize isUseCaseWatchContinuity=_isUseCaseWatchContinuity;
@property(nonatomic) int bundlingScheme; // @synthesize bundlingScheme=_bundlingScheme;
@property(nonatomic) BOOL useRateControl; // @synthesize useRateControl=_useRateControl;
@property(nonatomic) unsigned char packetsPerBundle; // @synthesize packetsPerBundle=_packetsPerBundle;
@property(nonatomic) int chosenRedPayloadType; // @synthesize chosenRedPayloadType=_chosenRedPayloadType;
@property(retain, nonatomic) VCAudioPayload *chosenDTXPayload; // @synthesize chosenDTXPayload=_chosenDTXPayload;
@property(retain, nonatomic) VCAudioPayload *chosenAudioPayload; // @synthesize chosenAudioPayload=_chosenAudioPayload;
@property(retain, nonatomic) NSMutableArray *audioPayloads; // @synthesize audioPayloads=_audioPayloads;
@property(nonatomic) struct tagHANDLE *afrcHandle; // @synthesize afrcHandle=_afrcHandle;
@property(nonatomic) struct tagHANDLE *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(nonatomic) void *controlInfoGenerator; // @synthesize controlInfoGenerator=_controlInfoGenerator;
@property(nonatomic) struct tagHANDLE *rtpVideo; // @synthesize rtpVideo=_rtpVideo;
@property(nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
- (id)description;
- (void)dealloc;

@end

