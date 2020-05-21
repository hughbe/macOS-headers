//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class IDSConnection, IDSDeviceIdentity, IDSMessageContext, IDSProtobuf, NSArray, NSData, NSDictionary, NSError, NSString;

@protocol IDSConnectionDelegate <NSObject>

@optional
- (void)connection:(IDSConnection *)arg1 didSendOpportunisticDataWithIdentifier:(NSString *)arg2 toIDs:(NSArray *)arg3;
- (void)connection:(IDSConnection *)arg1 incomingMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3;
- (void)connection:(IDSConnection *)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 fromID:(NSString *)arg3 hasBeenDeliveredWithContext:(id)arg4;
- (void)connection:(IDSConnection *)arg1 identifier:(NSString *)arg2 didSendWithSuccess:(BOOL)arg3 error:(NSError *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 connectedDevicesChanged:(NSArray *)arg2;
- (void)connection:(IDSConnection *)arg1 nearbyDevicesChanged:(NSArray *)arg2;
- (void)connection:(IDSConnection *)arg1 devicesChanged:(NSArray *)arg2;
- (void)connection:(IDSConnection *)arg1 isActiveChanged:(BOOL)arg2;
- (void)connection:(IDSConnection *)arg1 incomingProtobuf:(IDSProtobuf *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingPendingMessageFromID:(NSString *)arg2 context:(IDSMessageContext *)arg3;
- (void)connection:(IDSConnection *)arg1 incomingAccessoryReportMessage:(NSString *)arg2 accessoryID:(NSString *)arg3 controllerID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
- (void)connection:(IDSConnection *)arg1 incomingAccessoryData:(NSData *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 didUpdateDeviceIdentity:(IDSDeviceIdentity *)arg2 error:(NSError *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingGroupData:(NSData *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingData:(NSData *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingEngramMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingMessage:(NSDictionary *)arg2 fromID:(NSString *)arg3 context:(IDSMessageContext *)arg4;
- (void)connection:(IDSConnection *)arg1 incomingOpportunisticData:(NSData *)arg2 withIdentifier:(NSString *)arg3 fromID:(NSString *)arg4 context:(IDSMessageContext *)arg5;
@end

