//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject
{
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
}

+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint; // @synthesize daemonXPCEndpoint=_daemonXPCEndpoint;
- (id)synchronousDaemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)invalidateConnection;
- (id)remoteObjectInterface;
- (id)connection;
- (id)init;

@end

