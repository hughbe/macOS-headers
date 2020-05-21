//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/TIUserAction.h>

@class NSString;

@interface TICursorEvent : TIUserAction
{
    BOOL _isSelection;
    BOOL _extendsPriorWord;
    NSString *_inWord;
    unsigned long long _selectionLocation;
    struct _NSRange _inWordRange;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long selectionLocation; // @synthesize selectionLocation=_selectionLocation;
@property(nonatomic) struct _NSRange inWordRange; // @synthesize inWordRange=_inWordRange;
@property(copy, nonatomic) NSString *inWord; // @synthesize inWord=_inWord;
@property(nonatomic) BOOL extendsPriorWord; // @synthesize extendsPriorWord=_extendsPriorWord;
@property(nonatomic) BOOL isSelection; // @synthesize isSelection=_isSelection;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTIKeyboardState:(id)arg1;

@end

