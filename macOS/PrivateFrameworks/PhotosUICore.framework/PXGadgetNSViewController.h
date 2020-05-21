//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import <PhotosUICore/NSCollectionViewDataSource-Protocol.h>
#import <PhotosUICore/NSCollectionViewDelegateFlowLayout-Protocol.h>
#import <PhotosUICore/PXGadgetAnchorHelperDelegate-Protocol.h>
#import <PhotosUICore/PXGadgetDelegate-Protocol.h>
#import <PhotosUICore/PXGadgetNavigationHelperDelegate-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSCollectionView, NSMutableSet, NSScrollView, NSString, PXGadgetAnchorHelper, PXGadgetDataSource, PXGadgetDataSourceManager, PXGadgetNavigationHelper, PXGadgetSpecManager;
@protocol PXGadgetDelegate, PXGadgetTransition;

@interface PXGadgetNSViewController : UXViewController <NSCollectionViewDataSource, NSCollectionViewDelegateFlowLayout, PXGadgetAnchorHelperDelegate, PXGadgetNavigationHelperDelegate, PXSectionedDataSourceManagerObserver, PXGadgetDelegate>
{
    CDStruct_5f1286c4 _updateFlags;
    NSMutableSet *_registeredCellReuseIdentifiers;
    BOOL _isCurrentlyVisible;
    BOOL _isAnimating;
    NSCollectionView *_collectionView;
    NSScrollView *_scrollView;
    PXGadgetDataSourceManager *_dataSourceManager;
    PXGadgetDataSource *_dataSource;
    PXGadgetSpecManager *_specManager;
    PXGadgetNavigationHelper *_navigationHelper;
    PXGadgetAnchorHelper *_anchorHelper;
}

+ (Class)gadgetSpecClass;
- (void).cxx_destruct;
@property(retain, nonatomic) PXGadgetAnchorHelper *anchorHelper; // @synthesize anchorHelper=_anchorHelper;
@property(retain, nonatomic) PXGadgetNavigationHelper *navigationHelper; // @synthesize navigationHelper=_navigationHelper;
@property(retain, nonatomic) PXGadgetSpecManager *specManager; // @synthesize specManager=_specManager;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) BOOL isCurrentlyVisible; // @synthesize isCurrentlyVisible=_isCurrentlyVisible;
@property(retain, nonatomic) PXGadgetDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) PXGadgetDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void)_gadgetSpecDidChange;
- (void)_dataSourceDidChange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)navigationHelperDidNotFindValidGadget:(id)arg1;
- (BOOL)navigationHelperCanCurrentlyNavigate:(id)arg1;
- (id)gadgetDataSourceForNavigationHelper:(id)arg1;
- (BOOL)navigateToGadget:(id)arg1 animated:(BOOL)arg2;
- (BOOL)anchorHelper:(id)arg1 indexPathIsFullyVisible:(id)arg2;
- (id)sortedVisibleIndexPathsForAnchorHelper:(id)arg1;
@property(nonatomic) __weak id <PXGadgetDelegate> nextGadgetResponder;
@property(readonly, nonatomic) PXGadgetNavigationHelper *rootNavigationHelper;
@property(readonly, nonatomic) id <PXGadgetTransition> gadgetTransition;
- (void)dismissAlert:(id)arg1;
- (void)presentAlert:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dismissGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentGadgetViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)gadget:(id)arg1 transitionToViewController:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)gadgetViewControllerHostingGadget:(id)arg1;
- (void)gadget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2;
- (void)_gadgetSectionDidChange:(id)arg1;
- (void)_gadgetHeightDidChange;
- (void)gadget:(id)arg1 didChange:(unsigned long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)_configureSectionHeader:(id)arg1 withGadget:(id)arg2;
- (void)_updateSectionHeaderForGadget:(id)arg1;
- (id)_indexPathForGadget:(id)arg1;
- (id)_gadgetAtIndexPath:(id)arg1;
- (void)_updateGadgetsToSpecIfNeeded;
- (void)_updateHeadersIfNeeded;
- (void)_updateCollectionViewIfNeeded;
- (void)_updateIfNeeded;
- (void)_initializeDataSource;
- (void)_initializeHelpers;
- (void)_setupViewHierarchyAndConstraints;
- (void)viewDidDisappear;
- (void)viewWillLayout;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(readonly, nonatomic) BOOL isUpdateNeeded;
@property(readonly, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

