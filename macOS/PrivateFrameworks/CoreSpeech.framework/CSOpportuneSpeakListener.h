//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioStreamProvidingDelegate-Protocol.h>
#import <CoreSpeech/CSSPGEndpointAnalyzerDelegate-Protocol.h>

@class CSAudioRecordContext, CSAudioStream, CSPlainAudioFileWriter, CSSPGEndpointAnalyzer, NSMutableArray, NSString;
@protocol CSAudioSessionProviding, CSAudioStreamProviding, CSOpportuneSpeakListenerDelegate, OS_dispatch_queue;

@interface CSOpportuneSpeakListener : NSObject <CSAudioStreamProvidingDelegate, CSSPGEndpointAnalyzerDelegate>
{
    BOOL _isMediaPlayingNow;
    int _remoteVADSPGRatio;
    id <CSOpportuneSpeakListenerDelegate> _delegate;
    CSAudioStream *_audioStream;
    CSSPGEndpointAnalyzer *_spgEndpointAnalyzer;
    id <CSAudioStreamProviding> _audioStreamProvider;
    id <CSAudioSessionProviding> _audioSessionProvider;
    CSAudioRecordContext *_latestContext;
    NSMutableArray *_remoteVADAlignBuffer;
    unsigned long long _remoteVADAlignCount;
    NSObject<OS_dispatch_queue> *_alignBufferQueue;
    CSPlainAudioFileWriter *_audioFileWriter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *alignBufferQueue; // @synthesize alignBufferQueue=_alignBufferQueue;
@property(nonatomic) unsigned long long remoteVADAlignCount; // @synthesize remoteVADAlignCount=_remoteVADAlignCount;
@property(retain, nonatomic) NSMutableArray *remoteVADAlignBuffer; // @synthesize remoteVADAlignBuffer=_remoteVADAlignBuffer;
@property BOOL isMediaPlayingNow; // @synthesize isMediaPlayingNow=_isMediaPlayingNow;
@property(retain, nonatomic) CSAudioRecordContext *latestContext; // @synthesize latestContext=_latestContext;
@property(retain, nonatomic) id <CSAudioSessionProviding> audioSessionProvider; // @synthesize audioSessionProvider=_audioSessionProvider;
@property(retain, nonatomic) id <CSAudioStreamProviding> audioStreamProvider; // @synthesize audioStreamProvider=_audioStreamProvider;
@property(nonatomic) int remoteVADSPGRatio; // @synthesize remoteVADSPGRatio=_remoteVADSPGRatio;
@property(retain, nonatomic) CSSPGEndpointAnalyzer *spgEndpointAnalyzer; // @synthesize spgEndpointAnalyzer=_spgEndpointAnalyzer;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(nonatomic) __weak id <CSOpportuneSpeakListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)spgEndpointAnalyzer:(id)arg1 hasSilenceScoreEstimate:(double)arg2;
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;
- (BOOL)_shouldReportBoron;
- (BOOL)_popRemoteVADSignal;
- (void)_addRemoteVADSignal:(BOOL)arg1;
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2;
- (void)stopListenWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopListenWithStateReset:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)_resetAlignBuffer;
- (void)startListenWithOption:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

