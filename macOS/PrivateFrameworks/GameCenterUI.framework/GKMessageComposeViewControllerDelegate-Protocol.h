//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKDashboardMultiplayerPickerViewController, GKMessageComposeViewController, NSArray, NSString;

@protocol GKMessageComposeViewControllerDelegate <NSObject>
- (void)messageComposeViewController:(GKMessageComposeViewController *)arg1 didFinishWithResult:(long long)arg2 message:(NSString *)arg3 contactPlayers:(NSArray *)arg4 friendPlayers:(NSArray *)arg5;

@optional
- (void)messageComposeViewController:(GKMessageComposeViewController *)arg1 willSend:(BOOL)arg2 message:(NSString *)arg3;
- (void)messageComposeViewController:(GKMessageComposeViewController *)arg1 willPresentPlayerPicker:(GKDashboardMultiplayerPickerViewController *)arg2;
@end

