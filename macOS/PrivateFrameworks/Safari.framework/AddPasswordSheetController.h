//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <Safari/NSControlTextEditingDelegate-Protocol.h>

@class NSButton, NSString, NSTextField, WBSSavedPasswordStore;

__attribute__((visibility("hidden")))
@interface AddPasswordSheetController : NSWindowController <NSControlTextEditingDelegate>
{
    WBSSavedPasswordStore *_passwordStore;
    BOOL _preservePendingTextFieldStrings;
    NSTextField *_websiteTextField;
    NSTextField *_userNameTextField;
    NSTextField *_passwordTextField;
    NSButton *_addButton;
    NSButton *_cancelButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) __weak NSTextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(nonatomic) __weak NSTextField *userNameTextField; // @synthesize userNameTextField=_userNameTextField;
@property(nonatomic) __weak NSTextField *websiteTextField; // @synthesize websiteTextField=_websiteTextField;
- (void)controlTextDidChange:(id)arg1;
- (void)hideSheetAndPrepareForReinstall;
- (void)_hideSheet;
- (void)_resetTextFields;
- (BOOL)_canSaveCurrentlyTypedPassword;
- (void)_cancelButtonWasClicked:(id)arg1;
- (void)_addButtonWasClicked:(id)arg1;
@property(readonly, nonatomic, getter=isShowingSheet) BOOL showingSheet;
- (void)showSheetInWindow:(id)arg1;
- (id)initWithPasswordStore:(id)arg1;
- (void)awakeFromNib;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

