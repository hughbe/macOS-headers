//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Safari/NSWindowDelegate-Protocol.h>

@class NSButton, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface SheetWithTableController : NSWindowController <NSWindowDelegate>
{
    NSTableView *tableView;
    NSButton *removeButton;
    NSButton *removeAllButton;
}

- (void).cxx_destruct;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 keyDown:(id)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 keyDown:(id)arg2;
- (void)delete:(id)arg1;
- (void)reloadTableData;
- (void)removeAllItems:(id)arg1;
- (void)removeSelectedItems:(id)arg1;
- (void)hideSheet:(id)arg1;
- (void)showSheetInWindow:(id)arg1;
- (void)updateRemoveButtons;
- (BOOL)canRemoveAllItems;
- (BOOL)canRemoveSelectedItems;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

