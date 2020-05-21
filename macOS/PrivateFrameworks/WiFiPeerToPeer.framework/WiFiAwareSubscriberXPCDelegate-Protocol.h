//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WiFiPeerToPeer/NSObject-Protocol.h>

@class NSData, WiFiAwareDiscoveryResult, WiFiMACAddress;

@protocol WiFiAwareSubscriberXPCDelegate <NSObject>
- (void)subscribeReceivedMessage:(NSData *)arg1 fromPublishID:(unsigned char)arg2 address:(WiFiMACAddress *)arg3;
- (void)subscribeFailedToStartWithError:(long long)arg1;
- (void)subscribeLostDiscoveryResultForPublishID:(unsigned char)arg1 address:(WiFiMACAddress *)arg2;
- (void)subscribeReceivedDiscoveryResult:(WiFiAwareDiscoveryResult *)arg1;
- (void)subscribeTerminatedWithReason:(long long)arg1;
- (void)subscribeStartedWithInstanceID:(unsigned char)arg1;
@end

