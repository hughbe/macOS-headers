//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface _GKCustomDrawnSpeechBalloonBackgroundView : NSView
{
    unsigned char _drawStyle;
    unsigned char _tipDirection;
    NSColor *_balloonColor;
}

@property(retain, nonatomic) NSColor *balloonColor; // @synthesize balloonColor=_balloonColor;
@property(nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;
@property(nonatomic) unsigned char drawStyle; // @synthesize drawStyle=_drawStyle;
- (void)tintColorDidChange;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGGradient *)_gradientForColor:(id)arg1;
- (id)speechBalloonMaskForRect:(struct CGRect)arg1;
- (unsigned char)_tipDirectionForCurrentUILayoutDirection;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

