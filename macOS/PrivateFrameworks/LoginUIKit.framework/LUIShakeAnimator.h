//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSAnimation.h>

@class NSLayoutConstraint, NSView;

@interface LUIShakeAnimator : NSAnimation
{
    NSView *_originalView;
    struct CGRect _startViewFrame;
    double _amplitude;
    NSLayoutConstraint *_centerXConstraint;
    double _centerXConstraintConstant;
}

+ (void)shakeView:(id)arg1;
- (void)setCurrentProgress:(float)arg1;
- (void)setView:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)dealloc;

@end

