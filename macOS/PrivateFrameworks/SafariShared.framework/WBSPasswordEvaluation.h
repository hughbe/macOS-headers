//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WBSPasswordEvaluation : NSObject
{
    double _guessesRequired;
    NSString *_password;
    NSArray *_patternMatches;
    long long _evaluationType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long evaluationType; // @synthesize evaluationType=_evaluationType;
@property(readonly, copy, nonatomic) NSArray *patternMatches; // @synthesize patternMatches=_patternMatches;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
- (id)compactDescriptionWithPasswordColumnWidth:(unsigned long long)arg1 includePatternMatches:(BOOL)arg2;
@property(readonly, nonatomic) NSString *userFeedbackString;
- (id)_passwordFeedbackStrings;
- (BOOL)_shouldShowUserFeedbackStringsForWordListPatternMatch:(id)arg1;
- (id)_bestPatternMatchOfType:(unsigned long long)arg1;
@property(readonly, nonatomic) double guessesRequired; // @synthesize guessesRequired=_guessesRequired;
@property(readonly, nonatomic) BOOL userShouldBeShownActiveWarning;
@property(readonly, nonatomic) BOOL userShouldBeShownPassiveWarning;
@property(readonly, nonatomic) unsigned long long strength;
- (id)initWithEvaluationType:(long long)arg1 password:(id)arg2 patternMatches:(id)arg3 guessesRequired:(double)arg4;

@end

