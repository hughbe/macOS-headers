//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/UXViewController.h>

@class NSArray, NSLayoutConstraint, NSMapTable, NSPopUpButton, NSSegmentedControl, NSSet, UXNavigationItem, UXTabBarItemSegment, UXTransitionController, _UXViewControllerTransitionContext;

@interface UXTabBarController : UXViewController
{
    _UXViewControllerTransitionContext *_transitionCtx;
    UXTransitionController *_transitionController;
    UXViewController *_installedViewController;
    BOOL _needsTransition;
    BOOL _segmentTransitionInProgress;
    BOOL _viewControllerTransitionInProgress;
    NSArray *_viewControllers;
    UXViewController *_selectedViewController;
    NSSegmentedControl *_segmentedControl;
    NSPopUpButton *_popUpButton;
    NSLayoutConstraint *_popUpButtonWidthConstraint;
    NSMapTable *_representedSegmentsToViewControllers;
    NSArray *_representedSegments;
    NSSet *_observedItemSegments;
    UXNavigationItem *_observedNavigationItem;
    UXViewController *_observedViewController;
    NSArray *_shortcutMenuItems;
    NSMapTable *_transitionControllerClassByToViewControllerClass;
    UXTabBarItemSegment *_selectedItemSegment;
    UXViewController *_transientViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UXViewController *transientViewController; // @synthesize transientViewController=_transientViewController;
@property(retain, nonatomic) UXTabBarItemSegment *selectedItemSegment; // @synthesize selectedItemSegment=_selectedItemSegment;
@property(nonatomic) BOOL viewControllerTransitionInProgress; // @synthesize viewControllerTransitionInProgress=_viewControllerTransitionInProgress;
@property(nonatomic) BOOL segmentTransitionInProgress; // @synthesize segmentTransitionInProgress=_segmentTransitionInProgress;
@property(readonly, nonatomic) NSMapTable *transitionControllerClassByToViewControllerClass; // @synthesize transitionControllerClassByToViewControllerClass=_transitionControllerClassByToViewControllerClass;
@property(retain, nonatomic) NSArray *shortcutMenuItems; // @synthesize shortcutMenuItems=_shortcutMenuItems;
@property(retain, nonatomic) UXViewController *observedViewController; // @synthesize observedViewController=_observedViewController;
@property(retain, nonatomic) UXNavigationItem *observedNavigationItem; // @synthesize observedNavigationItem=_observedNavigationItem;
@property(retain, nonatomic) NSSet *observedItemSegments; // @synthesize observedItemSegments=_observedItemSegments;
@property(retain, nonatomic) NSArray *representedSegments; // @synthesize representedSegments=_representedSegments;
@property(retain, nonatomic) NSMapTable *representedSegmentsToViewControllers; // @synthesize representedSegmentsToViewControllers=_representedSegmentsToViewControllers;
@property(readonly, nonatomic) NSLayoutConstraint *popUpButtonWidthConstraint; // @synthesize popUpButtonWidthConstraint=_popUpButtonWidthConstraint;
@property(readonly, nonatomic) NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
@property(readonly, nonatomic) NSSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) __weak UXViewController *selectedViewController; // @synthesize selectedViewController=_selectedViewController;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void)populateShortcutMenuItemsStartingAtIndex:(unsigned long long)arg1 ofMenu:(id)arg2 useSeparators:(BOOL)arg3;
- (id)contentRepresentingViewController;
- (id)_childViewControllerAbleToNavigateToDestination:(id)arg1;
- (void)updateForEqualNavigationDestination:(id)arg1;
- (void)requestViewControllersForNavigationDestination:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)canProvideViewControllersForNavigationDestination:(id)arg1;
- (id)navigationDestination;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateRightBarButtonItems;
- (void)_updateLeftBarButtonItems;
- (void)_setObservedNavigationItem:(id)arg1 updateBarButtonItems:(BOOL)arg2;
- (id)transitionCoordinator;
- (void)_prepareForAnimationInContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_requiresWindowForTransitionPreparation;
- (void)_prepareViewController:(id)arg1 forTransitionInContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_beginTransitionWithContext:(id)arg1 operation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_contextForTransitionOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 transition:(unsigned long long)arg4;
- (void)unregisterTransitionControllerForTransitionToViewControllerClass:(Class)arg1;
- (void)registerTransitionControllerClass:(Class)arg1 forViewControllerClass:(Class)arg2;
- (void)_performTransitionIfNeeded;
- (BOOL)_canPerformTransition;
- (void)_setNeedsTransition;
- (void)_removePopulatedMenuItems;
- (void)_recalculateSegmentedControlWidth;
- (void)_transitionToViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) unsigned long long selectedIndex;
- (void)setSelectedIndex:(unsigned long long)arg1 allowsCurrentTabReselectionCallback:(BOOL)arg2;
- (void)keyDown:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)selectSegmentFromMenu:(id)arg1;
- (void)popUpChanged:(id)arg1;
- (void)segmentChanged:(id)arg1;
- (void)invalidateIntrinsicLayoutInsets;
- (id)preferredFirstResponder;
- (void)viewWillDisappear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (id)_targetViewController;
- (void)_updateToolbarProperties;
- (void)_transitionToTargetViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_invalidateIntrinsicLayoutInsetsForViewController:(id)arg1;
- (void)_updateControlsProperties;
- (void)_updateControlsSelection;
- (void)_setSelectedIndex:(unsigned long long)arg1;
- (unsigned long long)_firstItemSegmentIndexForViewController:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

