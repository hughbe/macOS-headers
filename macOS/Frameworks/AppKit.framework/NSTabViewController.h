//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSTabViewDelegate.h"
#import "NSToolbarDelegate.h"

@class NSArray, NSString, NSTabView;

@interface NSTabViewController : NSViewController <NSTabViewDelegate, NSToolbarDelegate>
{
    NSTabView *_tabView;
    id _tabViewControllerPrivateData;
    struct {
        unsigned int _changingSelection:1;
        unsigned int _addingInitialTabViewItems:1;
        unsigned int _tabBarIsDrivingTabMove:1;
        unsigned int __extra:29;
    } _tabViewControllerFlags;
}

+ (id)_findWindowTabViewControllerInWindow:(id)arg1;
+ (id)_recursiveFindWindowTabViewController:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfSelectedTabViewItemIndex;
+ (BOOL)requiresConstraintBasedLayout;
- (long long)_associatedTabStyleForUIProvider:(id)arg1;
- (id)_implicitUIProviderForTabStyle:(long long)arg1;
- (void)setUIProvider:(id)arg1;
- (id)UIProvider;
- (void)toolbarDidRemoveItem:(id)arg1;
- (void)toolbarWillAddItem:(id)arg1;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (BOOL)tabBar:(id)arg1 acceptDrop:(id)arg2 index:(unsigned long long)arg3;
- (unsigned long long)tabBar:(id)arg1 validateDrop:(id)arg2;
- (void)tabBar:(id)arg1 didFinishTransitionAnimationForWindow:(id)arg2;
- (id)tabBar:(id)arg1 destinationWindowForDetachedTabBarViewItem:(id)arg2;
- (id)tabBar:(id)arg1 detachedWindowImageForDraggedTabBarViewItem:(id)arg2;
- (BOOL)tabBar:(id)arg1 acceptTabDrop:(id)arg2 index:(unsigned long long)arg3;
- (unsigned long long)tabBar:(id)arg1 validateTabDrop:(id)arg2;
- (id)tabBar:(id)arg1 menuForTabBarViewItem:(id)arg2 event:(id)arg3;
- (void)tabBar:(id)arg1 didMoveTabBarViewItem:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 isChangingPinnedness:(BOOL)arg5;
- (void)tabBar:(id)arg1 closeTabBarViewItem:(id)arg2;
- (id)selectedTabBarViewItemAfterClosingCurrentTabInTabBar:(id)arg1;
- (void)tabBar:(id)arg1 selectTabBarViewItem:(id)arg2;
- (void)createNewTabInTabBar:(id)arg1;
- (void)tabViewDidChangeNumberOfTabViewItems:(id)arg1;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
@property BOOL canPropagateSelectedChildViewControllerTitle;
- (BOOL)_hasPropagatedTitle;
- (id)title;
@property unsigned long long transitionOptions;
@property long long selectedTabViewItemIndex;
- (void)_updateSelectedTabViewItemIndexInUI;
@property long long tabStyle;
- (id)_tabViewItemWithIdentifier:(id)arg1;
- (long long)_indexOfTabViewItem:(id)arg1;
- (id)_tabViewItemForViewControllerAtIndex:(unsigned long long)arg1;
- (id)tabViewItemForViewController:(id)arg1;
- (void)removeTabViewItem:(id)arg1;
- (void)moveTabViewItem:(id)arg1 toIndex:(long long)arg2;
- (void)insertTabViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)addTabViewItem:(id)arg1;
@property(copy) NSArray *tabViewItems;
- (void)removeChildViewControllerAtIndex:(long long)arg1;
- (void)insertChildViewController:(id)arg1 atIndex:(long long)arg2;
- (void)updateViewConstraints;
- (void)setWindowTabsDelegate:(id)arg1;
- (id)windowTabsDelegate;
- (void)_removeTabBar;
- (void)_makeTabBar;
- (void)_setTabBarAccessoryViewController:(id)arg1;
- (id)_tabBarAccessoryViewController;
- (void)setTabBar:(id)arg1;
- (id)tabBar;
- (void)_removeAllTabs;
- (void)_addAllTabs;
- (id)_makeTabViewWithFrame:(struct CGRect)arg1;
- (struct CGRect)_defaultFrame;
@property(retain) NSTabView *tabView; // @synthesize tabView=_tabView;
- (void)setView:(id)arg1;
- (void)_viewDidMoveToWindow:(id)arg1 fromWindow:(id)arg2 unhiding:(BOOL)arg3;
- (void)_viewWillMoveToWindow:(id)arg1 unhiding:(BOOL)arg2;
- (void)viewDidLoad;
- (void)loadView;
- (struct CGSize)_goodTabViewContentSize;
- (BOOL)_viewControllerSupports10_10Features;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

