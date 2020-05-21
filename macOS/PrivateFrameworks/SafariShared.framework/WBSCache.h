//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable;
@protocol OS_dispatch_queue;

@interface WBSCache : NSObject
{
    NSCache *_cache;
    NSMapTable *_weakObjectsTable;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_recacheObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)init;

@end

