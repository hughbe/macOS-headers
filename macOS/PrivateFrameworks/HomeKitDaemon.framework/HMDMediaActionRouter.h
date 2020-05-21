//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMPCSessionDataMediaProfileSource-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMDResidentDevice, NSObject, NSString, NSUUID;
@protocol HMDMediaActionRouterDataSource, OS_dispatch_queue;

@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver>
{
    BOOL _shouldExecuteOnCurrentDevice;
    id <HMDMediaActionRouterDataSource> _dataSource;
    HMDResidentDevice *_targetResidentDeviceOverride;
}

- (void).cxx_destruct;
@property(nonatomic) __weak HMDResidentDevice *targetResidentDeviceOverride; // @synthesize targetResidentDeviceOverride=_targetResidentDeviceOverride;
@property(readonly, nonatomic) BOOL shouldExecuteOnCurrentDevice; // @synthesize shouldExecuteOnCurrentDevice=_shouldExecuteOnCurrentDevice;
@property(readonly, nonatomic) __weak id <HMDMediaActionRouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)mediaProfileWithUUID:(id)arg1;
@property(readonly) __weak HMDHome *home;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)executeMediaActionWithSessionData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1;
- (void)routeMessage:(id)arg1;
- (void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)routeMediaActionForExecution:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_registerForMessages;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

