//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKViewController, NSMapTable;

@interface EKUIGadgetContainerAnimator : NSObject
{
    BOOL _isAnimating;
    BOOL _runningAnimations;
    EKViewController *_viewController;
    NSMapTable *_animations;
}

+ (id)animatorForEventViewController:(id)arg1;
- (void).cxx_destruct;
@property BOOL runningAnimations; // @synthesize runningAnimations=_runningAnimations;
@property(retain) NSMapTable *animations; // @synthesize animations=_animations;
@property __weak EKViewController *viewController; // @synthesize viewController=_viewController;
@property BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
- (id)_rangeForContainer:(id)arg1 withOriginOffset:(double)arg2 heightDifference:(double)arg3;
- (double)_animationLength;
- (BOOL)hasAnimations;
- (void)runAnimationsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)containsAnimationForGadgetContainer:(id)arg1;
- (BOOL)addExpandCollapseAnimationForGadgetContainer:(id)arg1 isExpanding:(BOOL)arg2;
- (id)init;

@end

