//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class NSMapTable, NSStatusItem, NSVisualEffectView;

@interface NSStatusBarWindow : NSWindow
{
    NSStatusItem *_statusItem;
    NSVisualEffectView *_effectView;
    NSMapTable *_viewToSelectionViewDictionary;
    NSStatusBarWindow *_underlaySelectionHighlight;
}

@property(retain) NSVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(nonatomic) NSStatusItem *statusItem; // @synthesize statusItem=_statusItem;
- (void)_cgsMoveWindow:(struct CGRect)arg1;
- (BOOL)_hasActiveControls;
- (void)flushWindow;
- (BOOL)_ignoreForFullScreenTransition;
- (int)_semanticContext;
- (void)_automateLiveResize;
- (BOOL)canHide;
- (BOOL)worksWhenModal;
- (struct CGPoint)convertBaseToScreen:(struct CGPoint)arg1;
- (void)sendEvent:(id)arg1;
- (void)_orderForwardWithEvent:(id)arg1;
- (void)_windowMoved:(id)arg1;
- (void)_noticeStatusBarVisibilityChangeIfNecessary;
- (void *)windowRef;
- (struct CGRect)constrainFrameRect:(struct CGRect)arg1 toScreen:(id)arg2;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)_setWindowTag;
- (void)_updateManagedDisplay;
- (id)_bestScreenByGeometry;
- (BOOL)_showToolTip;
- (void)_setWindowNumber:(long long)arg1;
- (void)setStatusBarView:(id)arg1;
- (void)_testForAllowsVibrancy;
- (void)dealloc;
- (void)underlaySelectionHighlight:(BOOL)arg1;
- (BOOL)hasSelectionRect;
- (void)setSelection:(BOOL)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 drawImmediately:(BOOL)arg4;
- (void)setSelection:(BOOL)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)_updateAppearanceAndMaterialOfVisualEffectView;
- (void)_activeMenuBarDrawingStyleDidChange;
- (id)initWithContentRect:(struct CGRect)arg1;
- (float)_backdropBleedAmount;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;

@end

