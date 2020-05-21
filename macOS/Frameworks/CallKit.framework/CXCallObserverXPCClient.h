//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallObserverDataSource-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource>
{
    BOOL _clientsShouldConnect;
    int _clientsShouldConnectToken;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    NSMutableDictionary *_mutableCallUUIDToCallMap;
    NSHashTable *_delegates;
    NSXPCConnection *_connection;
}

+ (void)releaseSharedXPCClient;
+ (id)sharedXPCClient;
+ (id)sharedXPCClientSemaphore;
- (void).cxx_destruct;
@property(nonatomic) BOOL clientsShouldConnect; // @synthesize clientsShouldConnect=_clientsShouldConnect;
@property(nonatomic) int clientsShouldConnectToken; // @synthesize clientsShouldConnectToken=_clientsShouldConnectToken;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) NSMutableDictionary *mutableCallUUIDToCallMap; // @synthesize mutableCallUUIDToCallMap=_mutableCallUUIDToCallMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
- (oneway void)removeCall:(id)arg1;
- (oneway void)addOrUpdateCall:(id)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 isSynchronous:(BOOL)arg2;
- (void)_invalidate;
- (void)_requestCalls;
- (void)_removeCall:(id)arg1;
- (void)_addOrUpdateCall:(id)arg1;
- (void)_markAllCallsAsEnded;
- (void)invalidate;
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *callUUIDToCallMap;
- (void)dealloc;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

