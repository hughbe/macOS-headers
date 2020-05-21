//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCache.h>

__attribute__((visibility("hidden")))
@interface _NSMoribundCache : NSCache
{
}

- (void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setCountLimit:(unsigned long long)arg1;
- (unsigned long long)countLimit;
- (void)setTotalCostLimit:(unsigned long long)arg1;
- (unsigned long long)totalCostLimit;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;

@end

