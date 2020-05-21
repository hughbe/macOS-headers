//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFVoiceInfo, NSArray, NSString;

@interface AFSiriRingtone : NSObject
{
    BOOL _languageMismatch;
    NSString *_voiceLanguage;
    NSArray *_contacts;
    NSString *_displayedCallerID;
    long long _callerIDType;
    NSString *_callServiceSpeakableName;
    NSString *_callDestinationID;
    long long _callDestinationIDType;
    AFVoiceInfo *_voiceInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AFVoiceInfo *voiceInfo; // @synthesize voiceInfo=_voiceInfo;
@property(nonatomic) long long callDestinationIDType; // @synthesize callDestinationIDType=_callDestinationIDType;
@property(copy, nonatomic) NSString *callDestinationID; // @synthesize callDestinationID=_callDestinationID;
@property(copy, nonatomic) NSString *callServiceSpeakableName; // @synthesize callServiceSpeakableName=_callServiceSpeakableName;
@property(nonatomic) long long callerIDType; // @synthesize callerIDType=_callerIDType;
@property(copy, nonatomic) NSString *displayedCallerID; // @synthesize displayedCallerID=_displayedCallerID;
@property(retain, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
- (id)_escapeCallDestinationIDString:(id)arg1 forType:(long long)arg2;
- (id)_escapeCallerIDString:(id)arg1 forType:(long long)arg2;
- (id)_phoneticNamesForContact:(id)arg1 languageCode:(id)arg2;
- (void)_phoneticInfoForContact:(id)arg1 languageCode:(id)arg2 firstName:(id *)arg3 middleName:(id *)arg4 lastName:(id *)arg5 nickname:(id *)arg6;
- (id)_spokenTextForCallDestinationID:(id)arg1 ofType:(long long)arg2 callServiceSpeakableName:(id)arg3 languageCode:(id)arg4;
- (id)_spokenTextForCallerID:(id)arg1 ofType:(long long)arg2 rawCaller:(id)arg3 rawCallerType:(long long)arg4 languageCode:(id)arg5;
- (id)_spokenTextForContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_spokenTextForThreeContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_spokenTextForTwoContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_spokenTextForOneContact:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3;
- (id)_generateSpokenTextForContacts:(id)arg1 voiceLanguage:(id)arg2 displayedCallerID:(id)arg3 callerIDType:(long long)arg4 callDestinationID:(id)arg5 callDestinationIDType:(long long)arg6 callServiceSpeakableName:(id)arg7;
@property(readonly, nonatomic) NSString *textToSpeak;
- (id)initWithContacts:(id)arg1;
- (id)_bestVoiceInfoWithCurrentLocale:(id)arg1;
- (id)init;

@end

