//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class LoopbackSocketTunnel, NSData;

@protocol LoopbackSocketTunnelDelegate <NSObject>
- (void)loopbackSocketTunnel:(LoopbackSocketTunnel *)arg1 receivedData:(NSData *)arg2 from:(struct tagIPPORT *)arg3;
@end

