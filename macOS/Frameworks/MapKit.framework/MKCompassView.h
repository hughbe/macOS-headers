//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class MKBlurBackingLayer, MKCompassLayer;

@interface MKCompassView : NSView
{
    BOOL _enabled;
    double _mapHeading;
    MKBlurBackingLayer *_blurLayer;
    MKCompassLayer *_displayLayer;
    MKCompassLayer *_maskLayer;
    long long _outerRingTooltipTag;
    long long _innerDiscTooltipTag;
    long long _innerDiscTrackingRectTag;
}

+ (double)diameter;
- (void).cxx_destruct;
@property(nonatomic) double mapHeading; // @synthesize mapHeading=_mapHeading;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (void)setFrame:(struct CGRect)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (struct CGRect)_innerDiscRect;
- (void)updateTooltipForInnerDiscHovered:(BOOL)arg1;
- (void)updateTooltip;
- (void)updateHighlight;
- (void)viewDidMoveToWindow;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (BOOL)isPointInNorthEastHalf:(struct CGPoint)arg1;
- (BOOL)isPointInOuterRing:(struct CGPoint)arg1;
- (BOOL)isPointInInnerPortion:(struct CGPoint)arg1;
- (BOOL)isPointInCompass:(struct CGPoint)arg1;
- (void)resetCompassFlatWithMapPitch:(double)arg1 pitchEnabled:(BOOL)arg2 mapType:(int)arg3 changeButtonTextWithPitch:(BOOL)arg4;
- (void)updateAccessibilityDescriptionWithAngle:(double)arg1;
- (void)layout;
- (void)updateBlurVisibility;
- (void)viewDidChangeEffectiveAppearance;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (BOOL)canBecomeKeyView;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)accessibilityIsIgnored;

@end

