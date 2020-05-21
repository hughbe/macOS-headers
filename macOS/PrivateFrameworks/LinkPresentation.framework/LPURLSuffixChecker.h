//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPURLSuffixChecker : NSObject
{
    struct {
        unsigned short _field1[27];
    } *_trie;
    unsigned int _trieNodeCount;
    unsigned long long _maxLength;
    NSMutableArray *_failedSuffixes;
}

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)hasSuffix:(id)arg1 remainingPrefix:(id *)arg2;
- (BOOL)hasSuffix:(id)arg1;
- (id)initWithSuffixes:(id)arg1;
- (void)addStringToFailedSuffixes:(id)arg1;
- (BOOL)insertString:(id)arg1 intoTrieWithCache:(CDStruct_f2b84ca7 *)arg2;

@end

