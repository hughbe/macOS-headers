//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString;

@interface CSLanguageDetectorOption : NSObject
{
    BOOL _wasLanguageToggled;
    float _samplingRate;
    NSSet *_dictationLanguages;
    NSString *_currentKeyboard;
    NSArray *_multilingualKeyboardLanguages;
    NSDictionary *_keyboardConvoLanguagePriors;
    NSDictionary *_keyboardGlobalLanguagePriors;
    NSString *_previousMessageLanguage;
    NSString *_globalLastKeyboardUsed;
    NSDictionary *_dictationLanguagePriors;
    NSArray *_conversationalMessages;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *conversationalMessages; // @synthesize conversationalMessages=_conversationalMessages;
@property(retain, nonatomic) NSDictionary *dictationLanguagePriors; // @synthesize dictationLanguagePriors=_dictationLanguagePriors;
@property(retain, nonatomic) NSString *globalLastKeyboardUsed; // @synthesize globalLastKeyboardUsed=_globalLastKeyboardUsed;
@property(retain, nonatomic) NSString *previousMessageLanguage; // @synthesize previousMessageLanguage=_previousMessageLanguage;
@property(retain, nonatomic) NSDictionary *keyboardGlobalLanguagePriors; // @synthesize keyboardGlobalLanguagePriors=_keyboardGlobalLanguagePriors;
@property(retain, nonatomic) NSDictionary *keyboardConvoLanguagePriors; // @synthesize keyboardConvoLanguagePriors=_keyboardConvoLanguagePriors;
@property(retain, nonatomic) NSArray *multilingualKeyboardLanguages; // @synthesize multilingualKeyboardLanguages=_multilingualKeyboardLanguages;
@property(nonatomic) BOOL wasLanguageToggled; // @synthesize wasLanguageToggled=_wasLanguageToggled;
@property(retain, nonatomic) NSString *currentKeyboard; // @synthesize currentKeyboard=_currentKeyboard;
@property(retain, nonatomic) NSSet *dictationLanguages; // @synthesize dictationLanguages=_dictationLanguages;
@property(nonatomic) float samplingRate; // @synthesize samplingRate=_samplingRate;

@end

