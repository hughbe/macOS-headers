//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface NSOwnedDictionaryProxy : NSDictionary
{
    id _owner;
}

- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (unsigned long long)count;
- (void)superRelease;
- (oneway void)release;
- (id)retain;
- (id)initWithOwner:(id)arg1;

@end

