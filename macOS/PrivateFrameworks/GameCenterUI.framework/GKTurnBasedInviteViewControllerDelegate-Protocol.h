//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKTurnBasedInviteViewController, NSError, NSString;

@protocol GKTurnBasedInviteViewControllerDelegate <NSObject>
- (void)turnBasedInviteViewController:(GKTurnBasedInviteViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)turnBasedInviteViewController:(GKTurnBasedInviteViewController *)arg1 didCreateMatchID:(NSString *)arg2;
- (void)turnBasedInviteViewControllerWasCancelled:(GKTurnBasedInviteViewController *)arg1;
@end

