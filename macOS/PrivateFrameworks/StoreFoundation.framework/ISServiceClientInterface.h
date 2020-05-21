//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreFoundation/ISServiceProxy.h>

#import <StoreFoundation/ISServiceRemoteObject-Protocol.h>

@class ISServiceDelegate, NSLock, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ISServiceClientInterface : ISServiceProxy <ISServiceRemoteObject>
{
    NSLock *_serviceProxyLock;
    NSXPCConnection *_conn;
    ISServiceDelegate *_delegate;
}

- (void).cxx_destruct;
@property __weak ISServiceDelegate *delegate; // @synthesize delegate=_delegate;
@property(readonly) NSXPCConnection *conn; // @synthesize conn=_conn;
- (void)startService;
- (void)displayDialog:(id)arg1;
- (void)signURLRequest:(id)arg1 service:(id)arg2;
- (BOOL)copyAccountID:(id *)arg1 byAuthenticatingWithContext:(id)arg2 returningError:(id *)arg3;
- (void)setStoreFrontID:(id)arg1;
- (id)storeURLSchemeForAmbiguousURL:(id)arg1;
- (BOOL)shouldSendGUIDWithRequestForURL:(id)arg1;
- (id)httpHeadersForURL:(id)arg1 withDSID:(id)arg2;
- (BOOL)loadURLBagWithType:(long long)arg1 returningError:(id *)arg2;
- (BOOL)urlIsTrustedByURLBag:(id)arg1;
- (id)urlForURLBagKey:(id)arg1;
- (id)valueForURLBagKey:(id)arg1;
- (id)accountWithDSID:(id)arg1;
- (id)primaryAccount;
- (BOOL)authIsExpired;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
- (id)exportedObjectInterface;
- (id)exportedObjectProtocol;
- (id)remoteObjectProtocol;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

