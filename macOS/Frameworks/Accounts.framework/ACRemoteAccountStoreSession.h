//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/NSXPCProxyCreating-Protocol.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating>
{
    NSXPCConnection *_connection;
    struct os_unfair_lock_s _connectionLock;
    BOOL _notificationsEnabled;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSString *_effectiveBundleID;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(copy, nonatomic) NSString *effectiveBundleID; // @synthesize effectiveBundleID=_effectiveBundleID;
@property(readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)_locked_connection:(id)arg1 setNotificationsEnabled:(BOOL)arg2;
- (void)_locked_connection:(id)arg1 setEffectiveBundleID:(id)arg2;
- (void)_setConnectionInvalidated;
- (void)_setConnectionInterrupted;
- (void)_locked_configureRemoteAccountStoreWithConnection:(id)arg1;
- (id)_connection;
- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)init;

@end

