//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CWFIO80211, CWFSCNetworkConfiguration, CWFSCNetworkReachability, NSCountedSet, NSMutableDictionary;
@protocol CWFXPCRequestProxyDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CWFXPCRequestProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSMutableDictionary *_apple80211Map;
    NSMutableDictionary *_SCNetworkServiceMap;
    NSMutableDictionary *_SCNetworkInterfaceMap;
    NSMutableDictionary *_EAP8021XMap;
    CWFSCNetworkConfiguration *_SCNetworkConfiguration;
    CWFSCNetworkReachability *_SCNetworkReachability;
    CWFIO80211 *_IO80211;
    NSCountedSet *_mutableEventTypes;
    BOOL _isMonitoringEvents;
    NSMutableDictionary *_mutableLinkDownStatusMap;
    NSMutableDictionary *_mutableRoamStatusMap;
    NSMutableDictionary *_mutableJoinStatusMap;
    NSMutableDictionary *_mutableAutoJoinTriggerMap;
    NSMutableDictionary *_mutableAutoJoinStatusMap;
    id <CWFXPCRequestProxyDelegate> _delegate;
}

- (void).cxx_destruct;
@property(retain) id <CWFXPCRequestProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (void)__getBSSIDHash:(id)arg1 XPCConnection:(id)arg2;
- (void)__getBSSID:(id)arg1 XPCConnection:(id)arg2;
- (void)__getSSIDHash:(id)arg1 XPCConnection:(id)arg2;
- (void)__getSSID:(id)arg1 XPCConnection:(id)arg2;
- (void)__getLinkDownStatus:(id)arg1;
- (void)__getAutoJoinStatus:(id)arg1;
- (void)__getJoinStatus:(id)arg1;
- (void)__getRoamStatus:(id)arg1;
- (void)__getEAP8021XClientStatus:(id)arg1;
- (void)__getEAP8021XControlState:(id)arg1;
- (void)__getEAP8021XControlMode:(id)arg1;
- (void)__getEAP8021XSupplicantState:(id)arg1;
- (void)__getDHCPLeaseExpirationTime:(id)arg1;
- (void)__getDHCPLeaseStartTime:(id)arg1;
- (void)__getNetworkReachability:(id)arg1;
- (void)__getDNSServerAddresses:(id)arg1;
- (void)__getIPv6ServiceName:(id)arg1;
- (void)__getIPv4ServiceName:(id)arg1;
- (void)__getIPv6ServiceID:(id)arg1;
- (void)__getIPv4ServiceID:(id)arg1;
- (void)__getNetServiceEnabled:(id)arg1;
- (void)__getNetServiceName:(id)arg1;
- (void)__getNetServiceID:(id)arg1;
- (void)__getIPv6InterfaceName:(id)arg1;
- (void)__getIPv4InterfaceName:(id)arg1;
- (void)__getIPv6Router:(id)arg1;
- (void)__getIPv4Router:(id)arg1;
- (void)__getIPv6Addresses:(id)arg1;
- (void)__getIPv4Addresses:(id)arg1;
- (void)__getIO80211InterfaceInfo:(id)arg1;
- (void)__getIO80211ControllerInfo:(id)arg1;
- (void)__getActivities:(id)arg1 XPCConnection:(id)arg2;
- (void)__getEventIDs:(id)arg1 XPCConnection:(id)arg2;
- (void)__getMACAddress:(id)arg1;
- (void)__getApple80211:(id)arg1;
- (void)__getKnownNetworkMatchingScanResult:(id)arg1;
- (id)__knownNetworkMatchingScanResult:(id)arg1;
- (void)__getKnownNetworkMatchingNetworkProfile:(id)arg1;
- (void)__getSecurity:(id)arg1;
- (void)__getWAPISubtype:(id)arg1;
- (void)__getWEPSubtype:(id)arg1;
- (void)__setAWDLPeerTrafficRegistration:(id)arg1;
- (void)__setChannel:(id)arg1;
- (void)__performScan:(id)arg1 XPCConnection:(id)arg2;
- (void)__getSystemActivities:(id)arg1 XPCManager:(id)arg2;
- (void)__getSystemEventIDs:(id)arg1 XPCManager:(id)arg2;
- (void)__updateEventRegistration:(id)arg1 XPCManager:(id)arg2;
- (void)__updatedEventTypes:(id)arg1 eventID:(id)arg2;
- (id)SCNetworkInterfaceWithInterfaceName:(id)arg1;
- (id)SCNetworkServiceWithInterfaceName:(id)arg1;
- (id)EAP8021XWithInterfaceName:(id)arg1;
- (id)apple80211WithInterfaceName:(id)arg1;
- (id)__SCNetworkInterfaceWithInterfaceName:(id)arg1;
- (id)__SCNetworkServiceWithInterfaceName:(id)arg1;
- (id)__EAP8021XWithInterfaceName:(id)arg1;
- (id)__apple80211WithInterfaceName:(id)arg1;
- (id)__knownNetworkProfiles;
- (id)__currentNetworkProfile;
- (id)__currentScanResult;
- (void)__handleAutoJoinStateChangedInternalEvent:(id)arg1;
- (void)__handleAssocDoneInternalEvent:(id)arg1;
- (void)__handleWillAssocInternalEvent:(id)arg1;
- (void)__autoJoinEndedWithResult:(BOOL)arg1 interfaceName:(id)arg2;
- (void)__updateAutoJoinState:(long long)arg1 interfaceName:(id)arg2;
- (void)__autoJoinStartedWithTrigger:(long long)arg1 interfaceName:(id)arg2;
- (void)__updateAutoJoinStatusWithJoin:(id)arg1;
- (void)__updateJoinStatusWithEAP8021X:(id)arg1;
- (void)__updateJoinStatusWithAuth:(id)arg1;
- (void)__updateJoinStatusWithIPv6:(id)arg1;
- (void)__updateJoinStatusWithIPv4:(id)arg1;
- (void)__updateJoinStatusWithError:(id)arg1 interaceName:(id)arg2;
- (void)__updateJoinStatusWithAssoc:(id)arg1;
- (void)__addJoinStatusWithScanResult:(id)arg1 knownNetworkProfile:(id)arg2 isAutoJoin:(BOOL)arg3 interfaceName:(id)arg4;
- (void)__setupEventHandlers;
- (void)__setupEventHandlersWithInterfaceName:(id)arg1;
- (void)__setRoamStatus:(id)arg1 interfaceName:(id)arg2;
- (void)__setAutoJoinStatus:(id)arg1 interfaceName:(id)arg2;
- (void)__setJoinStatus:(id)arg1 interfaceName:(id)arg2;
- (void)__setLinkDownStatus:(id)arg1 interfaceName:(id)arg2;
- (id)__roamStatusWithInterfaceName:(id)arg1;
- (id)__joinStatusWithInterfaceName:(id)arg1;
- (id)__autojoinStatusWithInterfaceName:(id)arg1;
- (id)__linkDownStatusWithInterfaceName:(id)arg1;
- (void)__updateEventMonitoringWithInterfaceName:(id)arg1;
- (int)__locationAuthorizationStatusForXPCConnection:(id)arg1;
- (BOOL)__isForegroundAppWithXPCConnection:(id)arg1;
- (id)__bundleIDForXPCConnection:(id)arg1;
- (id)__hashedBSSID:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;
- (id)__hashedSSID:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;
- (id)__vendorSpecificIdentifierForXPCConnection:(id)arg1;
- (id)__deviceUUID;
- (void)invalidate;
- (BOOL)isMonitoringEvents;
- (void)stopEventMonitoring;
- (void)startEventMonitoring;
- (void)XPCManager:(id)arg1 XPCConnection:(id)arg2 receivedXPCRequest:(id)arg3;
- (void)XPCManager:(id)arg1 sendXPCEvent:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)init;

@end

