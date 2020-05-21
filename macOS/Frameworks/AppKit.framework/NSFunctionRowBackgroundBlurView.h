//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class _NSFunctionRowBackgroundBlurViewBackdropLayer, _NSFunctionRowBackgroundBlurViewLayer;

@interface NSFunctionRowBackgroundBlurView : NSView
{
    _NSFunctionRowBackgroundBlurViewLayer *_container;
    _NSFunctionRowBackgroundBlurViewBackdropLayer *_backdrop;
    double _blurRadius;
}

+ (id)defaultAnimationForKey:(id)arg1;
- (Class)_animatorClass;
@property double blurRadius;
- (void)setLayer:(id)arg1;
- (id)makeBackingLayer;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

