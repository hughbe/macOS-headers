//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictationServiceDelegate-Protocol.h>

@class AFDictationConnection, NSString;

@interface AFDictationConnectionServiceDelegate : NSObject <AFDictationServiceDelegate>
{
    AFDictationConnection *_connection;
}

- (void).cxx_destruct;
- (oneway void)speechDidBeginLocalRecognitionWithModelInfo:(id)arg1;
- (oneway void)languageDetectorFailedWithError:(id)arg1;
- (oneway void)speechDidRecognizeMultilingualSpeech:(id)arg1;
- (oneway void)speechDidDetectLanguage:(id)arg1 confidenceScores:(id)arg2 isConfident:(BOOL)arg3;
- (oneway void)speechDidReceiveSearchResults:(id)arg1 recognitionText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4;
- (oneway void)speechDidFinishWritingAudioFile:(id)arg1 error:(id)arg2;
- (oneway void)speechRecognitionDidFinishWithError:(id)arg1;
- (oneway void)speechDidRecognizeTranscriptionObjects:(id)arg1 usingSpeechModel:(id)arg2;
- (oneway void)speechDidProcessAudioDuration:(double)arg1;
- (oneway void)speechDidRecognizePartialResult:(id)arg1;
- (oneway void)speechDidRecognizeTokens:(id)arg1 usingSpeechModel:(id)arg2;
- (oneway void)speechDidRecognizePhrases:(id)arg1 utterances:(id)arg2 usingSpeechModel:(id)arg3 correctionContext:(id)arg4 audioAnalytics:(id)arg5;
- (oneway void)speechDidRecognizePackage:(id)arg1;
- (oneway void)speechRecordingDidFail:(id)arg1;
- (oneway void)speechRecordingDidCancel;
- (oneway void)speechRecordingDidEnd;
- (oneway void)speechRecordingDidBeginWithOptions:(id)arg1;
- (oneway void)speechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1;
- (id)initWithDictationConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

