//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAppExceptionListener-Protocol.h>
#import <AppKit/NSDraggingSource-Protocol.h>
#import <AppKit/NSTouchBarCustomizationCursorManagerDelegate-Protocol.h>
#import <AppKit/NSTouchBarCustomizationPaletteViewControllerDelegate-Protocol.h>
#import <AppKit/NSTouchBarCustomizationPreviewViewControllerDelegate-Protocol.h>
#import <AppKit/NSWindowDelegate-Protocol.h>
#import <AppKit/_NSFunctionRowCustomizationDragTargetDelegate-Protocol.h>

@class NSArray, NSFunctionRow, NSMenu, NSMenuItem, NSMutableArray, NSString, NSTouchBar, NSTouchBarCustomizationCursorManager, NSTouchBarCustomizationPaletteOverlayWindow, NSTouchBarCustomizationPaletteViewController, NSTouchBarCustomizationPreviewViewController, NSTouchBarItem, NSTouchBarItemTree, NSValue;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationController : NSObject <NSTouchBarCustomizationPreviewViewControllerDelegate, NSTouchBarCustomizationCursorManagerDelegate, NSDraggingSource, NSTouchBarCustomizationPaletteViewControllerDelegate, _NSFunctionRowCustomizationDragTargetDelegate, NSAppExceptionListener, NSWindowDelegate>
{
    NSMenuItem *_mainMenuItem;
    BOOL _mainMenuItemWasAutomaticallyAdded;
    NSMenu *_mainSubmenu;
    NSArray *_auxiliaryMenuItems;
    NSArray *_overlayWindows;
    NSTouchBarCustomizationPaletteOverlayWindow *_paletteWindow;
    NSTouchBarCustomizationPaletteViewController *_appPaletteViewController;
    NSTouchBarCustomizationPaletteViewController *_miniBarPaletteViewController;
    NSTouchBarCustomizationPaletteViewController *_systemBarPaletteViewController;
    NSArray *_currentResponderTouchBars;
    NSArray *_activeTouchBars;
    NSTouchBar *_currentPopoverTouchBar;
    NSFunctionRow *_customizationRow;
    NSTouchBarCustomizationPreviewViewController *_customizationRowViewController;
    NSTouchBarCustomizationCursorManager *_cursorManager;
    NSTouchBarItemTree *_draggedItemTree;
    NSTouchBarItem *_draggedItem;
    unsigned long long _oldPresentationOptions;
    struct __CFString *_oldMenuBarDisplayIdentifier;
    NSMutableArray *_barsToReset;
    NSMutableArray *_barsToUpdate;
    NSValue *_oldKeyWindow;
    long long _activeState;
}

+ (id)keyPathsForValuesAffectingItemTree;
@property(retain) NSTouchBar *currentPopoverTouchBar; // @synthesize currentPopoverTouchBar=_currentPopoverTouchBar;
@property(copy) NSArray *activeTouchBars; // @synthesize activeTouchBars=_activeTouchBars;
@property(copy) NSArray *currentResponderTouchBars; // @synthesize currentResponderTouchBars=_currentResponderTouchBars;
- (BOOL)windowShouldClose:(id)arg1;
- (void)_closeWithoutAnimating;
- (void)_closeCustomizationPalette;
- (BOOL)validateTouchBarCustomizationPaletteItem:(id)arg1;
- (void)toggleCustomizationPalette:(id)arg1 forceControlStrip:(BOOL)arg2;
- (void)restorePresentationOptions;
- (void)savePresentationOptions;
- (BOOL)activeTouchBarIsCustomizable;
- (BOOL)_touchBarsAreCustomizable:(id)arg1;
- (void)toggleCustomizationPalette:(id)arg1;
- (void)toggleControlStripCustomizationPalette:(id)arg1;
- (void)removeMenuItem;
- (void)_quickTypeDidChange:(id)arg1;
- (void)_addMenuItemToMainMenuIfNecessary:(id)arg1;
- (void)installMenuItemIfNeeded;
- (void)dealloc;
@property(readonly, copy) NSTouchBarItemTree *itemTree;
- (void)controller:(id)arg1 didSelectSection:(long long)arg2;
- (void)controller:(id)arg1 didResetBarNode:(id)arg2 inItemTree:(id)arg3;
- (void)controller:(id)arg1 didUpdateBarNode:(id)arg2 inItemTree:(id)arg3;
- (void)controller:(id)arg1 didRemoveQuickTypeFromBarNode:(id)arg2 inItemTree:(id)arg3;
- (void)controllerDidComplete:(id)arg1;
- (void)_prepareToHideCustomizationDFR;
- (void)_showCustomizationDFR;
- (void)_prepareCustomizationDFRFWithCustomizedRect:(struct CGRect)arg1 inPopover:(BOOL)arg2;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)cursorManagerDidExitTouchBar:(id)arg1 atScreenLocation:(struct CGPoint)arg2 cancelled:(BOOL)arg3;
- (struct CGPoint)cursorManager:(id)arg1 didMouseUpInTouchBarAtPoint:(struct CGPoint)arg2;
- (void)cursorManager:(id)arg1 didMouseDownInTouchBarAtPoint:(struct CGPoint)arg2;
- (struct CGPoint)cursorManager:(id)arg1 didMoveTouchBarCursorToPoint:(struct CGPoint)arg2 withDelta:(struct CGSize)arg3 mouseIsDown:(BOOL)arg4;
- (struct CGPoint)cursorManager:(id)arg1 didEnterTouchBarAtPoint:(struct CGPoint)arg2 mouseIsDown:(BOOL)arg3;
- (BOOL)cursorManager:(id)arg1 shouldEnterTouchBarAtPoint:(struct CGPoint)arg2 isDragging:(BOOL)arg3;
- (void)dragTarget:(id)arg1 mouseExited:(id)arg2;
- (void)dragTarget:(id)arg1 mouseEntered:(id)arg2;
- (void)dragTarget:(id)arg1 draggingConcluded:(id)arg2;
- (void)dragTarget:(id)arg1 draggingExited:(id)arg2;
- (unsigned long long)dragTarget:(id)arg1 draggingUpdated:(id)arg2;
- (unsigned long long)dragTarget:(id)arg1 draggingEntered:(id)arg2;
- (void)controllerAccessibilityResetTouchBar:(id)arg1;
- (void)controller:(id)arg1 accessibilityAddItem:(id)arg2;
- (void)controllerDidEndDragging:(id)arg1;
- (void)controllerWillBeginDragging:(id)arg1;
- (void)application:(id)arg1 willReportException:(id)arg2 willCrash:(BOOL)arg3 willShow:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

