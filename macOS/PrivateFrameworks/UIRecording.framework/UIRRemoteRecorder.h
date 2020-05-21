//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTask;

@interface UIRRemoteRecorder : NSObject
{
    id _delegate;
    BOOL _isRecording;
    NSTask *_task;
    struct __UIRRemoteRecorderDelegateRespondTo {
        unsigned int uirRemoteRecorderWillStartRecording:1;
        unsigned int uirRemoteRecorderWillStopRecording:1;
        unsigned int uirRemoteRecorderDidStartRecording:1;
        unsigned int uirRemoteRecorderDidStopRecording_withRecord:1;
        unsigned int uirRemoteRecorder_didError:1;
        unsigned int reserved:27;
    } _delegateRespondTo;
}

+ (id)uiRecorderPath;
+ (id)sharedInstance;
- (void)didError:(id)arg1;
- (void)didStopRecording:(id)arg1;
- (void)didStartRecording:(id)arg1;
- (void)stopRecording;
- (void)startRecordingEvents:(unsigned long long)arg1 forApplication:(id)arg2;
- (void)startRecording;
- (id)init;
- (BOOL)isRecording;
- (void)setTask:(id)arg1;
- (id)task;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end

