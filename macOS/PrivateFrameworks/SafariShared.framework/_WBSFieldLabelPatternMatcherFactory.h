//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _WBSFieldLabelPatternMatcherFactory : NSObject
{
    NSMutableDictionary *_trie;
}

+ (struct __WBSFieldLabelPatternMatcherArray *)createFieldLabelPatternMatcherArrayFromWordArrays:(id)arg1 allowingEndOfWordMatches:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_addWord:(id)arg1 allowingEndOfWordMatch:(BOOL)arg2;
- (id)init;

@end

