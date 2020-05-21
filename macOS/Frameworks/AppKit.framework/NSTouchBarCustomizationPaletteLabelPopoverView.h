//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer, NSImage, NSVisualEffectView, _NSCartoucheMaskLayer;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPaletteLabelPopoverView : NSView
{
    NSVisualEffectView *_backdrop;
    _NSCartoucheMaskLayer *_backdropMask;
    CALayer *_shadows;
    CALayer *_primaryShadow;
    _NSCartoucheMaskLayer *_primaryShadowShadow;
    _NSCartoucheMaskLayer *_primaryShadowMask;
    CALayer *_rimShadow;
    _NSCartoucheMaskLayer *_rimShadowShadow;
    _NSCartoucheMaskLayer *_rimShadowMask;
    NSImage *_cartoucheImage;
    struct CGSize _cartouchSize;
    unsigned long long _cartoucheSide;
    float _radius;
    double _minHeight;
    double _edgeInset;
    NSView *_contentView;
    double _center;
}

@property double edgeInset; // @synthesize edgeInset=_edgeInset;
@property double minHeight; // @synthesize minHeight=_minHeight;
- (void)layout;
@property double center;
@property(retain) NSView *contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

