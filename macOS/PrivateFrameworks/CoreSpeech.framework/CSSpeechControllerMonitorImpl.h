//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSSpeechControllerMonitor.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSSpeechControllerMonitorImpl : CSSpeechControllerMonitor
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_pendingRecordingStopUUID;
}

- (void).cxx_destruct;
- (void)_notifyObserver:(id)arg1 withSpeechControllerRecordState:(unsigned long long)arg2;
- (void)_notifyObserver:(id)arg1 withSpeechControllerRecordState:(unsigned long long)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;
- (void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2 withContext:(id)arg3;
- (void)notifySpeechControllerRecordStateChange:(unsigned long long)arg1 withEventUUID:(id)arg2;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (void)setRecordState:(unsigned long long)arg1;
- (id)init;

@end

