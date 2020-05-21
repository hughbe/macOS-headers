//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABCardCollectionView, ABCollectionViewItem, CNLabeledValue, NSColor, NSString;
@protocol ABCardViewDataSource, ABCardViewDelegate, ABCollectionMultiPropertyAction;

@protocol ABCardCollectionViewDelegate <NSObject>

@optional
- (void)cardCollectionViewKeyViewLoopNeedsUpdate:(ABCardCollectionView *)arg1;
- (void)item:(ABCollectionViewItem *)arg1 didRejectLabeledValue:(CNLabeledValue *)arg2;
- (void)item:(ABCollectionViewItem *)arg1 didConfirmLabeledValue:(CNLabeledValue *)arg2;
- (BOOL)isAugmentedCardItem:(ABCollectionViewItem *)arg1;
- (NSString *)item:(ABCollectionViewItem *)arg1 titleForAction:(id <ABCollectionMultiPropertyAction>)arg2;
- (BOOL)item:(ABCollectionViewItem *)arg1 shouldEnableAction:(id <ABCollectionMultiPropertyAction>)arg2;
- (void)item:(ABCollectionViewItem *)arg1 executeAction:(id <ABCollectionMultiPropertyAction>)arg2;
- (BOOL)isEditable;
- (BOOL)isEditing;
- (void)itemWasClicked:(ABCollectionViewItem *)arg1;
- (void)itemDidRequestNewItem:(ABCollectionViewItem *)arg1;
- (void)itemWasRemoved:(ABCollectionViewItem *)arg1;
- (void)itemDidEndEditing:(ABCollectionViewItem *)arg1;
- (void)itemValueDidBecomeEmpty:(ABCollectionViewItem *)arg1;
- (void)itemValueDidBecomeNonEmpty:(ABCollectionViewItem *)arg1;
- (NSColor *)colorForProperty:(NSString *)arg1 identifier:(NSString *)arg2;
- (void)editExistingKey:(NSString *)arg1 identifier:(NSString *)arg2 yOffset:(double)arg3;
- (id <ABCardViewDataSource>)dataSource;
- (id <ABCardViewDelegate>)delegate;
- (void)notifyDelegateActionWasPerformed;
- (BOOL)isSelectable;
- (BOOL)isUnified;
- (BOOL)isPrivateMeEnabled;
- (BOOL)isTemplate;
- (BOOL)suggestedCardMode;
- (BOOL)importMode;
- (BOOL)editMode;
@end

