//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/AMBundleAction.h>

@class NSArray, NSPopUpButton, NSPredicate, NSString, _AMPredicateEditor;

@interface _AMPredicateEditorAction : AMBundleAction
{
    _AMPredicateEditor *_predicateEditor;
    NSPopUpButton *_itemTypePopUpButton;
    NSArray *_perItemTypeInfo;
}

- (void).cxx_destruct;
@property __weak NSPopUpButton *_itemTypePopUpButton; // @synthesize _itemTypePopUpButton;
@property __weak _AMPredicateEditor *_predicateEditor; // @synthesize _predicateEditor;
@property(retain) NSArray *_perItemTypeInfo; // @synthesize _perItemTypeInfo;
- (void)predicateEditorChanged:(id)arg1;
- (void)itemTypePopUpButtonSelectionChanged:(id)arg1;
- (void)setUpUIForItemType:(id)arg1 withPredicate:(id)arg2;
- (void)parametersUpdated;
- (void)updateParameters;
@property(retain, nonatomic) NSPredicate *predicate;
- (BOOL)validatePredicate:(id)arg1;
@property(copy, nonatomic) NSString *itemType;
- (void)opened;
@property(readonly, nonatomic) NSArray *perItemTypeInfo;
- (void)awakeFromNib;

@end

