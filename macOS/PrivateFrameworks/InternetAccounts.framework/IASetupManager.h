//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <InternetAccounts/IANewAccountChooserControllerDelegateProtocol-Protocol.h>

@class IAAccount, IANewAccountChooserController, IASetupViewController, NSArray, NSButton, NSString, NSTextField, NSView, NSWindow;

@interface IASetupManager : NSWindowController <IANewAccountChooserControllerDelegateProtocol>
{
    CDUnknownBlockType _completion;
    NSView *_currentSubview;
    IANewAccountChooserController *_accountChooser;
    NSWindow *_mainWindow;
    BOOL _showAccountChooser;
    NSButton *_backButton;
    NSButton *_nextButton;
    NSButton *_cancelButton;
    NSButton *_cancelButtonChooser;
    NSButton *_continueButton;
    NSWindow *_chooserWindow;
    NSTextField *_chooserTitle;
    NSTextField *_getStartedText;
    NSArray *_services;
    IAAccount *_account;
    IASetupViewController *_viewController;
    NSString *_otherRowLabel;
    IASetupManager *_me;
}

- (void).cxx_destruct;
@property(retain) IASetupManager *me; // @synthesize me=_me;
@property(readonly) IANewAccountChooserController *accountChooser; // @synthesize accountChooser=_accountChooser;
@property(retain) NSString *otherRowLabel; // @synthesize otherRowLabel=_otherRowLabel;
@property BOOL showAccountChooser; // @synthesize showAccountChooser=_showAccountChooser;
@property(retain) NSView *currentSubview; // @synthesize currentSubview=_currentSubview;
@property(retain) IASetupViewController *viewController; // @synthesize viewController=_viewController;
@property(retain) IAAccount *account; // @synthesize account=_account;
@property(retain) NSArray *services; // @synthesize services=_services;
@property __weak NSTextField *getStartedText; // @synthesize getStartedText=_getStartedText;
@property __weak NSTextField *chooserTitle; // @synthesize chooserTitle=_chooserTitle;
@property __weak NSWindow *chooserWindow; // @synthesize chooserWindow=_chooserWindow;
@property __weak NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property __weak NSButton *cancelButtonChooser; // @synthesize cancelButtonChooser=_cancelButtonChooser;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *nextButton; // @synthesize nextButton=_nextButton;
@property __weak NSButton *backButton; // @synthesize backButton=_backButton;
- (void)updateCancelButtons;
- (id)_childAccountsFromFoundAListAccounts:(id)arg1;
- (id)_accountWithProvider:(id)arg1 fromArray:(id)arg2;
- (void)help:(id)arg1;
- (void)continue:(id)arg1;
- (void)cancel:(id)arg1;
- (void)next:(id)arg1;
- (void)back:(id)arg1;
- (id)_otherRowLabelForEnvironment;
- (id)_chooserTitleForEnvironment;
- (id)_serviceNameForEnvironment;
- (void)alistPluginDidCancel:(id)arg1;
- (void)alistPluginDidCreateAccount:(id)arg1;
- (void)_beginBListAccountSetup;
- (void)_beginAccountChooser;
- (void)showOtherAccountsSheet;
- (void)accountSetupAddNew:(id)arg1;
- (void)closeWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateButtons;
- (void)installChooserView:(id)arg1;
- (void)updateView:(id)arg1;
- (void)endSetupManagerWithError:(id)arg1;
- (void)beginSetupInWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithServices:(id)arg1;

@end

