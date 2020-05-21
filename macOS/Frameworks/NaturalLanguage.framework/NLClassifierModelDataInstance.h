//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NaturalLanguage/NLDataInstance.h>

@class NSArray, NSString;

@interface NLClassifierModelDataInstance : NLDataInstance
{
    NSString *_string;
    NSString *_label;
    NSArray *_tokens;
}

+ (id)readInstancesFromString:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (void).cxx_destruct;
- (id)subInstanceWithLocator:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (id)locatorsWithIndex:(unsigned long long)arg1 parameters:(struct _NLConstraintParameters)arg2 tagger:(id)arg3 tokenizer:(struct __CFStringTokenizer *)arg4;
- (struct __CFDictionary *)instanceDictionary;
- (id)formattedLineWithLabelMap:(id)arg1 vocabularyMap:(id)arg2;
- (id)labels;
- (id)label;
- (id)tokens;
- (id)string;
- (id)initWithLine:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;
- (id)initWithString:(id)arg1 label:(id)arg2;
- (id)initWithString:(id)arg1 label:(id)arg2 tokenizer:(struct __CFStringTokenizer *)arg3;

@end

