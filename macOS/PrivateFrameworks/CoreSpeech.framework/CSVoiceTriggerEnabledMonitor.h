//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSVoiceTriggerEnabledMonitor : CSEventMonitor
{
    int _notifyToken;
    BOOL _isVoiceTriggerEnabled;
}

+ (id)sharedInstance;
- (BOOL)_checkVoiceTriggerEnabled;
- (BOOL)isEnabled;
- (void)_notifyObserver:(id)arg1 withEnabled:(BOOL)arg2;
- (void)_didReceiveVoiceTriggerSettingChanged:(BOOL)arg1;
- (void)_didReceiveVoiceTriggerSettingChangedInQueue:(BOOL)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (id)init;

@end

