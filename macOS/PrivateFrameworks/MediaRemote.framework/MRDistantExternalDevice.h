//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRExternalDevice.h>

#import <MediaRemote/MRAVDistantExternalDeviceClientProtocol-Protocol.h>

@class MRAVDistantExternalDeviceMetadata, NSObject, NSString, NSXPCConnection, NSXPCListenerEndpoint, _MROriginProtobuf;
@protocol OS_dispatch_queue;

@interface MRDistantExternalDevice : MRExternalDevice <MRAVDistantExternalDeviceClientProtocol>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    MRAVDistantExternalDeviceMetadata *_externalDeviceMetadata;
    NSXPCConnection *_hostedExternalDeviceConnection;
    unsigned long long _callbacks;
    unsigned long long _deviceNotifications;
    unsigned int _connectionState;
    _MROriginProtobuf *_customOrigin;
    BOOL _isValid;
    BOOL _hasEverAttemptedToConnect;
    CDUnknownBlockType _connectionStateCallback;
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;
    CDUnknownBlockType _nameCallback;
    NSObject<OS_dispatch_queue> *_nameCallbackQueue;
    CDUnknownBlockType _customDataCallback;
    NSObject<OS_dispatch_queue> *_customDataCallbackQueue;
    CDUnknownBlockType _volumeCallback;
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;
}

+ (id)_notificationSerialQueue;
+ (id)clientInterface;
+ (id)serviceInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // @synthesize volumeCallbackQueue=_volumeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeCallback; // @synthesize volumeCallback=_volumeCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue; // @synthesize customDataCallbackQueue=_customDataCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType customDataCallback; // @synthesize customDataCallback=_customDataCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue; // @synthesize nameCallbackQueue=_nameCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType nameCallback; // @synthesize nameCallback=_nameCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(readonly, nonatomic) BOOL hasEverAttemptedToConnect; // @synthesize hasEverAttemptedToConnect=_hasEverAttemptedToConnect;
- (void)_updateHostedDeviceDesiredNotifications;
- (void)_updateHostedDeviceDesiredCallbacks;
- (void)_onSerialQueue_synchronousLoadExternalDeviceMetadataIfNecessary;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_hostedExternalDeviceConnection;
- (void)hostedExternalDeviceEndpointDidChange:(id)arg1;
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forEndpointWithIdentifier:(id)arg2 forOutputDeviceWithIdentifier:(id)arg3;
- (void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;
- (void)hostedExternalDeviceNameDidChange:(id)arg1;
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(id)arg2;
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;
- (void)sendCustomData:(id)arg1 withName:(id)arg2;
- (void)modifyOutputContextOfType:(unsigned int)arg1 addingDeviceUIDs:(id)arg2 removingDeviceUIDs:(id)arg3 settingDeviceUIDs:(id)arg4 withReplyQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setVolumeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)unpair;
- (void)disconnect:(id)arg1;
- (void)connectWithOptions:(unsigned int)arg1;
- (id)customOrigin;
- (id)deviceInfo;
- (void)_handleDeviceInfoDidChange:(id)arg1;
- (BOOL)isUsingSystemPairing;
- (BOOL)isPaired;
- (unsigned int)connectionState;
- (void)setWantsOutputDeviceNotifications:(BOOL)arg1;
- (BOOL)wantsOutputDeviceNotifications;
- (void)setWantsVolumeNotifications:(BOOL)arg1;
- (BOOL)wantsVolumeNotifications;
- (void)setWantsNowPlayingNotifications:(BOOL)arg1;
- (BOOL)wantsNowPlayingNotifications;
- (id)supportedMessages;
- (long long)port;
- (id)hostName;
- (id)name;
- (BOOL)isValid;
@property(readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
- (void)dealloc;
- (id)initWithExternalDeviceListenerEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

