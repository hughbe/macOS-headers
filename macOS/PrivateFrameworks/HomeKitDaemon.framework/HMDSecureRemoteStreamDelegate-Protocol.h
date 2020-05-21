//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMFMessageTransportDelegate-Protocol.h>

@class HMDSecureRemoteStream, HMFMessage, NSError;

@protocol HMDSecureRemoteStreamDelegate <HMFMessageTransportDelegate>
- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 receivedRequestToSendMessage:(HMFMessage *)arg2;

@optional
- (void)secureRemoteStream:(HMDSecureRemoteStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)secureRemoteStreamIsIdle:(HMDSecureRemoteStream *)arg1;
@end

