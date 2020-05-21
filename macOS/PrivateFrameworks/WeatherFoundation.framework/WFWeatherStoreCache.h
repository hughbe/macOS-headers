//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSTimer, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WFWeatherStoreCache : NSObject
{
    NSURL *_URL;
    NSTimer *_cacheStoreTimer;
    NSObject<OS_dispatch_queue> *_cacheConcurrentQueue;
    NSMutableDictionary *_cacheForDomain;
    NSMutableSet *_dirtyCacheDomains;
}

+ (BOOL)removeObjectsFromCache:(id)arg1 passingTest:(CDUnknownBlockType)arg2;
+ (id)createCacheIfNecessary:(id)arg1 error:(id *)arg2;
+ (id)wf_masterDomains;
- (void).cxx_destruct;
@property(retain) NSMutableSet *dirtyCacheDomains; // @synthesize dirtyCacheDomains=_dirtyCacheDomains;
@property(retain) NSMutableDictionary *cacheForDomain; // @synthesize cacheForDomain=_cacheForDomain;
@property(retain) NSObject<OS_dispatch_queue> *cacheConcurrentQueue; // @synthesize cacheConcurrentQueue=_cacheConcurrentQueue;
@property(retain, nonatomic) NSTimer *cacheStoreTimer; // @synthesize cacheStoreTimer=_cacheStoreTimer;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)_concurrentQueue_barrier_removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;
- (void)_concurrentQueue_barrier_deleteOldDataFromCache;
- (void)_ensureDomainIsLoaded:(id)arg1;
- (id)_dirtyCacheDomains;
- (id)_loadedCacheDomains;
- (void)_markDomainDirty:(id)arg1;
- (BOOL)_concurrentQueue_barrier_loadDomain:(id)arg1;
- (BOOL)_loadDomain:(id)arg1;
- (void)_concurrentQueue_barrier_shrinkDomain:(id)arg1;
- (void)_shrinkDomain:(id)arg1;
- (void)executeTransaction:(CDUnknownBlockType)arg1;
- (void)removeAllObjects;
- (void)removeObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)cache:(id)arg1 withinDomain:(id)arg2 date:(id)arg3 forKey:(id)arg4 expiration:(id)arg5 synchronous:(BOOL)arg6;
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3 expiration:(id)arg4;
- (void)cache:(id)arg1 withinDomain:(id)arg2 forKey:(id)arg3;
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2 staleness:(unsigned long long)arg3;
- (id)cachedObjectWithinDomain:(id)arg1 forKey:(id)arg2;
- (void)_concurrentQueue_barrier_writeCacheDictionaryToFile;
- (void)writeCacheDictionaryToFile;
- (void)deleteOldDataFromCache:(id)arg1 allowedStaleness:(unsigned long long)arg2;
- (void)_stopCacheStoreTimer;
- (void)_startCacheStoreTimer;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

