//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/Window.h>

@class BookmarksUndoController, NSString;

__attribute__((visibility("hidden")))
@interface BrowserWindow : Window
{
    NSString *_title;
    BOOL _logAfterNextRedisplay;
    BookmarksUndoController *_bookmarksUndoController;
    id _mouseUpEventMonitor;
    BOOL _hasMoved;
    BOOL _isClosing;
    BOOL _ignoresOrderFront;
    BOOL _shouldDeferSettingFirstResponderDueToScrubbing;
}

+ (id)frontmostWindow;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldDeferSettingFirstResponderDueToScrubbing; // @synthesize shouldDeferSettingFirstResponderDueToScrubbing=_shouldDeferSettingFirstResponderDueToScrubbing;
@property(nonatomic) BOOL ignoresOrderFront; // @synthesize ignoresOrderFront=_ignoresOrderFront;
@property(retain, nonatomic) BookmarksUndoController *bookmarksUndoController; // @synthesize bookmarksUndoController=_bookmarksUndoController;
- (void)removeFromOrderedTabViewItemsAtIndex:(unsigned int)arg1;
- (void)replaceInOrderedTabViewItems:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertInOrderedTabViewItems:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertInOrderedTabViewItems:(id)arg1;
- (id)orderedTabViewItems;
- (void)setCurrentTabViewItem:(id)arg1;
- (id)currentTabViewItem;
- (id)accessibilityChildren;
- (id)accessibilityTitle;
- (void)exitFullScreenMode:(id)arg1;
- (void)enterFullScreenMode:(id)arg1;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
@property(nonatomic, getter=isLayerBacked) BOOL layerBacked;
- (void)sendEvent:(id)arg1;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)orderFront:(id)arg1;
- (void)setWindowController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)close;
- (void)tryToCloseNowThatWindowControllerIsReady;
- (void)__close;
- (void)updateTitle;
- (void)runToolbarCustomizationPalette:(id)arg1;
- (void)displayIfNeeded;
- (void)display;
- (void)logFirstPageLoaded;
- (void)logFirstWindowDrawnAfterNextRedisplay;
- (void)logFirstPageLoadedAfterNextRedisplay;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)_commonAwake;
- (void)updateCGSWindowTitle;
- (void)_handleLeftMouseUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)_startedMoving:(id)arg1;
- (void)setUpBrowserWindow;
- (void)zoom:(id)arg1;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;

@end

