//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPeopleConfirmationViewController.h>

@class NSArray, UXBarButtonItem;

@interface PXPeopleFullscreenConfirmationViewController : PXPeopleConfirmationViewController
{
    UXBarButtonItem *_confirmButton;
    UXBarButtonItem *_denyButton;
    UXBarButtonItem *_doneButtonItem;
    NSArray *_cachedConfirmationToolbarItems;
    NSArray *_cachedLoadingToolbarItems;
}

- (void).cxx_destruct;
@property(retain) NSArray *cachedLoadingToolbarItems; // @synthesize cachedLoadingToolbarItems=_cachedLoadingToolbarItems;
@property(retain) NSArray *cachedConfirmationToolbarItems; // @synthesize cachedConfirmationToolbarItems=_cachedConfirmationToolbarItems;
@property(retain) UXBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain) UXBarButtonItem *denyButton; // @synthesize denyButton=_denyButton;
@property(retain) UXBarButtonItem *confirmButton; // @synthesize confirmButton=_confirmButton;
- (void)_setupToolbarItemsIfNeeded;
- (id)_newButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 keyEquivalent:(id)arg4;
- (void)_disableActionButtonsWithSelectedButton:(id)arg1;
- (void)_enableActionButtons;
- (void)updateViewWithViewState:(unsigned long long)arg1;
- (void)dismissSummary;
- (void)displaySummary;
- (void)suggestionDidDisplay;
- (void)presentSuggestion:(id)arg1 animated:(BOOL)arg2;
- (void)performUndo:(id)arg1;
- (void)denyTapped:(id)arg1;
- (void)confirmTapped:(id)arg1;
- (void)viewDidLoad;

@end

