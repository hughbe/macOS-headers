//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebInspector/RWIBaseManagerDelegate-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, RWIApplication, RWIBaseManager, RWINotificationManager, RWITarget, SimDeviceSet, SimServiceContext;
@protocol OS_dispatch_queue, RWIManagerDelegate, _RWIRelayToClientMessageReceiver;

@interface RWIManager : NSObject <RWIBaseManagerDelegate>
{
    RWIBaseManager *_baseManager;
    NSMutableDictionary *_debuggers;
    struct _AMDeviceNotificationContext *_notificationRef;
    unsigned int _powerConnection;
    unsigned int _powerNotifier;
    struct IONotificationPort *_powerNotificationPort;
    NSObject<OS_dispatch_queue> *_simulatorAccessQueue;
    SimServiceContext *_simulatorService;
    SimDeviceSet *_simulatorDevices;
    struct Optional<unsigned long long> _simulatorDeviceSetNotificationHandler;
    id <RWIManagerDelegate> _delegate;
    RWINotificationManager *_notificationManager;
}

+ (id)sharedManager;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) RWINotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property(nonatomic) __weak id <RWIManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)currentMachine;
- (void)updateDriver:(id)arg1 toState:(BOOL)arg2;
- (void)unmanageDriver:(id)arg1;
- (id)manageDriver:(id)arg1 forTarget:(id)arg2;
- (BOOL)unregisterNotificationHandler:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)registerNotificationHandlerOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (unsigned long long)registerNotificationHandler:(CDUnknownBlockType)arg1;
- (void)receivedData:(id)arg1 forDestination:(id)arg2;
- (id)_drivableForDestination:(id)arg1;
- (id)_debuggerForDestination:(id)arg1;
- (void)automaticInspectionCandidate:(id)arg1 sessionIdentifier:(id)arg2;
- (void)willRemoveDriver:(id)arg1;
- (void)didAddDriver:(id)arg1;
- (void)willRemoveDebuggable:(id)arg1;
- (void)didAddDebuggable:(id)arg1;
- (void)willRemoveApplication:(id)arg1;
- (void)didAddApplication:(id)arg1;
- (void)serviceConnectionDidClose:(id)arg1;
- (void)serviceConnectionClosed:(id)arg1;
- (void)_serviceConnectionClosed:(id)arg1;
- (void)socketDidCloseFromSession:(id)arg1;
- (void)socketDidCloseFromDebugger:(id)arg1;
- (void)socketSend:(id)arg1 fromSession:(id)arg2;
- (void)socketSend:(id)arg1 fromDebugger:(id)arg2;
- (void)socketSetupForSession:(id)arg1;
- (void)socketSetupForDebugger:(id)arg1 pauseImmediately:(BOOL)arg2;
- (void)_removeCurrentMachineTarget;
- (void)_createCurrentMachineTarget;
- (void)_systemDidWake;
- (void)_systemWillSleep;
- (void)powerNotification:(unsigned int)arg1 argument:(void *)arg2;
- (void)_resubscribeForDeviceNotifications;
- (void)_removeDevices;
- (id)_deviceForAMDeviceRef:(struct _AMDevice *)arg1;
- (void)deviceNotification:(struct _AMDeviceNotificationInfo *)arg1;
- (void)targetHasBasicInformation:(id)arg1;
- (void)_addDeviceRef:(struct _AMDevice *)arg1;
- (void)_removeDeviceRef:(struct _AMDevice *)arg1;
- (void)_removeDevice:(id)arg1;
- (void)_sendTargetRemovedEvent:(id)arg1;
- (void)_sendTargetAddedEvent:(id)arg1;
- (void)createDrivableForSession:(id)arg1 usingApplication:(id)arg2;
- (void)requestDriver:(id)arg1 shouldBeActive:(BOOL)arg2 forwardIfUnhandled:(BOOL)arg3;
- (void)indicateDebuggable:(id)arg1 enabled:(BOOL)arg2;
- (id)openChannelForDebuggable:(id)arg1;
- (void)openInspectorWithConfiguration:(id)arg1 forDebuggable:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSObject<_RWIRelayToClientMessageReceiver> *messageReceiver;
@property(readonly, nonatomic) RWIApplication *currentApplication;
@property(readonly, nonatomic) RWITarget *currentTarget;
@property(readonly, nonatomic) NSSet *capableTargets;
@property(readonly, nonatomic) NSSet *readyTargets;
@property(readonly, nonatomic) NSSet *targets;
- (void)_processSimulatorWithChangedState:(id)arg1;
- (void)_handleSimulatorDeviceSetNotification:(id)arg1;
- (void)_unregisterForSimulatorNotifications;
- (void)_registerForSimulatorNotifications;
- (BOOL)_isConnectedToAnyLegacySimulator;
- (void)_unregisterForPowerNotifications;
- (void)_registerForPowerNotifications;
- (void)_unregisterForDeviceNotifications;
- (void)_registerForDeviceNotifications;
- (void)_createInitialTargets;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

