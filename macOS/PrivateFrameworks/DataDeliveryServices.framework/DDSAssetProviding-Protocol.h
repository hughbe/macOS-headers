//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataDeliveryServices/NSObject-Protocol.h>

@class DDSAssetQuery, DDSAttributeFilter, NSArray, NSSet;
@protocol DDSAssetProvidingDelegate;

@protocol DDSAssetProviding <NSObject>
@property(retain, nonatomic) id <DDSAssetProvidingDelegate> delegate;
- (void)removeOldAssetsForAssertions:(NSSet *)arg1;
- (void)removeAssetsForAssertions:(NSSet *)arg1;
- (void)updateCatalogForAssetTypes:(NSSet *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (NSArray *)allContentItemsMatchingQuery:(DDSAssetQuery *)arg1 error:(id *)arg2;
- (NSArray *)contentItemsFromAssets:(NSArray *)arg1 matchingFilter:(DDSAttributeFilter *)arg2;
- (NSArray *)assetsForQuery:(DDSAssetQuery *)arg1 errorPtr:(id *)arg2;
- (void)beginDownloadForAssertions:(NSSet *)arg1;
@end

