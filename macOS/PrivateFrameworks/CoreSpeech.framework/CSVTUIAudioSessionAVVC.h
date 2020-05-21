//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpeech/AVVoiceControllerPlaybackDelegate-Protocol.h>
#import <CoreSpeech/AVVoiceControllerRecordDelegate-Protocol.h>
#import <CoreSpeech/CSVTUIAudioSession-Protocol.h>

@class AVVoiceController, NSString;
@protocol CSVTUIAudioSessionDelegate, OS_dispatch_queue;

@interface CSVTUIAudioSessionAVVC : NSObject <CSVTUIAudioSession, AVVoiceControllerRecordDelegate, AVVoiceControllerPlaybackDelegate>
{
    AVVoiceController *_voiceController;
    NSObject<OS_dispatch_queue> *_queue;
    id <CSVTUIAudioSessionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CSVTUIAudioSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)voiceControllerPlaybackBufferAvailable:(id)arg1 buffer:(id)arg2;
- (void)updateMeters;
- (void)stopRecording;
- (BOOL)startRecording;
- (void)setEndpointerDelegate:(id)arg1;
- (void)resetEndPointer;
- (void)releaseAudioSession;
- (BOOL)prepareRecord;
- (BOOL)isRecording;
- (BOOL)hasCorrectAudioRoute;
- (BOOL)hasAudioRoute;
- (float)averagePower;
- (unsigned long long)audioSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

