//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class _NSOverlayBackgroundView;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPaletteInactiveDisplayOverlayWindow : NSWindow
{
    _NSOverlayBackgroundView *_backgroundView;
}

- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (void)animateOut;
- (void)animateIn;
- (BOOL)_isNonactivatingPanel;
- (id)initWithScreen:(id)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

