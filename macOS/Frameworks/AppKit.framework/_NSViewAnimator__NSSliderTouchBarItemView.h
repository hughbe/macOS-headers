//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/_NSViewAnimator.h>

#import <AppKit/CAAnimationDelegate-Protocol.h>

@class NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface _NSViewAnimator__NSSliderTouchBarItemView : _NSViewAnimator <CAAnimationDelegate>
{
    NSLayoutConstraint *_collapseAnimationConstraint;
    long long _animationDepth;
    BOOL _animatingCollapse;
}

- (void)stopAndCleanupCollapseAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)setCollapsed:(BOOL)arg1;
- (id)sliderItemViewTarget;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property double valueAccessoryWidth; // @dynamic valueAccessoryWidth;

@end

