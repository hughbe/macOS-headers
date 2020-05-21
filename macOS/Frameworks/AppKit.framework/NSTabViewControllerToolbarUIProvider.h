//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSTabViewControllerUIProvider-Protocol.h>
#import <AppKit/NSToolbarDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSTabViewController, NSToolbar;

__attribute__((visibility("hidden")))
@interface NSTabViewControllerToolbarUIProvider : NSObject <NSTabViewControllerUIProvider, NSToolbarDelegate>
{
    NSTabViewController *_tabViewController;
    NSToolbar *_toolbar;
    NSMutableDictionary *_toolbarItems;
}

@property NSTabViewController *tabViewController; // @synthesize tabViewController=_tabViewController;
- (void)toolbarDidRemoveItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)_toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)_toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)_toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)_toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)removeTabView:(id)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
- (void)insertTabView:(id)arg1 atIndex:(unsigned long long)arg2 newSelectedIndex:(long long)arg3;
- (void)selectTabViewItemAtIndex:(long long)arg1;
- (id)_tabViewControllerToolbarItemIdentifiers:(id)arg1;
- (void)_toolbarItemAction:(id)arg1;
- (long long)_tabViewItemIndexWithIdentifier:(id)arg1;
- (id)_toolbarItemIdentifierForTabViewItemIndex:(long long)arg1;
- (id)_toolbarItemWithIdentifier:(id)arg1;
- (void)_removeAllToolbarItems;
- (id)_toolbarItems;
@property(readonly) NSToolbar *toolbar;
- (void)tearDown;
- (void)_addConstraintsForTabView:(id)arg1 inContainer:(id)arg2;
- (void)tabViewContainerWillMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)setUpForTabView:(id)arg1 inContainer:(id)arg2;
- (long long)_associatedTabStyle;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

