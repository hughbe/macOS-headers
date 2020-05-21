//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface NEIPC : NSObject
{
    CDUnknownBlockType _messageHandler;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_listener;
}

- (void).cxx_destruct;
@property(retain) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(copy) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) BOOL connected;
- (void)logMessageType:(unsigned int)arg1 data:(id)arg2 actionString:(id)arg3;
- (BOOL)sendMessageWithType:(unsigned int)arg1 data:(id)arg2 replyQueue:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)stop;
- (void)startWithEndpoint:(id)arg1 queue:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (id)startInListenModeWithQueue:(id)arg1 messageHandler:(CDUnknownBlockType)arg2;
- (void)setupMessageHandlingWithQueue:(id)arg1;
- (void)handleMessage:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end

