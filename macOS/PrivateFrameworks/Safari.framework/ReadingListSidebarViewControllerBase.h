//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/SidebarContentViewController-Protocol.h>

@class BrowserWindowController, NSString, ReadingListTableViewController;

__attribute__((visibility("hidden")))
@interface ReadingListSidebarViewControllerBase : NSViewController <SidebarContentViewController>
{
    ReadingListTableViewController *_tableViewController;
    BrowserWindowController *_windowController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak BrowserWindowController *windowController; // @synthesize windowController=_windowController;
@property(retain, nonatomic) ReadingListTableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (id)_readingListTableView;
- (void)_selectReadingListItemWithRowIndexFromBlock:(CDUnknownBlockType)arg1;
- (void)wasInstalledBySidebarViewController:(id)arg1;
- (void)selectNextReadingListItem;
- (void)selectPreviousReadingListItem;
- (void)selectCurrentlyLoadedReadingListItem;
@property(readonly, nonatomic) BOOL canSelectAnyReadingListItem;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

