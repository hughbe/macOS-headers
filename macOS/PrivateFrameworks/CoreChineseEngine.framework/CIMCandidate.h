//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/IMKCandidate.h>

@class NSString;

@interface CIMCandidate : IMKCandidate
{
    NSString *_surface;
    NSString *_reading;
    NSString *_displayReading;
    BOOL _inlineCandidate;
    unsigned long long _scriptType;
    BOOL _usesPointerAsUniqueKey;
    BOOL _predictionCandidate;
    BOOL _facemarkCandidate;
}

- (void).cxx_destruct;
@property(readonly, getter=isFacemarkCandidate) BOOL facemarkCandidate; // @synthesize facemarkCandidate=_facemarkCandidate;
@property(readonly, getter=isPredictionCandidate) BOOL predictionCandidate; // @synthesize predictionCandidate=_predictionCandidate;
@property BOOL usesPointerAsUniqueKey; // @synthesize usesPointerAsUniqueKey=_usesPointerAsUniqueKey;
@property unsigned long long scriptType; // @synthesize scriptType=_scriptType;
@property(getter=isInlineCandidate) BOOL inlineCandidate; // @synthesize inlineCandidate=_inlineCandidate;
@property(copy) NSString *displayReading; // @synthesize displayReading=_displayReading;
@property(copy) NSString *reading; // @synthesize reading=_reading;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)axHelpString;
@property(readonly, getter=isCompositionCandidate) BOOL compositionCandidate;
@property(readonly, getter=isCompletionCandidate) BOOL complectionCandidate;
@property(readonly, getter=isEmojiCandidate) BOOL emojiCandidate;
@property(readonly, getter=isLearningDictionaryCandidate) BOOL learningDictionaryCandidate;
@property(readonly, getter=isUserWordCandidate) BOOL userWordCandidate;
@property(readonly, getter=isExtensionCandidate) BOOL extensionCandidate;
- (id)text;
@property(copy) NSString *surface; // @synthesize surface=_surface;
- (id)initWithSurface:(id)arg1 reading:(id)arg2;
- (id)initWithSurface:(id)arg1 reading:(id)arg2 displayReading:(id)arg3;

@end

