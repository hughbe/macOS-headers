//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/CompletionUIPresentationControllerDelegate-Protocol.h>
#import <Safari/NSTableViewDataSource-Protocol.h>
#import <Safari/NSTableViewDelegate-Protocol.h>

@class NSHashTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface FormAutoFillCompletionControllerObjCAdapter : NSObject <NSTableViewDataSource, NSTableViewDelegate, CompletionUIPresentationControllerDelegate>
{
    struct FormAutoFillCompletionController *_completionController;
    NSMutableSet *_completionAbortingNotificationNames;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)removeAutoFillControllerObserver:(id)arg1;
- (void)registerAutoFillControllerObserver:(id)arg1;
- (BOOL)performActionForListItem:(const struct CompletionListItem *)arg1 result:(char *)arg2 shouldAbortCompletion:(char *)arg3;
- (void)didRefreshCompletionListItems:(const Vector_e1d4bda3 *)arg1;
- (void)_registerForCompletionAbortingNotificationNamed:(id)arg1 object:(id)arg2;
- (void)_unregisterForCompletionAbortingNotifications;
- (void)_registerForCompletionAbortingNotifications;
- (BOOL)shouldAbortCompletionFromNotification:(id)arg1;
- (void)_abortCompletionFromNotification:(id)arg1;
- (id)_completionListTableView;
- (void)completionWindowDidHide;
- (void)completionWindowDidShow;
- (void)completionWindowWillShow;
- (void)invalidate;
- (struct FormAutoFillCompletionController *)completionController;
- (id)initWithCompletionController:(struct FormAutoFillCompletionController *)arg1;
- (void)completionUIPresentationControllerDidFinishPresentationAnimation:(id)arg1;
- (void)completionUIPresentationControllerWillStartPresentationAnimation:(id)arg1;
- (BOOL)completionListTableView:(id)arg1 rowSpansAllColumns:(long long)arg2;
- (void)completionListTableView:(id)arg1 mouseUpInRow:(long long)arg2;
- (long long)completionListTableViewUserInterfaceLayoutDirection:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (void)_updateSeparatorStateForItem:(struct CompletionListItem *)arg1 tableView:(id)arg2 rowView:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

