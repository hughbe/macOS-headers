//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATRemoteTransportDelegate-Protocol.h>
#import <ClassroomKit/CATTransportDelegate-Protocol.h>

@class CATRemoteTransport, CATStateMachine, CATTransport, CRKRemoteEndpoint, NSString;
@protocol CRKGrowthFunction, CRKSessionDelegate;

@interface CRKSession : NSObject <CATTransportDelegate, CATRemoteTransportDelegate>
{
    CATStateMachine *mFSM;
    CATRemoteTransport *mTransport;
    double mCurrentBackoffInterval;
    BOOL _allowUntrustedConnections;
    BOOL _requiresBeacon;
    id <CRKSessionDelegate> _delegate;
    CRKRemoteEndpoint *_endpoint;
    id <CRKGrowthFunction> _backoffGrowthFunction;
    double _lostBeaconTimeout;
    double _willLoseBeaconWarningTimeout;
    double _failedConnectionRetryInterval;
}

- (void).cxx_destruct;
@property(nonatomic) double failedConnectionRetryInterval; // @synthesize failedConnectionRetryInterval=_failedConnectionRetryInterval;
@property(nonatomic) double willLoseBeaconWarningTimeout; // @synthesize willLoseBeaconWarningTimeout=_willLoseBeaconWarningTimeout;
@property(nonatomic) double lostBeaconTimeout; // @synthesize lostBeaconTimeout=_lostBeaconTimeout;
@property(readonly, nonatomic) id <CRKGrowthFunction> backoffGrowthFunction; // @synthesize backoffGrowthFunction=_backoffGrowthFunction;
@property(nonatomic) BOOL requiresBeacon; // @synthesize requiresBeacon=_requiresBeacon;
@property(readonly, nonatomic) BOOL allowUntrustedConnections; // @synthesize allowUntrustedConnections=_allowUntrustedConnections;
@property(readonly) CRKRemoteEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) __weak id <CRKSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CATTransport *transport; // @synthesize transport=mTransport;
@property(retain, nonatomic) CATStateMachine *stateMachine; // @synthesize stateMachine=mFSM;
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;
- (void)transportDidInvalidate:(id)arg1;
- (void)transportDidConnect:(id)arg1;
- (void)transport:(id)arg1 encounteredTrustDecisionWhileTryingToSecure:(id)arg2;
- (void)resetBackoff;
- (void)backoffDidFinish;
- (void)exitBackoffCanConnect;
- (void)enterBackoffCanConnect;
- (void)enterNoNetwork;
- (void)enterOutOfRange;
- (void)delegateInvalidated;
- (void)delegateDisconnected;
- (void)delegateConnected;
- (void)delegateDidBecomeNotConnectable;
- (void)delegateDidBecomeConnectable;
- (void)delegateDidLoseBeacon;
- (void)delegateWillLoseBeacon;
- (void)cancelConnectionAttempt;
- (id)studentSocketOptions;
- (void)tryConnecting;
- (void)registerDefaults;
- (void)failedToConnect;
- (void)didConnect;
- (void)lostBeacon;
- (void)rejected;
- (void)invalidate;
- (void)connect;
- (void)lostConnection;
- (void)localWiFiBecameUnavailable;
- (void)localWiFiBecameAvailable;
- (void)foundBeacon;
- (id)initWithEndpoint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

