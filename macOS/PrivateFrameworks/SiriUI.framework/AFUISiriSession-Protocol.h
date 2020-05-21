//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class AFMetrics, AFUserUtteranceSelectionResults, AceObject, NSString, SABaseClientBoundCommand, SiriUIRequestOptions;
@protocol SAAceCommand;

@protocol AFUISiriSession <NSObject>
+ (void)forceAvailabilityStateAvailable:(BOOL)arg1;
+ (NSString *)currentMicrophoneIdentifier;
- (void)recordRequestMetricEvent:(NSString *)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(AFMetrics *)arg1;
- (void)requestDidPresentViewForErrorCommand:(SABaseClientBoundCommand *)arg1;
- (void)requestDidPresentViewForUICommand:(SABaseClientBoundCommand *)arg1;
- (void)resultDidChangeForAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1;
- (void)performAceCommand:(AceObject<SAAceCommand> *)arg1 conflictHandler:(void (^)(void))arg2;
- (void)startCorrectedRequestWithText:(NSString *)arg1 correctionIdentifier:(id)arg2 userSelectionResults:(AFUserUtteranceSelectionResults *)arg3;
- (void)cancelSpeechRequest;
- (void)stopRecordingSpeech;
- (void)telephonyRequestCompleted;
- (void)sendReplyCommand:(AceObject<SAAceCommand> *)arg1;
- (void)end;
- (void)updateRequestOptions:(SiriUIRequestOptions *)arg1;
- (void)stopRequestWithOptions:(SiriUIRequestOptions *)arg1;
- (void)startRequestWithOptions:(SiriUIRequestOptions *)arg1;
- (void)setApplicationContext;
- (void)setAlertContext;
- (void)rollbackClearContext;
- (void)resetContextTypes:(long long)arg1;
- (void)clearContext;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionActive;
- (void)preheat;
- (void)setLockState:(unsigned long long)arg1;
@end

