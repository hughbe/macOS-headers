//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GKRemoteSignInViewController, NSError;

@protocol GKRemoteSignInViewControllerDelegate
- (void)onboardingFlowPersonalizationDidFinish;
- (void)onboardingFlowDidSignOut;
- (void)signInViewControllerDidCancel:(GKRemoteSignInViewController *)arg1;
- (void)signInViewController:(GKRemoteSignInViewController *)arg1 finishedAuthentiationWithError:(NSError *)arg2;
@end

