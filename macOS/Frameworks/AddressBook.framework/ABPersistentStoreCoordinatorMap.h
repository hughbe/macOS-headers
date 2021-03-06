//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABPersistentStoreCoordinatorFactory, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ABPersistentStoreCoordinatorMap : NSObject
{
    NSMutableDictionary *_cache;
    ABPersistentStoreCoordinatorFactory *_coordinatorFactory;
}

+ (id)coordinatorKeyForStoreDescription:(id)arg1;
+ (id)cacheKeyForAllSources;
+ (id)cacheKeyForDatabasePath:(id)arg1;
- (id)nts_coordinatorWithCacheKey:(id)arg1 coordinatorKey:(id)arg2;
- (id)coordinatorWithCacheKey:(id)arg1 coordinatorKey:(id)arg2;
- (id)allCacheKeys;
- (id)nts_cacheEntryWithKeyAddingIfAbsent:(id)arg1;
- (id)nts_coordinatorWithDatabasePath:(id)arg1 storeDescription:(id)arg2;
- (id)coordinatorWithDatabasePath:(id)arg1 storeDescription:(id)arg2;
- (void)nts_logInitialStoresForCoordinator:(id)arg1;
- (void)nts_updateCacheEntry:(id)arg1 withResults:(id)arg2;
- (id)nts_resultsFromCacheEntry:(id)arg1;
- (id)nts_coordinatorForAllSourcesAndDidUpdateMap:(char *)arg1;
- (id)coordinatorForAllSourcesAndDidUpdateMap:(char *)arg1;
- (void)dealloc;
- (id)initWithCoordinatorFactory:(id)arg1;

@end

