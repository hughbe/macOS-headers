//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSFrameView.h>

@class NSDocumentDragButton;

@interface NSTitledFrame : NSFrameView
{
    long long resizeFlags;
    NSDocumentDragButton *fileButton;
    struct CGSize titleCellSize;
}

+ (double)_contentToFrameMaxYHeight:(unsigned long long)arg1;
+ (double)_contentToFrameMinYHeight:(unsigned long long)arg1;
+ (double)_contentToFrameMaxXWidth:(unsigned long long)arg1;
+ (double)_contentToFrameMinXWidth:(unsigned long long)arg1;
+ (double)windowTitlebarTitleLinesSpacingWidth:(unsigned long long)arg1;
+ (double)windowTitlebarLinesSpacingWidth:(unsigned long long)arg1;
+ (struct CGSize)sizeOfTitlebarButtons:(unsigned long long)arg1;
+ (double)_titlebarHeight:(unsigned long long)arg1;
+ (double)_windowTitlebarTitleMinHeight:(unsigned long long)arg1;
+ (double)_titleCellHeight:(unsigned long long)arg1;
+ (struct CGSize)_titleCellSizeForTitle:(id)arg1 styleMask:(unsigned long long)arg2;
+ (double)minFrameWidthWithTitle:(id)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGSize)minContentSizeForMinFrameSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGSize)minFrameSizeForMinContentSize:(struct CGSize)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
+ (BOOL)_resizeFromEdge;
+ (double)_minYWindowBorderHeight:(unsigned long long)arg1;
+ (double)_maxXWindowBorderWidth:(unsigned long long)arg1;
+ (double)_minXWindowBorderWidth:(unsigned long long)arg1;
+ (double)_windowBorderThickness:(unsigned long long)arg1;
+ (void)initialize;
- (struct CGRect)_minYBorderRect;
- (struct CGRect)_maxYBorderRect;
- (struct CGRect)_maxXBorderRect;
- (struct CGRect)_minXBorderRect;
- (struct CGRect)_maxXminYResizeRect;
- (double)_windowResizeCornerThickness;
- (struct CGRect)contentRect;
- (double)_contentToFrameMaxYHeight;
- (double)_contentToFrameMinYHeight;
- (double)_contentToFrameMaxXWidth;
- (double)_contentToFrameMinXWidth;
- (double)_maxXTitlebarDragWidth;
- (double)_minXTitlebarDragWidth;
- (double)_maxYTitlebarDragHeight;
- (struct CGPoint)_fileButtonOrigin;
- (struct CGPoint)_collapseButtonOrigin;
- (struct CGPoint)_zoomButtonOrigin;
- (struct CGPoint)_closeButtonOrigin;
- (double)_minLinesWidthWithSpace;
- (double)windowTitlebarTitleLinesSpacingWidth;
- (double)windowTitlebarLinesSpacingWidth;
- (double)_maxXTitlebarButtonsWidth;
- (double)_minXTitlebarButtonsWidth;
- (double)_windowTitlebarButtonSpacingWidth;
- (struct CGSize)_sizeOfTitlebarFileButton;
- (struct CGSize)sizeOfTitlebarButtons;
- (struct CGRect)dragRectForFrameRect:(struct CGRect)arg1;
- (double)_windowTitlebarTitleMinHeight;
- (struct CGRect)_titlebarTitleRect;
- (struct CGRect)_maxTitlebarTitleRect;
- (BOOL)_shouldFlipTrafficLightsForRTL;
- (struct CGRect)titlebarRect;
- (double)_titlebarHeight;
- (struct CGSize)_titleCellSize;
- (double)_titleCellHeight;
- (void)_invalidateTitleCellWidth;
- (id)_customTitleCell;
- (double)_minYWindowBorderHeight;
- (double)_maxXWindowBorderWidth;
- (double)_minXWindowBorderWidth;
- (double)_windowResizeBorderThickness;
- (double)_windowTitlebarYResizeBorderThickness;
- (double)_windowTitlebarXResizeBorderThickness;
- (double)_windowBorderThickness;
- (struct CGSize)minFrameSize;
- (struct CGSize)miniaturizedSize;
- (void)setDocumentEdited:(BOOL)arg1;
- (long long)resizeFlags;
- (void)resizeWithEvent:(id)arg1;
- (struct CGSRegionObject *)_regionForOpaqueDescendants:(struct CGRect)arg1 forMove:(BOOL)arg2 forUnderTitlebar:(BOOL)arg3;
- (struct CGSRegionObject *)regionForOpaqueDescentsModifiedForResizing:(struct CGSRegionObject *)arg1;
- (struct CGRect)_validFrameForResizeFrame:(struct CGRect)arg1 fromResizeEdge:(unsigned long long)arg2;
- (void)mouseUp:(id)arg1;
- (BOOL)_handlePossibleDoubleClickForEvent:(id)arg1;
- (id)titleBarViewsForMouseHitTest;
- (void)_zoomWindowWithDoubleClick:(id)arg1;
- (void)_minimizeWindowWithDoubleClick:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)attemptResizeWithEvent:(id)arg1;
- (BOOL)shouldAttemptResize;
- (BOOL)_styleMaskIsResizable;
- (BOOL)_lastViewHitWasATitlebarView;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)_eventInTitlebar:(id)arg1;
- (struct CGRect)titlebarRectIncludingToolbar;
- (id)fileButton;
- (id)newFileButton;
- (id)newMiniaturizeButton;
- (id)newZoomButton;
- (id)newCloseButton;
- (id)initTitleButton:(id)arg1;
- (id)titleButtonOfClass:(Class)arg1;
- (id)titleFont;
- (void)_drawTitleStringIn:(struct CGRect)arg1 withColor:(id)arg2;
- (void)setTitle:(id)arg1;
- (void)_titleDidChange;
- (void)_titleWillChange;
- (BOOL)usingUpdateLayer;
- (void)tile;
- (void)tileAndSetWindowShape:(BOOL)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (id)frameShadowColor;
- (id)frameHighlightColor;
- (void)_showAllDrawingDrawRect:(struct CGRect)arg1;
- (void)propagateFrameDirtyRects:(struct CGRect)arg1;
- (BOOL)worksWhenModal;
- (BOOL)isOpaque;
- (void)dealloc;

@end

