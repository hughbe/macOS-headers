//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/WPNearbyDelegate-Protocol.h>

@class CURetrier, NSMutableArray, NSMutableSet, NSString, SFBLEData, SFBLEDevice, WPNearby;
@protocol OS_dispatch_queue;

@interface SFBLEConnection : NSObject <WPNearbyDelegate>
{
    BOOL _acceptor;
    BOOL _activateCalled;
    NSMutableSet *_clients;
    BOOL _connected;
    BOOL _connecting;
    double _connectStartTime;
    CURetrier *_connectRetrier;
    SFBLEData *_currentData;
    NSMutableArray *_dataSendQueue;
    BOOL _invalidateCalled;
    WPNearby *_wpNearby;
    struct LogCategory *_ucat;
    BOOL _bleEncrypted;
    BOOL _latencyCritical;
    BOOL _lePipeCapable;
    unsigned int _sessionFlags;
    CDUnknownBlockType _bluetoothBandwidthChangedHandler;
    CDUnknownBlockType _bluetoothStateChangedHandler;
    CDUnknownBlockType _connectionStateChangedHandler;
    CDUnknownBlockType _dataHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    SFBLEDevice *_peerDevice;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL lePipeCapable; // @synthesize lePipeCapable=_lePipeCapable;
@property(nonatomic) BOOL latencyCritical; // @synthesize latencyCritical=_latencyCritical;
@property(nonatomic) BOOL bleEncrypted; // @synthesize bleEncrypted=_bleEncrypted;
@property(nonatomic) unsigned int sessionFlags; // @synthesize sessionFlags=_sessionFlags;
@property(retain, nonatomic) SFBLEDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType dataHandler; // @synthesize dataHandler=_dataHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionStateChangedHandler; // @synthesize connectionStateChangedHandler=_connectionStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothBandwidthChangedHandler; // @synthesize bluetoothBandwidthChangedHandler=_bluetoothBandwidthChangedHandler;
@property(nonatomic) BOOL acceptor; // @synthesize acceptor=_acceptor;
- (void)nearby:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3;
- (void)nearby:(id)arg1 didSendData:(id)arg2 toPeer:(id)arg3 error:(id)arg4;
- (void)nearby:(id)arg1 didDisconnectFromPeer:(id)arg2 error:(id)arg3;
- (void)nearby:(id)arg1 didConnectToPeer:(id)arg2 transport:(long long)arg3 error:(id)arg4;
- (void)nearbyDidUpdateState:(id)arg1;
- (void)nearbyDidChangeBluetoothBandwidthState:(id)arg1;
- (BOOL)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_cleanupQueuedData:(int)arg1;
- (void)_processQueuedData;
- (void)_connectIfNeeded;
- (void)sendDataDirect:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_invalidate;
- (void)invalidate;
- (void)_activate;
- (void)activateDirect;
- (void)activate;
@property(readonly, nonatomic) long long connectionState;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 acceptor:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

