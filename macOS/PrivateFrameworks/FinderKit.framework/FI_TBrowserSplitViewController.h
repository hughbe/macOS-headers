//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSSplitViewController.h>

@class FI_TBrowserViewController, FI_TSplitView, FI_TTagColumnTableViewController, FI_TUpdateLayerView, NSSplitViewItem, NSView;

__attribute__((visibility("hidden")))
@interface FI_TBrowserSplitViewController : NSSplitViewController
{
    struct TNSRef<NSSplitViewItem, void> _browserSplitViewItem;
    struct TNSRef<NSView, void> _browserView;
    struct TNSRef<FI_TBrowserViewController, void> _browserViewController;
    struct TNSRef<NSSplitViewItem, void> _tagsSplitViewItem;
    struct TNSRef<FI_TTagColumnTableViewController, void> _tagColumnTableViewController;
    double _tagsColumnWidthCache;
}

+ (id)keyPathsForValuesAffectingIsTagsColumnCollapsed;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (_Bool)tagsColumnHasFocus;
- (void)saveTagsColumnWidthToDisk:(double)arg1;
- (void)setTagsColumnSelection:(const struct TFENode *)arg1;
- (void)removeTagsColumn;
- (void)addTagsColumn:(id)arg1 containerLayoutManager:(id)arg2;
- (void)setTagsColumnCollapsed:(_Bool)arg1 delegate:(id)arg2 containerLayoutManager:(id)arg3;
- (void)collapseTagsColumn;
- (void)expandTagsColumn:(id)arg1 containerLayoutManager:(id)arg2;
@property(readonly, nonatomic) _Bool isTagsColumnCollapsed; // @dynamic isTagsColumnCollapsed;
- (id)tagsColumnView;
@property(readonly, nonatomic) NSSplitViewItem *tagsSplitViewItem; // @dynamic tagsSplitViewItem;
@property(retain, nonatomic) FI_TTagColumnTableViewController *tagColumnTableViewController;
@property(retain, nonatomic) FI_TBrowserViewController *browserViewController;
- (void)addBrowserViewToBrowserColumnView;
@property(retain, nonatomic) NSView *browserView; // @dynamic browserView;
@property(readonly, retain, nonatomic) FI_TUpdateLayerView *browserColumnView; // @dynamic browserColumnView;
@property(retain) FI_TSplitView *splitView; // @dynamic splitView;
- (void)aboutToTearDown;
- (void)viewDidLoad;
- (BOOL)_viewControllerSupports10_10Features;
- (id)initWithFrame:(const struct CGRect *)arg1;

// Remaining properties
@property(readonly, nonatomic) _Bool isPreviewColumnCollapsed; // @dynamic isPreviewColumnCollapsed;

@end

