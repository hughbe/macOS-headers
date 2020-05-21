//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSNumber, NSString, VCControlChannel;

@protocol VCControlChannelDelegate <NSObject>
- (void)controlChannel:(VCControlChannel *)arg1 clearTransactionCacheForParticipant:(NSNumber *)arg2;
- (void)controlChannel:(VCControlChannel *)arg1 sendReliableMessage:(NSString *)arg2 didSucceed:(BOOL)arg3 toParticipant:(NSNumber *)arg4;
- (void)controlChannel:(VCControlChannel *)arg1 receivedMessage:(NSString *)arg2 transactionID:(unsigned int)arg3 fromParticipant:(NSNumber *)arg4;
@end

