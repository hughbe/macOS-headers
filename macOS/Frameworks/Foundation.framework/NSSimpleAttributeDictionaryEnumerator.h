//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSSimpleAttributeDictionary;

__attribute__((visibility("hidden")))
@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator
{
    NSSimpleAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithAttributeDictionary:(id)arg1;

@end

