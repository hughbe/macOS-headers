//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OITSUIntegerKeyDictionaryKeyEnumerator : NSObject
{
    long long **_keys;
    unsigned long long _count;
    unsigned long long _index;
}

- (long long)nextKey;
- (void)dealloc;
- (id)initWithIntegerKeyDictionary:(id)arg1;

@end

