//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HearingUtilities/NSObject-Protocol.h>

@class HUIDCMessage, HUIDCRemoteController, NSError;
@protocol HUIDCManagerSecurityDelegate;

@protocol HUIDCRemoteControllerDelegate <NSObject>
@property(nonatomic) __weak id <HUIDCManagerSecurityDelegate> securityDelegate;
- (void)controller:(HUIDCRemoteController *)arg1 didCloseConnectionWithError:(NSError *)arg2;
- (void)controllerDidFinishConnecting:(HUIDCRemoteController *)arg1;
- (void)controller:(HUIDCRemoteController *)arg1 didFinishSendingData:(HUIDCMessage *)arg2;
- (void)controller:(HUIDCRemoteController *)arg1 didReceiveData:(HUIDCMessage *)arg2;
@end

