//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSIndexSet, NSPredicate;
@protocol PXDisplayAsset, PXDisplayAssetCollection;

@protocol PXCuratedLibraryMutableAssetsDataSourceManager
@property(copy, nonatomic) NSPredicate *allPhotosFilterPredicate;
@property(nonatomic) long long zoomLevel;
- (void)resumeChangeDelivery:(id)arg1;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1;
- (void)setTransientKeyAsset:(id <PXDisplayAsset>)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2 zoomLevel:(long long)arg3;
- (BOOL)forceAccurateAllSectionsIfNeeded;
- (BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (BOOL)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1 inZoomLevel:(long long)arg2;
- (BOOL)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1;
- (void)loadIfNeeded;
@end

