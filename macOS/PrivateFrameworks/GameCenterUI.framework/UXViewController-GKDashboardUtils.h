//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUICore/UXViewController.h>

@interface UXViewController (GKDashboardUtils)
- (void)_gkPopViewControllerAnimated:(BOOL)arg1;
- (void)_gkPushViewController:(id)arg1 replaceCurrent:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_gkPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_gkDismissViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_gkPresentViewController:(id)arg1 asPopoverFromView:(id)arg2 animated:(BOOL)arg3;
- (void)_gkPresentViewController:(id)arg1 animated:(BOOL)arg2;
- (id)_gkOriginatingViewControllerAutoDetermined;
- (id)_gkOriginatingViewController;
- (void)_gkSetOriginatingViewController:(id)arg1;
- (void)_gkRemoveViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_gkShowViewController:(id)arg1;
- (void)_gkAddMenuButtonTapGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (void)_gkModifyTopConstraintToLayoutGuideForSubview:(id)arg1;
- (id)_gkExtensionViewController;
@end

