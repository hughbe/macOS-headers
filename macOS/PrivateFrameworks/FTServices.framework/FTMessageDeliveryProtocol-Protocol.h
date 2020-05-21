//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/NSObject-Protocol.h>

@class IDSBaseMessage, NSArray, NSString;

@protocol FTMessageDeliveryProtocol <NSObject>

@optional
@property unsigned long long maxConcurrentMessages;
@property(readonly) long long maxLargeMessageSize;
@property(readonly) long long maxMessageSize;
@property(readonly) NSArray *allMessages;
@property(readonly) NSArray *queuedMessages;
@property(readonly) IDSBaseMessage *currentMessage;
@property BOOL logToRegistration;
@property BOOL retryInAirplaneMode;
@property(readonly) BOOL busy;
@property(readonly) BOOL hasQueuedItems;
@property(copy, nonatomic) NSString *userAgent;
- (void)cancelMessage:(IDSBaseMessage *)arg1;
- (void)networkStateChanged;
- (void)invalidate;
- (BOOL)sendMessage:(IDSBaseMessage *)arg1;
@end

