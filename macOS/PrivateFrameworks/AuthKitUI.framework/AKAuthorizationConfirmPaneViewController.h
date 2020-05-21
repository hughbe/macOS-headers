//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationPaneViewController.h>

#import <AuthKitUI/AKAuthorizationEditableDataSources-Protocol.h>
#import <AuthKitUI/AKAuthorizationEmailScopeViewControllerDelegate-Protocol.h>
#import <AuthKitUI/AKAuthorizationNameScopeViewControllerDelegate-Protocol.h>
#import <AuthKitUI/AKAuthorizationPasswordAuthenticationDelegate-Protocol.h>
#import <AuthKitUI/AKAuthorizationSubPaneConfirmButtonDelegate-Protocol.h>

@class AKAuthorizationEmailScopeViewController, AKAuthorizationNameScopeViewController, AKAuthorizationPresentationContext, AKAuthorizationScopeChoices, AKAuthorizationSubPaneConfirmButton, AKAuthorizationSubPaneImage, AKTiburonAuthorizationUIReport, AKUserInformation, NSArray, NSString;

@interface AKAuthorizationConfirmPaneViewController : AKAuthorizationPaneViewController <AKAuthorizationSubPaneConfirmButtonDelegate, AKAuthorizationPasswordAuthenticationDelegate, AKAuthorizationNameScopeViewControllerDelegate, AKAuthorizationEmailScopeViewControllerDelegate, AKAuthorizationEditableDataSources>
{
    AKTiburonAuthorizationUIReport *_analyticsReport;
    BOOL _editableScopeChoicesChanged;
    BOOL _internalIsEditingName;
    AKAuthorizationScopeChoices *_editableScopeChoices;
    AKAuthorizationPresentationContext *_presentationContext;
    AKUserInformation *_editingUserInformation;
    unsigned long long _editingGivenNameIndex;
    unsigned long long _editingFamilyNameIndex;
    AKAuthorizationSubPaneImage *_imageSubPane;
    AKAuthorizationSubPaneConfirmButton *_confirmButton;
    NSArray *_validatedScopes;
    AKAuthorizationNameScopeViewController *_nameScopeViewController;
    AKAuthorizationEmailScopeViewController *_emailScopeViewController;
}

- (void).cxx_destruct;
@property __weak AKAuthorizationEmailScopeViewController *emailScopeViewController; // @synthesize emailScopeViewController=_emailScopeViewController;
@property __weak AKAuthorizationNameScopeViewController *nameScopeViewController; // @synthesize nameScopeViewController=_nameScopeViewController;
@property(readonly) NSArray *validatedScopes; // @synthesize validatedScopes=_validatedScopes;
@property(retain) AKAuthorizationSubPaneConfirmButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain) AKAuthorizationSubPaneImage *imageSubPane; // @synthesize imageSubPane=_imageSubPane;
@property unsigned long long editingFamilyNameIndex; // @synthesize editingFamilyNameIndex=_editingFamilyNameIndex;
@property unsigned long long editingGivenNameIndex; // @synthesize editingGivenNameIndex=_editingGivenNameIndex;
@property(copy) AKUserInformation *editingUserInformation; // @synthesize editingUserInformation=_editingUserInformation;
@property BOOL internalIsEditingName; // @synthesize internalIsEditingName=_internalIsEditingName;
@property(readonly) AKAuthorizationPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property BOOL editableScopeChoicesChanged; // @synthesize editableScopeChoicesChanged=_editableScopeChoicesChanged;
@property(readonly) AKAuthorizationScopeChoices *editableScopeChoices; // @synthesize editableScopeChoices=_editableScopeChoices;
- (id)init;
- (void)emailScopeViewController:(id)arg1 didSelectEmail:(id)arg2 protected:(BOOL)arg3;
- (void)scopeViewController:(id)arg1 didEndEditingField:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)scopeViewController:(id)arg1 didChangeEditableField:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)scopeViewController:(id)arg1 didSelectEditClear:(BOOL)arg2;
- (void)passwordAuthenticationCompletedWithResults:(id)arg1 error:(id)arg2;
- (BOOL)validateReadyForAuthorization;
- (void)performAuthorization;
- (void)performPasswordAuthentication;
- (void)subpaneConfirmButtonDidFailBiometry:(id)arg1;
- (void)subPaneConfirmButtonDidEnterProcessingState:(id)arg1;
- (void)_paneDelegate_authorizationPaneViewControllerDidRequestAuthorizationWithUserProvidedInformation:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_paneDelegate_authorizationPaneViewControllerDismissWithAuthorization:(id)arg1 error:(id)arg2;
- (void)_handleAuthorizationError:(id)arg1;
- (void)_setCancelButtonEnabled:(BOOL)arg1;
- (void)didSelectEditScope:(id)arg1 options:(id)arg2;
- (void)_performPasswordAuthentication;
- (void)_performAuthorizationWithRawPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_performAuthorizationWithRawPassword:(id)arg1;
- (id)_localizedEmailKey;
- (id)_localizedNameKey;
- (void)_useOtherIDButtonSelected:(id)arg1;
- (void)_createIconViewWithIcon:(id)arg1;
- (void)_updateIconViewWithIconContext:(id)arg1;
- (void)_fetchWebIconIfNeeded;
- (void)_setupIconView;
- (void)_addUseOtherIDButtonToContext:(id)arg1;
- (void)_enableOrDisableConfirmButton;
- (void)_addAuthorizationButtonToPaneContext:(id)arg1;
- (id)_infoLabelText;
@property(readonly) BOOL _shouldAllowAuthorization;
- (BOOL)_emailScopeAllowsAuthorization;
- (BOOL)_nameScopeAllowsAuthorization;
- (BOOL)_hasAnyScope;
- (BOOL)_hasEmailScope;
- (BOOL)_hasNameScope;
- (void)_cancelButtonSelected:(id)arg1;
- (id)_cancelBarButtonItem;
- (void)_addEmailScopeToContext:(id)arg1;
- (id)_newStackView;
- (void)_addNameScopeToContext:(id)arg1;
- (void)_addSeparatorToContext:(id)arg1;
- (void)_updateDataSourceWithValidEditingName;
- (BOOL)_isValidEditingName;
- (BOOL)_getValidEditingGivenName:(id *)arg1 familyName:(id *)arg2;
- (id)_textFromTextField:(id)arg1;
- (void)_setFamilyNameFromTextField:(id)arg1;
- (void)_setGivenNameFromTextField:(id)arg1;
- (void)_nameEditDone;
- (id)_textFieldForRow:(unsigned long long)arg1;
- (void)_endEditing;
- (void)_beginEditingRow:(unsigned long long)arg1;
- (void)_beginEditing;
- (void)_transitionFromEditingNameAnimated:(BOOL)arg1;
- (void)_transitionToEditingNameAnimated:(BOOL)arg1;
- (void)_setEditingName:(BOOL)arg1 clearing:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setEditingNameClearing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEditingName:(BOOL)arg1 animated:(BOOL)arg2;
@property(getter=isEditingName) BOOL editingName;
- (void)setEmailExpanded:(BOOL)arg1 animated:(BOOL)arg2;
@property(getter=isEmailExpanded) BOOL emailExpanded;
- (void)setPaneDelegate:(id)arg1;
- (void)_reloadData;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)_setupValidatedScopes;
- (id)initWithAuthorizationContext:(id)arg1 scopeChoices:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

