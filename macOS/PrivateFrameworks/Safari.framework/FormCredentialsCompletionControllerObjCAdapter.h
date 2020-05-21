//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/FormCompletionControllerObjCAdapter.h>

@class AutoFillLocalAuthenticationManager;

__attribute__((visibility("hidden")))
@interface FormCredentialsCompletionControllerObjCAdapter : FormCompletionControllerObjCAdapter
{
    AutoFillLocalAuthenticationManager *_autoFillLocalAuthenticationManager;
}

- (void).cxx_destruct;
- (id)_itemNameForAutoFillAuthorizationSheetWithItem:(const struct CompletionListItem *)arg1;
- (void)didRefreshCompletionListItems:(const Vector_e1d4bda3 *)arg1;
- (id)_firstExistingCellViewPassingTest:(CDUnknownBlockType)arg1;
- (void)_registerCredentialAutoFillTableViewCellClasses;
- (id)_url;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (struct FormCredentialsCompletionController *)_formCredentialsCompletionController;
@property(readonly, nonatomic) BOOL abortCompletionBlocked;
- (double)widthOfWidestCell;
- (id)initWithCompletionController:(struct FormCompletionController *)arg1;

@end

