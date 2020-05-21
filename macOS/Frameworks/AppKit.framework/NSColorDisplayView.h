//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSColor;

__attribute__((visibility("hidden")))
@interface NSColorDisplayView : NSView
{
    NSColor *_color;
    CALayer *_diagonalLayer;
    CALayer *_transparentColorLayer;
    CALayer *_colorLayer;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
@property(copy) NSColor *color; // @synthesize color=_color;
- (void)layout;
- (BOOL)wantsLayer;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

