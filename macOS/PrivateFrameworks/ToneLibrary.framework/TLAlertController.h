//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ToneLibrary/TLAlertPlaybackBackEndController-Protocol.h>

@class NSMapTable, NSString, TLAlertQueuePlayerController, TLAlertSystemSoundController;
@protocol OS_dispatch_queue;

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    TLAlertQueuePlayerController *_queuePlayerController;
    TLAlertSystemSoundController *_systemSoundController;
    NSMapTable *_alertContexts;
}

+ (BOOL)_shouldStopAlertForUserInterruption:(id)arg1;
+ (long long)_playbackBackEndForAlert:(id)arg1;
+ (id)sharedAlertController;
- (void).cxx_destruct;
- (BOOL)_stopAllAlertsInCurrentProcess;
- (id)_systemSoundController;
- (id)_queuePlayerController;
- (id)_controllerForPlaybackBackEnd:(long long)arg1;
- (void)_didCompletePlaybackOfAlert:(id)arg1;
- (void)_didReachTimeoutForAlert:(id)arg1;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_prepareForPlayingAlert:(id)arg1;
- (void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(BOOL)arg2;
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 willStopAlertsHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)stopAllAlerts;
- (void)_assertRunningOnAccessQueue;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

