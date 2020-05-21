//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/TIKeyboardActivityObserving-Protocol.h>
#import <TextInputCore/TIProactiveQuickTypeManaging-Protocol.h>

@class NSDate, NSString, TIProactiveTrigger;
@protocol OS_dispatch_queue, _ICPredictionManaging;

@interface TIProactiveQuickTypeManager : NSObject <TIProactiveQuickTypeManaging, TIKeyboardActivityObserving>
{
    NSObject<OS_dispatch_queue> *_queue;
    id <_ICPredictionManaging> _inputContextManager;
    TIProactiveTrigger *_lastTriggerForSuggestion;
    NSDate *_lastSuggestionTime;
    NSString *_maxLengthProactiveCandidate;
    unsigned long long _textBeforeLength;
}

+ (id)buildSecureCandidateFrom:(id)arg1 withSecureCandidateRenderer:(id)arg2 input:(id)arg3;
+ (id)proactiveTriggerForTextContentType:(id)arg1;
+ (id)singletonInstance;
+ (id)sharedTIProactiveQuickTypeManager;
+ (id)buildSecureCandidateForTestFrom:(id)arg1 withSecureCandidateRenderer:(id)arg2 input:(id)arg3;
+ (void)setSharedTIProactiveQuickTypeManager:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isAutoCompleteEnabled;
- (BOOL)isAutoPopupEnabled;
- (BOOL)isEnabled;
- (void)reset;
- (unsigned long long)matchProactiveCandidateToUserInput:(id)arg1 userInput:(id)arg2;
- (void)loggingProactiveEngagementMetric:(unsigned long long)arg1 withLocale:(id)arg2 fieldType:(id)arg3;
- (void)keyboardActivityDidTransition:(id)arg1;
- (void)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4 async:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (id)generateAndRenderProactiveSuggestionsWithInput:(id)arg1 withSecureCandidateRenderer:(id)arg2 withRenderTraits:(id)arg3 textContentType:(id)arg4;
- (id)getMeCardEmailAddresses;
- (void)suggestionNotAccepted:(id)arg1;
- (void)suggestionAccepted:(id)arg1 fieldType:(id)arg2;
- (void)userActionWithNoNewTriggers:(id)arg1 fieldType:(id)arg2;
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 withTextContentType:(id)arg9 withAvailableApps:(id)arg10 logBlock:(CDUnknownBlockType)arg11 async:(BOOL)arg12 completion:(CDUnknownBlockType)arg13;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5 withRecipient:(id)arg6 withApplication:(id)arg7 withLocale:(id)arg8 withTextContentType:(id)arg9 withAvailableApps:(id)arg10 logBlock:(CDUnknownBlockType)arg11;
- (void)addToTypologyTrace:(CDUnknownBlockType)arg1 withTriggerSource:(id)arg2 withTriggerType:(id)arg3 withTriggerSubType:(id)arg4 withPredictionResults:(id)arg5 withFirstTrigger:(id)arg6;
- (id)renderItems:(id)arg1 withAdditionalPredictions:(id)arg2 withSecureCandidateRenderer:(id)arg3 withRenderTraits:(id)arg4 withInput:(id)arg5;
- (id)_makeQueue;
- (void)dealloc;
- (id)init;
- (id)getLastSuggestionTime;
- (id)initWithICManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

