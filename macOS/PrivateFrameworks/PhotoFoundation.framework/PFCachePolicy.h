//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFCachePolicy : NSObject
{
}

- (id)cacheEntryWithKey:(id)arg1 value:(id)arg2;
- (void)didRemoveAllCacheEntries;
- (void)didRemoveCacheEntry:(id)arg1;
- (void)didAddCacheEntry:(id)arg1;
- (id)willAddOrReplaceEntry:(id)arg1 add:(BOOL)arg2 contents:(id)arg3;
- (void)didGetCacheEntry:(id)arg1;
- (unsigned long long)capacityHint;

@end

