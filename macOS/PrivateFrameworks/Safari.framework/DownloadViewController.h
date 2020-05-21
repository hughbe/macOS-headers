//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import <Safari/NSTableViewDataSource-Protocol.h>
#import <Safari/NSTableViewDelegate-Protocol.h>

@class DownloadTableView, NSMutableArray, NSString;
@protocol DownloadViewControllerDataSource, DownloadViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface DownloadViewController : NSResponder <NSTableViewDelegate, NSTableViewDataSource>
{
    DownloadTableView *_tableView;
    NSMutableArray *_downloadEntries;
    id <DownloadViewControllerDataSource> _dataSource;
    id <DownloadViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *downloadEntries; // @synthesize downloadEntries=_downloadEntries;
@property(nonatomic) __weak id <DownloadViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DownloadViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (BOOL)accessibilityPerformShowMenuForTableView:(id)arg1;
- (id)tableView:(id)arg1 menuForEvent:(id)arg2;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)paste:(id)arg1;
- (BOOL)_canPaste;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)removeIdleEntries;
- (void)_removeSelection;
- (BOOL)_canRemoveSelection;
- (BOOL)_canRemoveEntries:(id)arg1;
- (void)_removeEntries:(id)arg1;
- (void)_undoRemoveEntries:(id)arg1;
- (void)_redoRemoveEntries:(id)arg1;
- (void)copy:(id)arg1;
- (void)_copySelection;
- (BOOL)_canCopySelection;
- (BOOL)_canCopyEntries:(id)arg1;
- (void)_copyEntries:(id)arg1;
- (void)stopResume:(id)arg1;
- (void)cancel:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)_stopSelection;
- (BOOL)_canStopSelection;
- (BOOL)_canStopEntries:(id)arg1;
- (void)_stopEntries:(id)arg1;
- (void)_resumeSelection;
- (BOOL)_canResumeSelection;
- (BOOL)_canResumeEntries:(id)arg1;
- (void)_resumeEntries:(id)arg1;
- (void)reveal:(id)arg1;
- (void)_revealSelection;
- (BOOL)_canRevealSelection;
- (BOOL)_canRevealEntries:(id)arg1;
- (void)_revealEntries:(id)arg1;
- (void)open:(id)arg1;
- (void)_openSelection:(id)arg1;
- (BOOL)_canOpenSelection;
- (BOOL)_canOpenEntries:(id)arg1;
- (void)_openEntries:(id)arg1;
- (BOOL)_validateEntries:(id)arg1 withBooleanKey:(id)arg2;
- (id)_selectedEntries;
- (BOOL)acceptsFirstResponder;
- (void)downloadDidStart:(id)arg1;
- (void)downloadsDidChange:(id)arg1;
- (void)_removeEntry:(id)arg1;
- (struct CGSize)bestSize;
- (void)_noteSizeDidChange;
- (void)_setShouldHideSeparator:(BOOL)arg1 forRowAtIndex:(long long)arg2;
- (void)_updateTableViewRowSeparatorsWithCandidateSelectionRow:(long long)arg1;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)dealloc;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)awakeFromNib;
- (void)reloadDownloadsView;
- (void)_addAllEntries;
- (void)_insertEntry:(id)arg1 atIndex:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

