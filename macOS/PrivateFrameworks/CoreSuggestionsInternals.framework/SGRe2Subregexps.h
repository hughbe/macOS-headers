//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGRe2.h>

@class NSArray, SGRe2PrefilterTree;

@interface SGRe2Subregexps : SGRe2
{
    NSArray *_subregexps;
    SGRe2PrefilterTree *_prefilter;
}

- (void).cxx_destruct;
- (id)description;
- (int)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)matchesUtf8:(const char *)arg1;
- (id)existsInUtf8:(const char *)arg1;
- (id)initWithSubregexps:(id)arg1 prefilter:(id)arg2;

@end

