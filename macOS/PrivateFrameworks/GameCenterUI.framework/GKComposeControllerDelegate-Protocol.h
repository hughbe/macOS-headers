//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKComposeController, NSString;

@protocol GKComposeControllerDelegate <NSObject>

@optional
- (void)composeControllerWasCancelled:(GKComposeController *)arg1;
- (void)composeController:(GKComposeController *)arg1 didFinishWithMessage:(NSString *)arg2;
@end

