//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/NSPopoverDelegate-Protocol.h>
#import <Safari/SafeAutoFillChoicesPopUpButtonViewControllerDelegate-Protocol.h>

@class CNContact, NSArray, NSButton, NSDictionary, NSImageView, NSMutableDictionary, NSMutableSet, NSStackView, NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface SafeAutoFillChoicesConfirmationPopoverViewController : NSViewController <NSPopoverDelegate, SafeAutoFillChoicesPopUpButtonViewControllerDelegate>
{
    NSDictionary *_displayData;
    NSString *_contactName;
    NSTextField *_textFieldForFittingSize;
    NSArray *_popUpButtonViewControllers;
    BOOL _isNameFieldGoingToBeFilled;
    NSMutableDictionary *_initiallySelectedAddressBookPropertiesToIdentifiersMap;
    CNContact *_contact;
    NSMutableSet *_availableLabels;
    NSArray *_addressBookMatchesForContact;
    NSMutableDictionary *_addressBookLabelsToPropertyNamesToPropertyIndexes;
    struct SafeAutoFillConfirmationController *_safeAutoFillConfirmationController;
    NSStackView *_addressBookDisplayDataStackView;
    NSButton *_autoFillButton;
    NSButton *_cancelButton;
    NSTextField *_contactNameLabel;
    NSImageView *_contactImageView;
}

+ (id)test_sortKeysForDisplayOrder:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak NSImageView *contactImageView; // @synthesize contactImageView=_contactImageView;
@property(nonatomic) __weak NSTextField *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property(nonatomic) __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak NSButton *autoFillButton; // @synthesize autoFillButton=_autoFillButton;
@property(nonatomic) __weak NSStackView *addressBookDisplayDataStackView; // @synthesize addressBookDisplayDataStackView=_addressBookDisplayDataStackView;
@property(nonatomic) struct SafeAutoFillConfirmationController *safeAutoFillConfirmationController; // @synthesize safeAutoFillConfirmationController=_safeAutoFillConfirmationController;
- (void)safeAutoFillChoicesPopUpButtonViewControllerDidChangeSelection:(id)arg1;
- (void)popoverWillClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (BOOL)_customizationsWereMadeInPopover;
- (void)_updateAutoFillButtonState;
- (id)_addressBookMatchesForDoNotFillFromSelectionsInPopover;
- (id)_addressBookMatchesToFillFromSelectionsInPopover;
- (id)_controlIDToAutoFillValues;
- (id)_preferredIdentifiersFromSelectionsInPopover;
- (void)_acceptAutoFill:(id)arg1;
- (void)_cancelAutoFill:(id)arg1;
- (double)_maximumPopupMenuWidth;
- (void)_constrainStackViewWithPopupButton;
- (void)_alignSectionTitlesInPopUpButtons;
- (void)_addPopUpButtonsToStackView;
- (void)_addPopUpButtonsToStackViewWithAddressBookDisplayData:(id)arg1 popUpButtonViewControllers:(id)arg2;
- (void)_setContactImageViewPropertiesForCircularImage;
- (void)viewDidLoad;
- (id)initWithSafeAutoFillConfirmationController:(struct SafeAutoFillConfirmationController *)arg1 addressBookDisplayData:(id)arg2 autoFillMatches:(id)arg3;
- (id)preferredAddressBookDataFromArray:(id)arg1;
- (id)_initialLabelForAddressBookDataInPopover;
- (void)_createAddressBookLabelsToPropertyNamesToPropertyIndexesMap;
- (void)_setDisplayDataAndContactNameFromArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

