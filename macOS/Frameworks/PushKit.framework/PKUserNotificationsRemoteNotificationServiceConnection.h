//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PushKit/PKUserNotificationServerRemoteNotificationXPCClient-Protocol.h>

@class NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PKUserNotificationsRemoteNotificationServiceConnection : NSObject <PKUserNotificationServerRemoteNotificationXPCClient>
{
    NSMutableSet *_registries;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSString *_bundleIdentifier;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callOutQueue; // @synthesize callOutQueue=_callOutQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableSet *registries; // @synthesize registries=_registries;
- (void)_queue_remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_queue_remoteUserNotificationsRegistrationSucceededWithDeviceToken:(id)arg1;
- (void)_queue_invalidatedConnection;
- (void)_queue_interruptedConnection;
- (id)_queue_ensureConnection;
- (void)_invalidate;
- (void)didReceiveDeviceToken:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)remoteUserNotificationPayloadReceived:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)allowsRemoteNotifications;
- (void)unregisterPushRegistry:(id)arg1;
- (void)registerPushRegistry:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

