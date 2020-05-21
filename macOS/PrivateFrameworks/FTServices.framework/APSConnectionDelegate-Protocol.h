//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/NSObject-Protocol.h>

@class APSConnection, APSIncomingMessage, APSOutgoingMessage, NSData, NSDictionary, NSError, NSString;

@protocol APSConnectionDelegate <NSObject>
- (void)connection:(APSConnection *)arg1 didReceivePublicToken:(NSData *)arg2;

@optional
- (void)connectionDidReconnect:(APSConnection *)arg1;
- (void)connection:(APSConnection *)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(APSConnection *)arg1 didFailToSendOutgoingMessage:(APSOutgoingMessage *)arg2 error:(NSError *)arg3;
- (void)connection:(APSConnection *)arg1 didSendOutgoingMessage:(APSOutgoingMessage *)arg2;
- (void)connection:(APSConnection *)arg1 didReceiveMessageForTopic:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)connection:(APSConnection *)arg1 didReceiveIncomingMessage:(APSIncomingMessage *)arg2;
- (void)connection:(APSConnection *)arg1 didReceiveToken:(NSData *)arg2 forTopic:(NSString *)arg3 identifier:(NSString *)arg4;
@end

