//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@protocol CSAudioSessionProvidingDelegate;

@protocol CSAudioSessionProviding <NSObject>
- (void)duckAudioDevice:(unsigned int)arg1 duckedLevel:(float)arg2 rampDuration:(float)arg3;
- (void)enableMiniDucking:(BOOL)arg1;
- (void)setDuckOthersOption:(BOOL)arg1;
- (BOOL)duckOthersOption;
- (BOOL)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)activateAudioSessionWithReason:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)prewarmAudioSessionWithError:(id *)arg1;
- (void)setAudioSessionDelegate:(id <CSAudioSessionProvidingDelegate>)arg1;
@end

