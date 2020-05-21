//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPFinder/NSObject-Protocol.h>

@class NSArray, SPAdvertisementCacheSearchCriteria;

@protocol SPAdvertisementCaching <NSObject>
- (void)advertisementsForSearchCriteria:(SPAdvertisementCacheSearchCriteria *)arg1 completion:(void (^)(SPAdvertisementCacheSearchResult *))arg2;
- (void)markAdvertisementsProcessed:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)saveAdvertisements:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
@end

