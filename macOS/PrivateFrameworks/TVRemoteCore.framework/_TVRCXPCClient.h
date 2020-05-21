//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVRemoteCore/TVRCXPCRequestProtocol-Protocol.h>
#import <TVRemoteCore/TVRCXPCResponseProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol TVRCXPCRequestProtocol;

@interface _TVRCXPCClient : NSObject <TVRCXPCResponseProtocol, TVRCXPCRequestProtocol>
{
    NSXPCConnection *_xpcConnection;
    id <TVRCXPCRequestProtocol> _remoteObject;
    NSMutableDictionary *_eventObserversByID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *eventObserversByID; // @synthesize eventObserversByID=_eventObserversByID;
@property(retain, nonatomic) id <TVRCXPCRequestProtocol> remoteObject; // @synthesize remoteObject=_remoteObject;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)_postInvalidationNotification;
- (void)_broadcastStateUpdateToDevices:(id)arg1;
- (void)_disconnectAllDevices;
- (void)_setupConnectionIfNeeded;
- (void)deviceQueryUpdatedDiscoveredDevices:(id)arg1;
- (void)deviceWithState:(id)arg1 encounteredAuthChallengeOfType:(long long)arg2 attributes:(long long)arg3 codeToEnterOnDevice:(id)arg4 throttleSeconds:(long long)arg5;
- (void)deviceUpdatedState:(id)arg1;
- (void)sendEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 options:(id)arg3 response:(CDUnknownBlockType)arg4;
- (void)fetchActiveMREndpointUIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)endDeviceQuery;
- (void)beginDeviceQuery;
- (void)stopVoiceRecordingForDeviceWithIdentifier:(id)arg1;
- (void)startVoiceRecordingForDeviceWithIdentifier:(id)arg1;
- (void)setVoiceRecorderAutomaticRecording:(BOOL)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)sendInputTextPayload:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendInputReturnKeyToDeviceWithIdentifier:(id)arg1;
- (void)sendInputText:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendGameControllerEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendTouchEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)sendButtonEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
- (void)cancelAuthChallengeForDeviceWithIdentifier:(id)arg1;
- (void)fulfillAuthChallengeForDeviceWithIdentifier:(id)arg1 withLocallyEnteredCode:(id)arg2;
- (void)closeConnectionToDeviceWithIdentifier:(id)arg1 withType:(unsigned long long)arg2;
- (void)openConnectionToDeviceWithIdentifier:(id)arg1;
- (void)removeEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2;
- (void)addEventObserver:(id)arg1 forDeviceWithIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

