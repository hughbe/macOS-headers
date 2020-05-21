//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCollectionViewDataSource-Protocol.h>

@class NSString, __NSDiffableDataSource;

@interface NSCollectionViewDiffableDataSource : NSObject <NSCollectionViewDataSource>
{
    __NSDiffableDataSource *_impl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) __NSDiffableDataSource *impl; // @synthesize impl=_impl;
- (BOOL)_isDiffableDataSource;
- (void)_applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)indexPathForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexPath:(id)arg1;
- (void)applySnapshot:(id)arg1 animatingDifferences:(BOOL)arg2;
- (id)snapshot;
@property(copy) CDUnknownBlockType supplementaryViewProvider;
@property(readonly, copy) NSString *description;
- (id)initWithCollectionView:(id)arg1 itemProvider:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

