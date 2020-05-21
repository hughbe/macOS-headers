//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSTitlebarContainerView;

__attribute__((visibility("hidden")))
@interface _NSTitlebarDecorationView : NSView
{
    CALayer *_decorationLayer;
    CALayer *_topHighlightLayer;
    BOOL _drawsBottomSeparator;
    NSTitlebarContainerView *_titlebarContainerView;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
- (void).cxx_destruct;
@property __weak NSTitlebarContainerView *titlebarContainerView; // @synthesize titlebarContainerView=_titlebarContainerView;
@property BOOL drawsBottomSeparator; // @synthesize drawsBottomSeparator=_drawsBottomSeparator;
- (void)_updateTopHighlightLayer;
- (void)layout;
- (void)addSubview:(id)arg1;
- (void)updateLayer;
- (id)_titlebarDecorationCoreUIOptions;
- (void)dealloc;

@end

