//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IMSimulatedDaemonController, NSArray, NSData, NSString;

@protocol IMSimulatedDaemonListener
- (void)simulatedDaemon:(IMSimulatedDaemonController *)arg1 willSendBalloonPayload:(NSData *)arg2 attachments:(NSArray *)arg3 messageGUID:(NSString *)arg4 bundleID:(NSString *)arg5;
@end

