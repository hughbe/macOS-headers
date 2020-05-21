//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/NSObject-Protocol.h>

@class NSCollectionView, NSCollectionViewItem, NSIndexPath, NSString, NSView;

@protocol NSCollectionViewDataSource <NSObject>
- (NSCollectionViewItem *)collectionView:(NSCollectionView *)arg1 itemForRepresentedObjectAtIndexPath:(NSIndexPath *)arg2;
- (long long)collectionView:(NSCollectionView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (NSView *)collectionView:(NSCollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (long long)numberOfSectionsInCollectionView:(NSCollectionView *)arg1;
@end

