//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/NSObject-Protocol.h>

@protocol UXViewControllerContextTransitioning;

@protocol UXViewControllerAnimatedTransitioning <NSObject>
- (void)animateTransition:(id <UXViewControllerContextTransitioning>)arg1;
- (double)transitionDuration:(id <UXViewControllerContextTransitioning>)arg1;

@optional
- (void)animationEnded:(BOOL)arg1;
@end

