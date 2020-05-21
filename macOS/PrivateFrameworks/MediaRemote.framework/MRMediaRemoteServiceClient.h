//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAVRoutingClientController, MRBlockGuard, MRMediaRemoteService, MRNotificationClient, MRNotificationServiceClient, NSArray, NSMutableArray, NSMutableSet, _MRNowPlayingPlayerPathProtobuf;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteServiceClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_registeredOrigins;
    MRAVRoutingClientController *_routingClientController;
    _MRNowPlayingPlayerPathProtobuf *_activePlayerPath;
    int _notifyRestoreClientStateForLaunch;
    NSMutableSet *_playerPathInvalidationHandlers;
    MRNotificationServiceClient *_notificationService;
    BOOL _xpcConnectionIsActive;
    MRBlockGuard *_xpcConnectionIgnoreNextInvalidationTimer;
    MRMediaRemoteService *_service;
    MRNotificationClient *_notificationClient;
    NSObject<OS_dispatch_queue> *_playbackQueueDispatchQueue;
}

+ (id)sharedServiceClient;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue; // @synthesize playbackQueueDispatchQueue=_playbackQueueDispatchQueue;
@property(readonly, nonatomic) MRNotificationClient *notificationClient; // @synthesize notificationClient=_notificationClient;
@property(readonly, nonatomic) MRMediaRemoteService *service; // @synthesize service=_service;
- (void)_callInvalidationHandler:(id)arg1;
- (void)_processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)_onQueue_processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)processPlayerPathInvalidationHandlersWithBlock:(CDUnknownBlockType)arg1;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1;
- (void)removeInvalidationHandler:(id)arg1;
- (id)addPlayerPathInvalidationHandler:(id)arg1;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isOriginRegistered:(id)arg1;
- (void)unregisterAllOriginsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterOrigin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *activePlayerPath;
- (void)_onQueue_setActivePlayerPath:(id)arg1;
@property(readonly, nonatomic) NSArray *registeredOrigins;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
- (id)debugDescription;
- (void)_resumeConnection;
- (void)_invalidateConnectionWithTimer:(BOOL)arg1;
- (void)_initializeConnection;
- (void)_registerCallbacks;
- (void)dealloc;
- (id)init;

@end

