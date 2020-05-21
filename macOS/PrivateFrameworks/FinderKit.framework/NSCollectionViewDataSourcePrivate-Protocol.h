//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FinderKit/NSCollectionViewDataSource-Protocol.h>

@class NSCollectionView, NSCollectionViewItem, NSIndexPath, NSView;

@protocol NSCollectionViewDataSourcePrivate <NSCollectionViewDataSource>

@optional
- (NSCollectionViewItem *)collectionView:(NSCollectionView *)arg1 itemForRepresentedObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (id)collectionView:(NSCollectionView *)arg1 child:(long long)arg2 ofRepresentedObject:(id)arg3;
- (long long)collectionView:(NSCollectionView *)arg1 numberOfChildrenOfRepresentedObject:(id)arg2;
- (NSView *)rubberbandViewForCollectionView:(NSCollectionView *)arg1;
@end

