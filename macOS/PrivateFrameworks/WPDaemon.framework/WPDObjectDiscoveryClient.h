//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WPDaemon/WPDClient.h>

@class WPDObjectDiscoveryData, WPDObjectDiscoveryManager, WPDSearchPartyAgent;

@interface WPDObjectDiscoveryClient : WPDClient
{
    BOOL _pendingSent;
    WPDObjectDiscoveryManager *_objectDiscoveryManager;
    WPDSearchPartyAgent *_spAgent;
    WPDObjectDiscoveryData *_keyAddressAndPayload;
    unsigned long long _keyRequestID;
    unsigned long long _tokenRequestID;
}

- (void).cxx_destruct;
@property unsigned long long tokenRequestID; // @synthesize tokenRequestID=_tokenRequestID;
@property unsigned long long keyRequestID; // @synthesize keyRequestID=_keyRequestID;
@property(readonly) WPDObjectDiscoveryData *keyAddressAndPayload; // @synthesize keyAddressAndPayload=_keyAddressAndPayload;
@property(retain) WPDSearchPartyAgent *spAgent; // @synthesize spAgent=_spAgent;
@property __weak WPDObjectDiscoveryManager *objectDiscoveryManager; // @synthesize objectDiscoveryManager=_objectDiscoveryManager;
@property BOOL pendingSent; // @synthesize pendingSent=_pendingSent;
- (void)sendTestRequest:(id)arg1;
- (void)notifyClientObjectDiscoveryStateChange:(long long)arg1;
- (void)notifyClientStateChange:(long long)arg1 Restricted:(BOOL)arg2;
- (void)stopAdvertising:(id)arg1;
- (void)startAdvertising:(id)arg1;
- (void)completeSPBeaconingWithSuccess:(BOOL)arg1;
- (void)stopSPBeaconing;
- (void)startSPBeaconing;
- (void)updateSPBeaconing;
- (void)updateSPNearbyTokens;
- (void)destroy;
- (void)sendRegisteredWithDaemonAndContinuingSession:(BOOL)arg1;
- (void)registerWithDaemon:(id)arg1 forProcess:(id)arg2 machName:(id)arg3 shouldHoldVoucherForConnections:(BOOL)arg4;
- (void)endTestMode;
- (id)generateStateDump;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1 server:(id)arg2;

@end

