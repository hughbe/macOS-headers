//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSVisualTabPickerShadowTileView : NSView
{
    NSView *_sidebarView;
    NSView *_toolbarView;
    NSView *_borderView;
    NSMutableArray *_sidebarAndToolbarAnimations;
    NSView *_containerView;
    NSView *_headerBackgroundView;
}

+ (double)headerHeight;
- (void).cxx_destruct;
@property(readonly) NSView *containerView; // @synthesize containerView=_containerView;
- (BOOL)accessibilityIsIgnored;
- (void)startTitleOpacityAnimation:(long long)arg1;
- (void)selectedTabDidChange;
- (void)reloadData;
- (void)willStartExitAnimation;
- (void)_setUpBorderView;
- (void)updateLayer;
- (void)_setUpContentViews;
- (void)_getTopBarAnimationDuration:(double *)arg1 timeOffset:(double *)arg2 gridAnimation:(long long)arg3;
- (void)enableEdgeAntialiasingMask:(BOOL)arg1;
- (void)setExposeBorderVisible:(BOOL)arg1;
- (void)setCloseButtonVisible:(BOOL)arg1;
- (void)cleanupAnimations;
- (void)animateToolbarImage:(id)arg1 height:(double)arg2 gridAnimation:(long long)arg3;
- (id)_sidebarAnimationWithKeyPath:(id)arg1 windowValue:(id)arg2 thumbnailValue:(id)arg3 forGridAnimation:(long long)arg4;
- (void)animateSidebarImage:(id)arg1 width:(double)arg2 gridAnimation:(long long)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

