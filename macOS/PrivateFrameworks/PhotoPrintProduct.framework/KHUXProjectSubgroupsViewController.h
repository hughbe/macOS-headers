//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXViewController.h>

#import <PhotoPrintProduct/KHLayoutThumbnailManagerDelegate-Protocol.h>
#import <PhotoPrintProduct/KHPrintsProjectBundleControllerDelegate-Protocol.h>
#import <PhotoPrintProduct/NSMenuDelegate-Protocol.h>
#import <PhotoPrintProduct/NSTableViewDataSource-Protocol.h>
#import <PhotoPrintProduct/NSTableViewDelegate-Protocol.h>

@class KHLayoutThumbnailManager, KHPrintsProjectBundleController, KHProductSubgroupMenuController, KHUXPrintsCollectionViewController, NSMenu, NSString, NSTableView, UXView;

@interface KHUXProjectSubgroupsViewController : UXViewController <KHLayoutThumbnailManagerDelegate, KHPrintsProjectBundleControllerDelegate, NSTableViewDataSource, NSTableViewDelegate, NSMenuDelegate>
{
    NSTableView *_tableView;
    UXView *_separatorView;
    KHProductSubgroupMenuController *_addSizeMenuController;
    KHProductSubgroupMenuController *_changeSizeMenuController;
    NSMenu *_actionMenu;
    id _observer;
    BOOL _tableViewUpdating;
    KHPrintsProjectBundleController *_projectBundleController;
    KHUXPrintsCollectionViewController *_detailViewController;
    KHLayoutThumbnailManager *_thumbnailManager;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL tableViewUpdating; // @synthesize tableViewUpdating=_tableViewUpdating;
@property(readonly, nonatomic) NSMenu *actionMenu; // @synthesize actionMenu=_actionMenu;
@property(readonly, nonatomic) KHLayoutThumbnailManager *thumbnailManager; // @synthesize thumbnailManager=_thumbnailManager;
@property(retain, nonatomic) KHUXPrintsCollectionViewController *detailViewController; // @synthesize detailViewController=_detailViewController;
@property(readonly, nonatomic) KHPrintsProjectBundleController *projectBundleController; // @synthesize projectBundleController=_projectBundleController;
- (void)projectBundleControllerDidChangeContent:(id)arg1;
- (void)projectBundleControllerWillChangeContent:(id)arg1;
- (void)projectBundleController:(id)arg1 didChangeProjectSubgroupAtIndex:(id)arg2 forChangeType:(unsigned long long)arg3;
- (void)layoutThumbnailManager:(id)arg1 didRenderThumbnailForLayout:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)viewDidLoad;
- (void)remove:(id)arg1;
- (void)changeToProductSubgroup:(id)arg1;
- (void)addToProductSubgroup:(id)arg1;
- (void)updateSelection;
- (void)updateCellView:(id)arg1 forRow:(long long)arg2;
- (void)updateMenuControllers;
- (void)updateActionMenuIfNecessary;
@property(readonly, nonatomic) NSTableView *tableView;
- (void)dealloc;
- (id)initWithProjectBundleController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

