//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/ENGroupContextMiddleware-Protocol.h>

@class ENGroup, ENGroupContext, ENGroupID, ENStableGroupID;

@protocol ENGroupContextCacheMiddleware <ENGroupContextMiddleware>
- (void)deleteCachedValueForForGroupContext:(ENGroupContext *)arg1 withGroupID:(ENGroupID *)arg2 completion:(void (^)(void))arg3;
- (void)deleteAllKnownGroupsForGroupContext:(ENGroupContext *)arg1 completion:(void (^)(void))arg2;
- (void)groupContext:(ENGroupContext *)arg1 fetchAllKnownGroups:(void (^)(NSArray *))arg2;
- (void)groupContext:(ENGroupContext *)arg1 latestCachedGroupWithStableID:(ENStableGroupID *)arg2 completion:(void (^)(ENGroup *))arg3;
- (void)groupContext:(ENGroupContext *)arg1 cachedGroupWithID:(ENGroupID *)arg2 completion:(void (^)(ENGroup *))arg3;
- (void)groupContext:(ENGroupContext *)arg1 cacheGroup:(ENGroup *)arg2 completion:(void (^)(void))arg3;
- (long long)middlewareCacheCostForContext:(ENGroupContext *)arg1;
@end

