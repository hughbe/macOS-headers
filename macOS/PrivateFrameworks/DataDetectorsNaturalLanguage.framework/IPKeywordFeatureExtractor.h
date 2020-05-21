//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDetectorsNaturalLanguage/IPFeatureExtractor.h>

@interface IPKeywordFeatureExtractor : IPFeatureExtractor
{
}

- (id)_matchingKeywordsForRegex:(id)arg1 inText:(id)arg2 message:(id)arg3 eventType:(id)arg4 keywordType:(unsigned long long)arg5;
- (id)matchesForTextString:(id)arg1 inMessageUnit:(id)arg2 eventType:(id)arg3 keywordType:(unsigned long long)arg4;
- (id)matchesForTextString:(id)arg1 inMessageUnit:(id)arg2 eventType:(id)arg3;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;

@end

