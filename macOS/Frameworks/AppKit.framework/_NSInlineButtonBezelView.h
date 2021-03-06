//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface _NSInlineButtonBezelView : NSView
{
    CAShapeLayer *_shapeLayer;
    long long _backgroundStyle;
    long long _bezelState;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
@property long long bezelState; // @synthesize bezelState=_bezelState;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

