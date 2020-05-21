//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MultipeerConnectivity/NSNetServiceDelegate-Protocol.h>

@class MCPeerID, NSData, NSDictionary, NSMutableDictionary, NSNetService, NSString;
@protocol MCNearbyServiceAdvertiserDelegate, OS_dispatch_queue;

@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate>
{
    id <MCNearbyServiceAdvertiserDelegate> _delegate;
    BOOL _isAdvertising;
    BOOL _wasAdvertising;
    BOOL _AWDLDisabled;
    MCPeerID *_myPeerID;
    NSDictionary *_discoveryInfo;
    NSString *_serviceType;
    NSString *_formattedServiceType;
    NSNetService *_networkServer;
    NSData *_TXTRecordData;
    NSMutableDictionary *_peers;
    long long _outgoingInviteID;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_invites;
}

@property(nonatomic, getter=isAWDLDisabled) BOOL AWDLDisabled; // @synthesize AWDLDisabled=_AWDLDisabled;
@property(nonatomic) BOOL wasAdvertising; // @synthesize wasAdvertising=_wasAdvertising;
@property(nonatomic) BOOL isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property(retain, nonatomic) NSMutableDictionary *invites; // @synthesize invites=_invites;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(nonatomic) long long outgoingInviteID; // @synthesize outgoingInviteID=_outgoingInviteID;
@property(retain, nonatomic) NSMutableDictionary *peers; // @synthesize peers=_peers;
@property(retain, nonatomic) NSData *TXTRecordData; // @synthesize TXTRecordData=_TXTRecordData;
@property(retain, nonatomic) NSNetService *networkServer; // @synthesize networkServer=_networkServer;
@property(copy, nonatomic) NSString *formattedServiceType; // @synthesize formattedServiceType=_formattedServiceType;
@property(copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy) NSDictionary *discoveryInfo; // @synthesize discoveryInfo=_discoveryInfo;
@property(readonly) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2;
- (void)syncReceivedData:(id)arg1 fromPeer:(id)arg2;
- (void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2;
- (void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2;
- (void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)syncCloseConnectionForPeer:(id)arg1;
- (void)syncAttachConnection:(id)arg1 toPeer:(id)arg2;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)stopAdvertisingPeer;
- (void)syncStopAdvertisingPeer;
- (void)startAdvertisingPeer;
- (void)syncStartAdvertisingPeer;
- (void)parseIDString:(id *)arg1 displayName:(id *)arg2 fromIdentifier:(id)arg3;
- (id)txtRecordDataWithDiscoveryInfo:(id)arg1;
- (id)makeTXTRecordDataWithDiscoveryInfo:(id)arg1;
@property __weak id <MCNearbyServiceAdvertiserDelegate> delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

