//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/FormAutoFillCompletionControllerObjCAdapter.h>

#import <Safari/AutoFillLocalAuthenticationOperationDelegate-Protocol.h>
#import <Safari/WBSOneTimeCodeMonitorObserver-Protocol.h>

@class AutoFillAuthorizationController, AutoFillLocalAuthenticationManager, AutoFillLocalAuthenticationOperation, NSString, WBSOneTimeCodeMonitor;

__attribute__((visibility("hidden")))
@interface FormCompletionControllerObjCAdapter : FormAutoFillCompletionControllerObjCAdapter <AutoFillLocalAuthenticationOperationDelegate, WBSOneTimeCodeMonitorObserver>
{
    WBSOneTimeCodeMonitor *_cachedOneTimeCodeMonitor;
    AutoFillAuthorizationController *_autoFillAuthorizationController;
    BOOL _hasUserInteractedWithTouchID;
    AutoFillLocalAuthenticationOperation *_currentLocalAuthenticationOperation;
    AutoFillLocalAuthenticationManager *_autoFillLocalAuthenticationManager;
    BOOL __biometricAuthenticationStillInUse;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL _biometricAuthenticationStillInUse; // @synthesize _biometricAuthenticationStillInUse=__biometricAuthenticationStillInUse;
- (void)_updateTouchIDAvailabilityIfNecessary:(id)arg1;
- (void)_didToggleTouchIDToAutoFill:(id)arg1;
- (void)_updateCellAtIndex:(long long)arg1 inTableView:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_tableView;
- (void)_selectFirstCompletionItem;
- (void)updateBiometricAvailabilityInCompletionList:(BOOL)arg1;
- (void)_showBiometricMatchFailureFeedback;
- (void)_presentAuthenticationSheetWithCompletionListItem:(const struct CompletionListItem *)arg1;
- (id)_itemNameForAutoFillAuthorizationSheetWithItem:(const struct CompletionListItem *)arg1;
- (id)currentExternalizedContext;
- (void)_cancelCurrentLAOperation;
- (void)_cancelBiometricAuthentication;
- (void)_cancelBiometricAuthenticationIfPossible;
- (void)operation:(id)arg1 attemptedAuthenticationWithResult:(long long)arg2;
- (void)_requestBiometricAuthenticationIfNecessary;
- (BOOL)isAskingForBiometricAuthentication;
- (void)completionWindowDidHide;
- (void)completionWindowDidShow;
- (BOOL)shouldShowAuthenticationSheetForCompletionListItem:(const struct CompletionListItem *)arg1;
- (BOOL)performActionForListItem:(const struct CompletionListItem *)arg1 result:(char *)arg2 shouldAbortCompletion:(char *)arg3;
- (double)widthOfCellForItem:(struct CompletionListItem *)arg1;
- (void)consumeCode:(id)arg1;
- (void)codesUpdatedForOneTimeCodeMonitor:(id)arg1;
- (id)_oneTimeCodeMonitor;
- (void)_registerTableViewCellClasses;
- (struct FormCompletionController *)_formCompletionController;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)_updateBiometricPromptForTableViewIfNecessary:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)initWithFormCompletionController:(struct FormCompletionController *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

