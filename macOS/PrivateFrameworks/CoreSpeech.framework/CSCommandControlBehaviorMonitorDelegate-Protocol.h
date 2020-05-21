//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioRecordContext, CSAudioStartStreamOption, CSAudioStopStreamOption, CSCommandControlBehaviorMonitor;

@protocol CSCommandControlBehaviorMonitorDelegate <NSObject>
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 didStopStream:(CSAudioStopStreamOption *)arg2;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 willStopStream:(CSAudioStopStreamOption *)arg2;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 didStartStreamWithContext:(CSAudioRecordContext *)arg2 successfully:(BOOL)arg3 option:(CSAudioStartStreamOption *)arg4;
- (void)commandControlBehaviorMonitor:(CSCommandControlBehaviorMonitor *)arg1 willStartStreamWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;
@end

