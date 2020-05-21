//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSServiceConnectionContext-Protocol.h>
#import <BoardServices/BSXPCServiceConnectionMessaging-Protocol.h>

@class BSAtomicSignal, BSProcessHandle, BSXPCServiceConnection, NSString, _BSServiceConnectionConfiguration;
@protocol NSCopying;

@interface BSServiceConnection : NSObject <BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable>
{
    BSXPCServiceConnection *_connection;
    NSString *_service;
    NSString *_instance;
    id <NSCopying> _userInfo;
    struct os_unfair_lock_s _lock;
    _BSServiceConnectionConfiguration *_lock_config;
    BSAtomicSignal *_lock_activatedSignal;
    BOOL _lock_invalidated;
    BOOL _lock_noAssertInvalidatedOnDealloc;
}

+ (id)_connectionFromIncomingConnection:(id)arg1;
+ (id)_connectionWithEndpoint:(id)arg1 clientContextBuilder:(CDUnknownBlockType)arg2;
+ (id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(CDUnknownBlockType)arg2;
+ (id)connectionWithEndpoint:(id)arg1;
+ (id)currentContext;
+ (id)_nameForService:(id)arg1 instance:(id)arg2 host:(BOOL)arg3;
+ (id)_currentConnection;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *instance; // @synthesize instance=_instance;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, copy) NSString *description;
- (id)_clientContext;
- (void)_configureConnection:(CDUnknownBlockType)arg1;
- (id)createMessageWithCompletion:(CDUnknownBlockType)arg1;
- (id)createMessage;
- (void)invalidate;
@property(readonly, nonatomic) id remoteTarget;
- (void)activate;
- (void)configureConnection:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <NSCopying> userInfo;
@property(readonly, nonatomic) BSProcessHandle *remoteProcess;
- (void)dealloc;
- (id)_initWithConnection:(id)arg1 service:(id)arg2 instance:(id)arg3 clientContext:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

