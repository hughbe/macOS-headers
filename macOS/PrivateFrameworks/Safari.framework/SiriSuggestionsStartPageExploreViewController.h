//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/CollectionViewPlusDelegate-Protocol.h>
#import <Safari/NSCollectionViewDataSource-Protocol.h>
#import <Safari/NSCollectionViewDelegate-Protocol.h>
#import <Safari/SiriSuggestionsStartPageExploreViewItemDelegate-Protocol.h>
#import <Safari/SiriSuggestionsStartPageItemHostedViewControllerProtocol-Protocol.h>

@class BackgroundColorView, CollectionViewPlus, ForYouRecommendationMediator, NSMapTable, NSMutableArray, NSString, NSView, WBSSiteMetadataManager;

__attribute__((visibility("hidden")))
@interface SiriSuggestionsStartPageExploreViewController : NSViewController <CollectionViewPlusDelegate, NSCollectionViewDelegate, NSCollectionViewDataSource, SiriSuggestionsStartPageExploreViewItemDelegate, SiriSuggestionsStartPageItemHostedViewControllerProtocol>
{
    CollectionViewPlus *_collectionView;
    NSMutableArray *_currentRecommendations;
    WBSSiteMetadataManager *_siteMetadataManager;
    NSMapTable *_recommendationMetadataTokens;
    BackgroundColorView *_welcomeView;
    BOOL _isVisible;
    BOOL _hasContentToDisplay;
    BOOL _usesPrivateBrowsing;
    BOOL _usesCompactAppearance;
    ForYouRecommendationMediator *_recommendationMediator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ForYouRecommendationMediator *recommendationMediator; // @synthesize recommendationMediator=_recommendationMediator;
@property(nonatomic) BOOL usesCompactAppearance; // @synthesize usesCompactAppearance=_usesCompactAppearance;
@property(nonatomic) BOOL usesPrivateBrowsing; // @synthesize usesPrivateBrowsing=_usesPrivateBrowsing;
@property(nonatomic) BOOL hasContentToDisplay; // @synthesize hasContentToDisplay=_hasContentToDisplay;
@property(readonly, nonatomic) double collapsedHeight;
@property(readonly, nonatomic) double expandedHeight;
- (void)willReuseItem:(id)arg1;
- (void)didSelectItem:(id)arg1 withEvent:(id)arg2;
- (void)didPerformContextMenuShowingEventForItem:(id)arg1 withEvent:(id)arg2;
- (void)_updateImageForRecommendation:(id)arg1;
- (void)_scheduleRecommendationUpdate:(id)arg1;
- (void)_scheduleHandoffApplicationUpdate:(id)arg1;
- (void)_navigateToRecommendation:(id)arg1 withPolicy:(long long)arg2;
- (struct TabPlacementHint)_tabPlacementHint;
- (id)_debugToolTipForRecommendation:(id)arg1;
- (id)_enqueueTouchIconRequestForRecommendationItem:(id)arg1 title:(id)arg2 url:(id)arg3;
- (id)_enqueueLeadImageRequestForRecommendationItem:(id)arg1 title:(id)arg2 url:(id)arg3;
- (id)_enqueueSiteMetadataRequestForRecommendationItem:(id)arg1 title:(id)arg2 url:(id)arg3;
- (unsigned long long)_numberOfTimesWelcomeViewHasBeenShown;
- (void)_incrementWelcomeViewTimesShownCounterIfApplicableBy:(unsigned long long)arg1;
- (BOOL)_shouldShowWelcomeView;
- (void)_didSelectWelcomeViewCloseButton:(id)arg1;
- (void)_uninstallWelcomeView;
- (id)_welcomeString;
- (void)_installWelcomeView;
- (void)_fetchHandoffResult;
- (unsigned long long)_existingHandoffRecommendationIndex;
- (void)_updateRecommendationsForTopics:(id)arg1;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
@property(readonly, nonatomic) BOOL supportsCollapsing;
@property(readonly, nonatomic) BOOL isPerformingSizingAnimation;
- (void)_cleanUp;
- (void)dealloc;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSView *leadingAccessoryView;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title;

@end

