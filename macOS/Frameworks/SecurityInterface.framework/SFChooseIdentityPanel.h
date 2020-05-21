//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSPanel.h>

@interface SFChooseIdentityPanel : NSPanel
{
    id _reserved_SFChooseIdentityPanel;
}

+ (id)sharedChooseIdentityPanel;
- (BOOL)certificatesDisclosed;
- (void)setCertificatesDisclosed:(BOOL)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)informativeText;
- (void)setInformativeText:(id)arg1;
- (id)policies;
- (void)setPolicies:(id)arg1;
- (void)setAlternateButtonTitle:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (BOOL)showsHelp;
- (void)setShowsHelp:(BOOL)arg1;
- (id)helpAnchor;
- (void)setHelpAnchor:(id)arg1;
- (struct __SecIdentity *)identity;
- (void)beginSheetForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(void *)arg4 identities:(id)arg5 message:(id)arg6;
- (long long)runModalForIdentities:(id)arg1 message:(id)arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;
- (void)setDefaultInformation:(id)arg1;
- (void)setDefaultMessage:(id)arg1;
- (void)_setRunAsSheet:(BOOL)arg1;
- (void)_setSavedDelegate:(id)arg1;
- (void)_setDidEndSelector:(SEL)arg1;
- (void)_setContextInfo:(void *)arg1;
- (void)_setParentWindowForSheet:(id)arg1;
- (void)set_showCertButton:(id)arg1;
- (void)set_aboveContentHeightConstraint:(id)arg1;
- (void)set_bottomContentBox:(id)arg1;
- (void)set_discloseContentBox:(id)arg1;
- (void)set_aboveContentBox:(id)arg1;
- (void)set_informationField:(id)arg1;
- (void)set_messageField:(id)arg1;
- (void)set_iconView:(id)arg1;
- (void)set_certTable:(id)arg1;
- (void)set_cancelButton:(id)arg1;
- (void)set_okButton:(id)arg1;
- (void)set_helpButton:(id)arg1;
- (void)set_alternateButton:(id)arg1;
- (void)set_defaultButton:(id)arg1;
- (void)set_panel:(id)arg1;
- (void)set_certGroupView:(id)arg1;
- (void)set_certView:(id)arg1;
- (void)setRef:(id *)arg1 toObj:(id)arg2;
- (BOOL)_showsCertButton;
- (id)_defaultHelpAnchor;
- (id)_defaultInformation;
- (id)_defaultMessage;
- (id)_identities;
- (long long)_indexOfChosenIdentity;
- (id)_showCertButton;
- (id)_aboveContentHeightConstraint;
- (id)_bottomContentBox;
- (id)_discloseContentBox;
- (id)_aboveContentBox;
- (id)_informationField;
- (id)_messageField;
- (id)_iconView;
- (BOOL)_runAsSheet;
- (id)_alternateButtonTitle;
- (id)_defaultButtonTitle;
- (id)_certDataArray;
- (struct __SecTrust *)_trust;
- (void *)_clientContextInfo;
- (id)_clientDelegate;
- (SEL)_clientDidEndSelector;
- (id)_parentWindowForSheet;
- (id)_certTable;
- (id)_helpButton;
- (id)_alternateButton;
- (id)_defaultButton;
- (id)_panel;
- (id)_certGroupView;
- (id)_certView;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(int)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (int)numberOfRowsInTableView:(id)arg1;
- (id)_dataAtIndex:(int)arg1;
- (void)_helpClicked:(id)arg1;
- (void)_doubleClickAction:(id)arg1;
- (void)_discloseCertificates:(BOOL)arg1;
- (void)_discloseClicked:(id)arg1;
- (void)_cancelClicked:(id)arg1;
- (void)_okClicked:(id)arg1;
- (void)_dismissWithCode:(long long)arg1;
- (void)_runFullDialogSheet;
- (long long)_runFullDialog;
- (void)_chooseIdentitySheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)_updateIdentityPreference:(struct __SecIdentity *)arg1 domain:(id)arg2;
- (void)_prepPanel:(id)arg1 identities:(id)arg2;
- (id)_initWithNib:(id)arg1;
- (id)_reserved_SFChooseIdentityPanel;

@end

