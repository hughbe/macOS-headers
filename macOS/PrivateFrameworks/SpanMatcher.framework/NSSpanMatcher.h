//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTFuzzyIndex, NSMetaphone;

@interface NSSpanMatcher : NSObject
{
    CTFuzzyIndex *_index;
    NSMetaphone *_meta;
    int _editDistance;
    int _ignoredWordLength;
    int _ignoredWordLengthForEditDistance;
    unsigned long long _options;
    long long _wordsMatched;
}

- (void).cxx_destruct;
@property long long wordsMatched; // @synthesize wordsMatched=_wordsMatched;
@property unsigned long long options; // @synthesize options=_options;
- (id)query:(id)arg1;
- (void)index:(id)arg1 withData:(id)arg2;
- (int)getMode;
- (void)setMode:(int)arg1;
- (id)initWithPath:(id)arg1 options:(unsigned long long)arg2;

@end

