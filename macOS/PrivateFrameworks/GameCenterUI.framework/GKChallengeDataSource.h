//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKCollectionDataSource.h>

#import <GameCenterUI/GKDashboardChallengeDetailViewControllerDelegate-Protocol.h>

@class GKGameRecord, NSArray;

@interface GKChallengeDataSource : GKCollectionDataSource <GKDashboardChallengeDetailViewControllerDelegate>
{
    BOOL _shouldShowPlay;
    GKGameRecord *_gameRecord;
    NSArray *_challenges;
}

@property(retain, nonatomic) NSArray *challenges; // @synthesize challenges=_challenges;
@property(retain, nonatomic) GKGameRecord *gameRecord; // @synthesize gameRecord=_gameRecord;
@property(nonatomic) BOOL shouldShowPlay; // @synthesize shouldShowPlay=_shouldShowPlay;
- (void)userDidSelectPlay:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)sectionHeaderText;
- (id)itemForIndexPath:(id)arg1;
- (double)preferredCollectionHeight;
- (long long)itemCount;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)dealloc;
- (id)initWithGameRecord:(id)arg1;

@end

