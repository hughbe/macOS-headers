//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class CAAnimation;

@protocol CAAnimationDelegate <NSObject>

@optional
- (void)animationDidStop:(CAAnimation *)arg1 finished:(BOOL)arg2;
- (void)animationDidStart:(CAAnimation *)arg1;
@end

