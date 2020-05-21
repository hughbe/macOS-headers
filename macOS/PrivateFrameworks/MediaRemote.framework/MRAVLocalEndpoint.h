//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVConcreteEndpoint.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class MRAVOutputContext, MROutputContextController, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRAVLocalEndpoint : MRAVConcreteEndpoint <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRAVOutputContext *_outputContext;
    NSString *_uniqueIdentifier;
    NSArray *_outputDevices;
    MROutputContextController *_outputContextController;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;
- (void).cxx_destruct;
- (void)_reloadOutputDevicesFromContext;
- (void)_ouputDevicesForOutputDeviceUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1;
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1;
- (void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)connectToExternalDeviceWithCompletion:(CDUnknownBlockType)arg1;
- (id)origin;
- (BOOL)canModifyGroupMembership;
- (BOOL)isProxyGroupPlayer;
- (long long)connectionType;
- (id)uniqueIdentifier;
@property(copy, nonatomic) NSArray *outputDevices;
- (id)personalOutputDevices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)_registerForNotifications;
- (id)initWithOutputDevices:(id)arg1;
- (id)initWithOutputContext:(id)arg1;

@end

