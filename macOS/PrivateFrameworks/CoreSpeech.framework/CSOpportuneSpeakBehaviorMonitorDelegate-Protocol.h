//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioRecordContext, CSAudioStartStreamOption, CSAudioStopStreamOption, CSOpportuneSpeakBehaviorMonitor, NSString;

@protocol CSOpportuneSpeakBehaviorMonitorDelegate <NSObject>
- (void)opportuneSpeakBehaviorMonitor:(CSOpportuneSpeakBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2;
- (void)opportuneSpeakBehaviorMonitor:(CSOpportuneSpeakBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2;
- (void)opportuneSpeakBehaviorMonitor:(CSOpportuneSpeakBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 audioProviderUUID:(NSString *)arg3 successfully:(BOOL)arg4 option:(CSAudioStartStreamOption *)arg5;
- (void)opportuneSpeakBehaviorMonitor:(CSOpportuneSpeakBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 audioProviderUUID:(NSString *)arg3 option:(CSAudioStartStreamOption *)arg4;
@end

