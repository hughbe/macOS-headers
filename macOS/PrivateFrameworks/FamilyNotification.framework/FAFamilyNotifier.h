//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyNotification/FAFamilyNotifierRemoteObjectProtocol-Protocol.h>
#import <FamilyNotification/NSXPCListenerDelegate-Protocol.h>

@class NSLock, NSString, NSXPCConnection, NSXPCListener;
@protocol FAFamilyNotificationDelegate;

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate>
{
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListener *_listener;
    NSString *_identifier;
    NSString *_serviceName;
    id <FAFamilyNotificationDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <FAFamilyNotificationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void)didClearNotification:(id)arg1;
- (void)didDismissNotification:(id)arg1;
- (void)didActivateNotification:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_agentConnectionFailedToBootstrap;
- (void)_agentConnectionWasInvalidated;
- (void)_agentConnectionWasInterrupted;
- (id)agentConnection;
- (id)_pendingNotificationsForAllClients;
- (id)pendingNotifications;
- (id)_pendingNotificationsWithClientIdentifier:(id)arg1;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)arg1;
- (void)deliverNotification:(id)arg1;
- (id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

