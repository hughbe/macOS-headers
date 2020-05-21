//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MultipeerConnectivity/MCNearbyServiceAdvertiserDelegate-Protocol.h>

@class MCNearbyServiceAdvertiser, MCPeerID, MCSession, NSBundle, NSDictionary, NSMutableArray, NSString;
@protocol MCAdvertiserAssistantDelegate;

@interface MCAdvertiserAssistant : NSObject <MCNearbyServiceAdvertiserDelegate>
{
    id <MCAdvertiserAssistantDelegate> _delegate;
    BOOL _isAdvertising;
    BOOL _wasAdvertising;
    MCSession *_session;
    NSDictionary *_discoveryInfo;
    NSString *_serviceType;
    MCPeerID *_myPeerID;
    MCNearbyServiceAdvertiser *_advertiser;
    NSMutableArray *_invitationsBuffer;
    CDUnknownBlockType _invitationHandlerForPresentedAlert;
    NSString *_appName;
    NSBundle *_frameworkBundle;
}

@property(retain, nonatomic) NSBundle *frameworkBundle; // @synthesize frameworkBundle=_frameworkBundle;
@property(nonatomic) BOOL wasAdvertising; // @synthesize wasAdvertising=_wasAdvertising;
@property(nonatomic) BOOL isAdvertising; // @synthesize isAdvertising=_isAdvertising;
@property(readonly, copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) CDUnknownBlockType invitationHandlerForPresentedAlert; // @synthesize invitationHandlerForPresentedAlert=_invitationHandlerForPresentedAlert;
@property(retain, nonatomic) NSMutableArray *invitationsBuffer; // @synthesize invitationsBuffer=_invitationsBuffer;
@property(retain, nonatomic) MCNearbyServiceAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(copy, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
@property(copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy) NSDictionary *discoveryInfo; // @synthesize discoveryInfo=_discoveryInfo;
@property(retain) MCSession *session; // @synthesize session=_session;
- (void)advertiser:(id)arg1 didReceiveInvitationFromPeer:(id)arg2 withContext:(id)arg3 invitationHandler:(CDUnknownBlockType)arg4;
- (void)presentNextInvitation;
- (void)userPressedButton:(long long)arg1;
- (void)didPresentInvitation;
- (void)willPresentInvitation;
- (void)stop;
- (void)start;
@property(readonly, copy) NSString *description;
@property __weak id <MCAdvertiserAssistantDelegate> delegate;
- (void)dealloc;
- (id)initWithServiceType:(id)arg1 discoveryInfo:(id)arg2 session:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

