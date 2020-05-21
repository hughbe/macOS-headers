//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WPDaemon/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, WPDAdvertisingManager, WPDClient, WPDObjectDiscoveryManager, WPDPipeManager, WPDScanManager, WPDState, WPDStatsManager, WPDZoneManager;
@protocol OS_dispatch_queue;

@interface WPDaemonServer : NSObject <NSXPCListenerDelegate>
{
    unsigned char _coreBluetoothState;
    BOOL _screenOff;
    BOOL _systemLocked;
    BOOL _isTesting;
    int _lockStatusChangedToken;
    int _screenStateToken;
    int _firstUnlockStatusChangedToken;
    long long _cbState;
    WPDState *_wpdState;
    NSObject<OS_dispatch_queue> *_serverQueue;
    WPDScanManager *_scanManager;
    WPDAdvertisingManager *_advertisingManager;
    WPDZoneManager *_zoneManager;
    WPDPipeManager *_pipeManager;
    WPDObjectDiscoveryManager *_objectDiscoveryManager;
    WPDClient *_spObjectDiscoveryClient;
    NSArray *_managers;
    WPDStatsManager *_statsManager;
    NSMutableDictionary *_clients;
    NSMutableSet *_testClients;
    NSMutableSet *_privilegedClients;
    NSMapTable *_clientsWithMach;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    unsigned long long _stateCaptureHandle;
}

+ (void)initialize;
+ (BOOL)isAppleTV;
+ (BOOL)isHomePod;
- (void).cxx_destruct;
@property BOOL isTesting; // @synthesize isTesting=_isTesting;
@property BOOL systemLocked; // @synthesize systemLocked=_systemLocked;
@property BOOL screenOff; // @synthesize screenOff=_screenOff;
@property(nonatomic) int firstUnlockStatusChangedToken; // @synthesize firstUnlockStatusChangedToken=_firstUnlockStatusChangedToken;
@property(nonatomic) int screenStateToken; // @synthesize screenStateToken=_screenStateToken;
@property(nonatomic) int lockStatusChangedToken; // @synthesize lockStatusChangedToken=_lockStatusChangedToken;
@property(readonly) unsigned long long stateCaptureHandle; // @synthesize stateCaptureHandle=_stateCaptureHandle;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMapTable *clientsWithMach; // @synthesize clientsWithMach=_clientsWithMach;
@property(retain) NSMutableSet *privilegedClients; // @synthesize privilegedClients=_privilegedClients;
@property(retain) NSMutableSet *testClients; // @synthesize testClients=_testClients;
@property(retain) NSMutableDictionary *clients; // @synthesize clients=_clients;
@property(retain, nonatomic) WPDStatsManager *statsManager; // @synthesize statsManager=_statsManager;
@property(retain, nonatomic) NSArray *managers; // @synthesize managers=_managers;
@property(readonly) WPDClient *spObjectDiscoveryClient; // @synthesize spObjectDiscoveryClient=_spObjectDiscoveryClient;
@property(retain) WPDObjectDiscoveryManager *objectDiscoveryManager; // @synthesize objectDiscoveryManager=_objectDiscoveryManager;
@property(retain) WPDPipeManager *pipeManager; // @synthesize pipeManager=_pipeManager;
@property(retain) WPDZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(retain) WPDAdvertisingManager *advertisingManager; // @synthesize advertisingManager=_advertisingManager;
@property(retain) WPDScanManager *scanManager; // @synthesize scanManager=_scanManager;
@property(retain) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
@property unsigned char coreBluetoothState; // @synthesize coreBluetoothState=_coreBluetoothState;
@property(retain, nonatomic) WPDState *wpdState; // @synthesize wpdState=_wpdState;
@property(nonatomic) long long cbState; // @synthesize cbState=_cbState;
- (id)generateStateDump;
- (void)dumpDaemonState;
- (struct os_state_data_s *)dumpToLog:(BOOL)arg1 State:(BOOL)arg2;
- (void)disableScanningForClient:(id)arg1;
- (void)enableTestMode;
- (void)enableTestMode:(BOOL)arg1;
- (void)lockStateUpdate;
- (void)screenStateUpdate;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)startListening;
- (void)enableRanging:(BOOL)arg1;
- (void)notifyClientsOfStateChange;
- (id)clientForMachName:(id)arg1;
- (void)registerClient:(id)arg1 withMachName:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)notifyManagersOfStateChange;
- (void)updateState;
- (void)cbManagerDidUpdateState:(id)arg1;
- (id)getAllClients;
- (id)getClientForUUID:(id)arg1;
- (BOOL)isClientTestMode:(id)arg1;
- (void)dealloc;
- (void)initClients;
- (void)initManagers;
- (id)init;
- (BOOL)isRangingEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

