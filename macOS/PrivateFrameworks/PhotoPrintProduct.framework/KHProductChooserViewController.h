//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXCollectionViewController.h>

#import <PhotoPrintProduct/KHProductViewDelegate-Protocol.h>
#import <PhotoPrintProduct/UXCollectionViewDataSource-Protocol.h>
#import <PhotoPrintProduct/UXCollectionViewDelegate-Protocol.h>

@class NSDictionary, NSSet, NSString, UXBarButtonItem, UXLabel;
@protocol KHProductChooserViewControllerDelegate;

@interface KHProductChooserViewController : UXCollectionViewController <UXCollectionViewDataSource, UXCollectionViewDelegate, KHProductViewDelegate>
{
    unsigned long long _viewDidAppearCalls;
    BOOL _compactMode;
    BOOL _productsUpdated;
    id <KHProductChooserViewControllerDelegate> _delegate;
    UXBarButtonItem *_cancelButtonItem;
    NSDictionary *_configurationOptions;
    NSSet *_chosenProducts;
    UXLabel *_bottomNoticeLabel;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL productsUpdated; // @synthesize productsUpdated=_productsUpdated;
@property(nonatomic) BOOL compactMode; // @synthesize compactMode=_compactMode;
@property(retain, nonatomic) UXLabel *bottomNoticeLabel; // @synthesize bottomNoticeLabel=_bottomNoticeLabel;
@property(nonatomic) __weak NSSet *chosenProducts; // @synthesize chosenProducts=_chosenProducts;
@property(retain, nonatomic) NSDictionary *configurationOptions; // @synthesize configurationOptions=_configurationOptions;
@property(readonly, nonatomic) UXBarButtonItem *cancelButtonItem; // @synthesize cancelButtonItem=_cancelButtonItem;
@property(nonatomic) __weak id <KHProductChooserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)themeChooserViewControllerBackButtonTitle;
- (void)productWasSelected:(id)arg1;
- (void)collectionView:(id)arg1 itemWasRightClickedAtIndexPath:(id)arg2 withEvent:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct NSEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)sizeOfCollectionViewCell;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)_disableScroll;
- (void)_enableScroll;
- (void)setBottomNoticeHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateBottomNoticeWithProduct:(id)arg1;
- (void)_initBottomNotice;
- (void)changeStoreNotificationReceived;
- (void)updatePricesInfo;
- (void)setCompactMode:(BOOL)arg1 forced:(BOOL)arg2;
- (void)windowDidResize:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (void)didSelectProduct:(id)arg1 withConfigurationOptions:(id)arg2;
- (long long)projectType;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

