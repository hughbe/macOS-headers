//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEExtensionTunnelProviderHostProtocol-Protocol.h>

@class NSData, NSString;

@protocol NEExtensionPacketTunnelProviderHostProtocol <NEExtensionTunnelProviderHostProtocol>
- (void)requestSocket:(BOOL)arg1 interface:(NSString *)arg2 local:(NSData *)arg3 remote:(NSData *)arg4 completionHandler:(void (^)(NSFileHandle *))arg5;
@end

