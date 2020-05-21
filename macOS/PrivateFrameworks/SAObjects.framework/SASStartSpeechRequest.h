//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASStartSpeech.h>

@class NSArray, NSNumber, NSString;

@interface SASStartSpeechRequest : SASStartSpeech
{
}

+ (id)startSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startSpeechRequest;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL wasLaunchedForRequest;
@property(copy, nonatomic) NSArray *voiceTriggerPhrases;
@property(nonatomic) BOOL textToSpeechIsMuted;
@property(nonatomic) BOOL talkOnly;
@property(nonatomic) BOOL handsFree;
@property(nonatomic) BOOL eyesFree;
@property(copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property(copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property(copy, nonatomic) NSString *clientModelVersion;
@property(copy, nonatomic) NSArray *bargeInModes;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

