//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceIdXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_sendReplyMessageWithResult:(BOOL)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4;
- (void)_handleClientError:(id)arg1 client:(id)arg2;
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;
- (void)_handleClientEvent:(id)arg1;
- (void)activateConnection;
- (id)initWithConnection:(id)arg1;

@end

