//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MRXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_customXpcHandlers;
    NSObject<OS_xpc_object> *_connection;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _invalidationHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (void)_registerCallbacks;
- (id)sendSyncMessage:(id)arg1 error:(id *)arg2;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)sendMessageWithType:(unsigned long long)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)removeCustomXPCHandler:(unsigned long long)arg1;
- (void)addCustomXPCHandler:(CDUnknownBlockType)arg1 forKey:(unsigned long long)arg2;
@property(readonly, nonatomic) int pid;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 queue:(id)arg2;

@end

