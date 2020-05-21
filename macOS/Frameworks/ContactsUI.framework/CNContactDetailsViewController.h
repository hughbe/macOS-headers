//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ContactsUI/ABCardCollectionViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNContactCardWidget-Protocol.h>

@class ABCardCollectionView, ABCardCollectionViewController, ABCardViewStyleProvider, AKCardViewDataSource, CNContact, CNUIEditingRules, NSString;
@protocol CNContactDetailsViewControllerDelegate;

@interface CNContactDetailsViewController : NSViewController <ABCardCollectionViewControllerDelegate, CNContactCardWidget>
{
    BOOL _isUnified;
    CNContact *_contact;
    id <CNContactDetailsViewControllerDelegate> _controllerDelegate;
    ABCardViewStyleProvider *_styleProvider;
    AKCardViewDataSource *_dataSource;
    unsigned long long _mode;
    CNUIEditingRules *_editingRules;
    ABCardCollectionView *_cardCollectionView;
    ABCardCollectionViewController *_cardCollectionViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ABCardCollectionViewController *cardCollectionViewController; // @synthesize cardCollectionViewController=_cardCollectionViewController;
@property(retain, nonatomic) ABCardCollectionView *cardCollectionView; // @synthesize cardCollectionView=_cardCollectionView;
@property(retain, nonatomic) CNUIEditingRules *editingRules; // @synthesize editingRules=_editingRules;
@property(nonatomic) BOOL isUnified; // @synthesize isUnified=_isUnified;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) AKCardViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(nonatomic) __weak id <CNContactDetailsViewControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)userActionListDataSource;
- (void)showLastItem;
- (void)showFirstItem;
- (void)setPropertyKeysToDisplay:(id)arg1;
- (void)addTemplateItemForKey:(id)arg1;
- (void)updateFaceTimeAvailability:(BOOL)arg1;
- (void)notifyDelegateActionWasPerformed;
- (void)cardViewNoteDidChange;
- (id)colorForProperty:(id)arg1 identifier:(id)arg2;
- (void)editExistingKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3;
- (id)delegate;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (BOOL)isSelectable;
- (BOOL)isPrivateMeEnabled;
- (BOOL)suggestedCardMode;
- (BOOL)isTemplate;
- (BOOL)importMode;
- (BOOL)editMode;
- (void)cardCollectionViewControllerKeyViewLoopNeedsUpdate:(id)arg1;
- (BOOL)shouldBeIncludedInKeyViewLoop;
- (id)updateKeyViewLoopAndReturnTailView;
- (BOOL)commitEditing;
- (void)applyDisplayAttributes;
- (void)editCollectionItemWithKey:(id)arg1 label:(id)arg2;
- (void)highlightSearchTerms:(id)arg1;
- (void)focusCollectionItemWithKey:(id)arg1 identifier:(id)arg2 yOffset:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadData;
- (double)desiredHeight;
- (void)createConstrains;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

