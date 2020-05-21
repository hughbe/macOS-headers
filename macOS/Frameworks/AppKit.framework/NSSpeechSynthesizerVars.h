//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _NSPeriodicInvoker;
@protocol NSSpeechSynthesizerDelegate;

__attribute__((visibility("hidden")))
@interface NSSpeechSynthesizerVars : NSObject
{
    struct SpeechChannelRecord *_speechChannel;
    _NSPeriodicInvoker *_speechFeedbackServicesInvoker;
    unsigned int _speechFeedbackServicesRef;
    NSString *_currentVoice;
    float _normalSpeakingRate;
    BOOL _usingDefaultVoice;
    BOOL _usesFeedbackWindow;
    BOOL _speakingSpeechFeedbackServices;
    BOOL _needsResyncWithDefaultVoice;
    BOOL _speechFinishedSuccessfully;
    BOOL _synthesizerIsRetained;
    id <NSSpeechSynthesizerDelegate> _delegate;
}

+ (id)voiceIdentifierForVoiceCreator:(unsigned int)arg1 voiceID:(unsigned int)arg2;
+ (BOOL)findVoiceByIdentifier:(id)arg1 returningCreator:(unsigned int *)arg2 returningID:(unsigned int *)arg3;
- (void).cxx_destruct;
@property __weak id <NSSpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) _NSPeriodicInvoker *speechFeedbackServicesInvoker;
@property BOOL synthesizerIsRetained;
@property BOOL speechFinishedSuccessfully;
@property BOOL needsResyncWithDefaultVoice;
@property BOOL speakingSpeechFeedbackServices;
@property BOOL usesFeedbackWindow;
@property BOOL usingDefaultVoice;
@property(readonly) float normalSpeakingRate;
@property(copy) NSString *currentVoiceIdentifier;
@property(readonly) unsigned int speechFeedbackServicesRef;
@property(readonly) struct SpeechChannelRecord *speechChannel;
- (short)setSpeechChannelWithVoiceCreator:(unsigned int)arg1 voiceID:(unsigned int)arg2;
- (short)setSpeechChannelWithVoiceIdentifier:(id)arg1;
- (void)dealloc;

@end

