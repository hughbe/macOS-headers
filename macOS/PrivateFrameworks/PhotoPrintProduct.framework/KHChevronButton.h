//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSControl.h>

@class CAShapeLayer;

@interface KHChevronButton : NSControl
{
    CAShapeLayer *_chevronLayer;
    double _animationDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setState:(int)arg1 animated:(BOOL)arg2;
- (void)effectiveAppearanceDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

