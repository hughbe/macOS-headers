//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreBluetooth/CBManager.h>

@class NSMapTable, NSMutableArray;
@protocol CBCentralManagerDelegate;

@interface CBCentralManager : CBManager
{
    struct {
        unsigned int willRestoreState:1;
        unsigned int didDiscoverPeripheral:1;
        unsigned int didConnectPeripheral:1;
        unsigned int didFailToConnectPeripheral:1;
        unsigned int didDisconnectPeripheral:1;
        unsigned int didUpdatePeripheralConnectionState:1;
        unsigned int didFindPeripheral:1;
        unsigned int didLosePeripheral:1;
        unsigned int didLoseZone:1;
        unsigned int didUpdateConnectionParameters:1;
        unsigned int connectionEventDidOccur:1;
        unsigned int didSendBytesToPeripheralWithError:1;
        unsigned int didReceiveDataFromPeripheral:1;
        unsigned int didDiscoverMultiplePeripherals:1;
        unsigned int didUpdateANCSAuthorizationForPeripheral:1;
        unsigned int canSendDataToPeripheral:1;
        unsigned int didFailToStartScanWithError:1;
        unsigned int didUpdateControllerBTClockForPeripheral:1;
    } _delegateFlags;
    BOOL _isScanning;
    id <CBCentralManagerDelegate> _delegate;
    NSMapTable *_peripherals;
    NSMutableArray *_discoveredPeripherals;
}

+ (BOOL)supportsFeatures:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(retain) NSMutableArray *discoveredPeripherals; // @synthesize discoveredPeripherals=_discoveredPeripherals;
@property(readonly, retain, nonatomic) NSMapTable *peripherals; // @synthesize peripherals=_peripherals;
@property(nonatomic) BOOL isScanning; // @synthesize isScanning=_isScanning;
@property(nonatomic) __weak id <CBCentralManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (BOOL)isMsgAllowedAlways:(unsigned short)arg1;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)arg1;
- (void)handleAncsAuthChanged:(id)arg1;
- (void)handleDidReceiveDataFromPeripheral:(id)arg1;
- (void)handleDidSendBytesToPeripheralwithError:(id)arg1;
- (id)createPeripheralWithAddress:(id)arg1 andIdentifier:(id)arg2;
- (id)retrievePeripheralWithAddress:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)HandleControllerBTClockUpdateMsg:(id)arg1;
- (void)handleZoneLost:(id)arg1;
- (void)handleAdvertisingAddressChanged:(id)arg1;
- (void)handleApplicationActivityEvent:(id)arg1;
- (void)handlePeripheralTrackingUpdated:(id)arg1;
- (void)handlePeripheralConnectionStateUpdated:(id)arg1;
- (void)handleScanFailedToStartWithError:(id)arg1;
- (void)handleApplicationConnectionEventDidOccur:(id)arg1;
- (void)handlePeripheralDisconnectionCompleted:(id)arg1;
- (void)handlePeripheralCLReady:(id)arg1;
- (void)handlePeripheralConnectionCompleted:(id)arg1;
- (void)handlePeripheralDiscovered:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleSupportedFeatures:(id)arg1;
- (id)isApplicationConnectedToAnyPeripherals:(id)arg1;
- (id)stopConnectionEventCounterForPeripheral:(id)arg1;
- (id)startConnectionEventCounterForPeripheral:(id)arg1;
- (void)setMatchActionRules:(id)arg1;
- (void)setConnectionEventOptions:(id)arg1;
- (void)sendData:(id)arg1 toPeripheral:(id)arg2;
- (void)resumeScans;
- (void)pauseScans;
- (void)resumeLeConnectionManager;
- (void)pauseLeConnectionManager;
- (void)registerForConnectionEventsWithOptions:(id)arg1;
- (void)enablePrivateModeForPeripheral:(id)arg1 forDuration:(unsigned short)arg2;
- (void)stopTrackingPeripheral:(id)arg1 options:(id)arg2;
- (void)startTrackingPeripheral:(id)arg1 options:(id)arg2;
- (void)setDesiredConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)cancelPeripheralConnection:(id)arg1 force:(BOOL)arg2;
- (void)cancelPeripheralConnection:(id)arg1;
- (void)cancelPeripheralConnection:(id)arg1 options:(id)arg2;
- (void)setLESetPhy:(id)arg1 options:(id)arg2;
- (void)setDataLengthChange:(id)arg1 options:(id)arg2;
- (unsigned short)getRemainingAdvancedMatchingRule;
- (unsigned short)getTotalSupportedAdvancedMatchingRules;
- (void)removeSingleEntryDuplicateFilter:(id)arg1;
- (void)setEnhancedSetScanParamtersMultiCore:(id)arg1;
- (void)setEnhancedScanEnable:(id)arg1;
- (void)removeAdvancedMatchingRule:(id)arg1;
- (void)addAdvancedMatchingRule:(id)arg1;
- (void)wipeDuplicateFilterList:(id)arg1;
- (void)randomizeAFHMapForPeripheral:(id)arg1;
- (void)connectPeripheral:(id)arg1 options:(id)arg2;
- (void)stopScan;
- (void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(BOOL)arg2;
- (id)retrieveConnectedPeripheralsWithServices:(id)arg1;
- (void)retrieveConnectedPeripherals;
- (id)retrieveState;
- (id)retrievePeripheralsWithIdentifiers:(id)arg1;
- (void)retrievePeripherals:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)dataArrayToUUIDArray:(id)arg1;
- (void)orphanPeripherals;
- (void)forEachPeripheral:(CDUnknownBlockType)arg1;
- (id)peerWithInfo:(id)arg1;
- (id)peripheralWithInfo:(id)arg1;
- (id)peripheralWithIdentifier:(id)arg1;

@end

