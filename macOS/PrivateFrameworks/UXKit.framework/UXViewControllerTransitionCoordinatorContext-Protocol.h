//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UXKit/NSObject-Protocol.h>

@class NSString, UXView, UXViewController;

@protocol UXViewControllerTransitionCoordinatorContext <NSObject>
- (UXView *)containerView;
- (UXViewController *)viewControllerForKey:(NSString *)arg1;
- (long long)completionCurve;
- (double)completionVelocity;
- (double)percentComplete;
- (double)transitionDuration;
- (BOOL)isCancelled;
- (BOOL)isInteractive;
- (BOOL)initiallyInteractive;
- (long long)presentationStyle;
- (BOOL)isAnimated;
@end

