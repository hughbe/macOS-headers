//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSMenu, NSStatusBar;

@interface NSStatusBarButtonCell : NSButtonCell
{
    NSStatusBar *_fStatusBar;
    NSMenu *_fStatusMenu;
    BOOL _fHighlightMode;
    BOOL _fDoubleClick;
    SEL _fDoubleAction;
    struct NSEdgeInsets _selectionInset;
    unsigned int _looksDisabled:1;
    unsigned int _actsOnRightMouseDown:1;
    unsigned int _actsOnRightMouseUp:1;
    unsigned int _reservedFlags:29;
}

+ (void)popupStatusBarMenu:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 withEvent:(id)arg4;
+ (void)_endTrackingNavigationLoopOnMenu:(id)arg1 withToken:(id)arg2 view:(id)arg3;
+ (id)_trackNavigationLoopOnMenu:(id)arg1 view:(id)arg2;
@property struct NSEdgeInsets selectionInset; // @synthesize selectionInset=_selectionInset;
- (BOOL)_sendActionFrom:(id)arg1;
- (long long)sendActionOn:(unsigned long long)arg1;
- (void)dismiss;
- (void)performClick:(id)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)_fillBackground:(struct CGRect)arg1 withAlternateColor:(BOOL)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (long long)_stateForDrawing;
- (BOOL)_isExitFullScreenButton;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (BOOL)acceptsFirstResponder;
- (void)setDoubleAction:(SEL)arg1;
- (SEL)doubleAction;
- (BOOL)_allowsVibrancyForControlView:(id)arg1;
- (void)setHighlightMode:(BOOL)arg1;
- (BOOL)highlightMode;
- (void)setStatusMenu:(id)arg1;
- (id)statusMenu;
- (id)statusBar;
- (void)setStatusBar:(id)arg1;
- (BOOL)_disabledForDrawing;
@property BOOL looksDisabled;
- (void)setImagePosition:(unsigned long long)arg1;
- (void)setAttributedTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setAlternateImage:(id)arg1;
- (void)setImage:(id)arg1;
- (id)_statusItem;
- (void)dealloc;
- (id)init;

@end

