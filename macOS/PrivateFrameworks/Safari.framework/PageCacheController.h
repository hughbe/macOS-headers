//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Safari/ReopensAtLaunch-Protocol.h>

@class NSButton, NSMatrix, NSMutableArray, NSOutlineView;

__attribute__((visibility("hidden")))
@interface PageCacheController : NSWindowController <ReopensAtLaunch>
{
    NSMatrix *pageCacheStatisticsMatrix;
    NSOutlineView *outlineView;
    NSButton *pageCacheEnabledCheckbox;
    NSButton *pageCacheSupportsPluginsCheckbox;
    NSMutableArray *frameItems;
}

+ (void)reopen;
+ (id)sharedPageCacheController;
- (void).cxx_destruct;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)refreshOverview:(id)arg1;
- (void)refreshCacheability:(id)arg1;
- (void)forceAutorelease:(id)arg1;
- (void)togglePageCacheSupportsPlugins:(id)arg1;
- (void)togglePageCacheEnabled:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;

@end

