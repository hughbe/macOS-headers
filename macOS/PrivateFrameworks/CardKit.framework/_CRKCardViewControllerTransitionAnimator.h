//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _CRKCardViewControllerTransitionAnimatorDelegate;

@interface _CRKCardViewControllerTransitionAnimator : NSObject
{
    id <_CRKCardViewControllerTransitionAnimatorDelegate> _delegate;
}

+ (id)sectionShuffleTransitionAnimator;
- (void).cxx_destruct;
@property(nonatomic) __weak id <_CRKCardViewControllerTransitionAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_prepareAnimationFromCardViewController:(id)arg1 toCardViewController:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)transitionFromCardViewController:(id)arg1 toCardViewController:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;

@end

