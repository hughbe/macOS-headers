//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBCloudZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMBLocalZoneDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMBCloudZone, HMBLocalZone, HMBShareUserID, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMFTimer, NSObject, NSString;
@protocol HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDDatabase, OS_dispatch_queue;

@interface HMDCloudShareTrustManager : HMFObject <HMBCloudZoneDelegate, HMBLocalZoneDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDDatabaseDelegate, HMFLogging, HMFTimerDelegate>
{
    BOOL _ownedTrust;
    long long _configureState;
    id <HMDCloudShareTrustManagerDataSource> _dataSource;
    id <HMDCloudShareTrustManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    id <HMDDatabase> _database;
    HMDCloudShareMessenger *_cloudShareMessenger;
    HMBCloudZone *_cloudZone;
    HMBLocalZone *_localZone;
    HMDCloudShareParticipantsManager *_cloudShareParticipantManager;
    HMFTimer *_requestInviteTimer;
    HMBShareUserID *_ownerCloudShareID;
    CDUnknownBlockType _participantsManagerFactory;
    CDUnknownBlockType _requestInviteTimerFactory;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType requestInviteTimerFactory; // @synthesize requestInviteTimerFactory=_requestInviteTimerFactory;
@property(copy) CDUnknownBlockType participantsManagerFactory; // @synthesize participantsManagerFactory=_participantsManagerFactory;
@property(retain) HMBShareUserID *ownerCloudShareID; // @synthesize ownerCloudShareID=_ownerCloudShareID;
@property(retain) HMFTimer *requestInviteTimer; // @synthesize requestInviteTimer=_requestInviteTimer;
@property(retain) HMDCloudShareParticipantsManager *cloudShareParticipantManager; // @synthesize cloudShareParticipantManager=_cloudShareParticipantManager;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, getter=isOwnedTrust) BOOL ownedTrust; // @synthesize ownedTrust=_ownedTrust;
@property(readonly) HMDCloudShareMessenger *cloudShareMessenger; // @synthesize cloudShareMessenger=_cloudShareMessenger;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDCloudShareTrustManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDCloudShareTrustManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)timerDidFire:(id)arg1;
- (void)_cancelRequestInviteTimer;
- (void)_startRequestInviteTimer;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void)_didRemoveZone;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2;
- (void)_didCreateZone;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2;
- (BOOL)canUseUntrustedAccountHandlesForParticipantManager:(id)arg1;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messengerDidReceiveInvitationRequest:(id)arg1;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2;
@property long long configureState; // @synthesize configureState=_configureState;
- (void)_homeDidBecomeTrustZoneCapable:(id)arg1;
- (void)homeDidBecomeTrustZoneCapable:(id)arg1;
- (void)discoverUntrustedUsers;
- (void)updateSharedUsersCloudShareIDs;
- (void)updateCurrentUserCloudShareID;
- (void)_removeTrust;
- (void)removeTrust;
- (void)_finishConfigure;
- (void)_configureOwnerCloudShareIDWithCloudZone:(id)arg1;
- (void)_configureWithFetchZoneResult:(id)arg1 error:(id)arg2;
- (void)_requestShareInvitationForSharedZone;
- (void)_configureWithSharedZone;
- (void)_configureWithOwnedZone;
- (void)_configure;
- (void)configure;
- (id)initWithDatabase:(id)arg1 isOwnedTrust:(BOOL)arg2 messageTargetUUID:(id)arg3 queue:(id)arg4 shareMessenger:(id)arg5 ownerCloudShareID:(id)arg6;
- (id)initWithDatabase:(id)arg1 isOwnedTrust:(BOOL)arg2 messageTargetUUID:(id)arg3 queue:(id)arg4 ownerCloudShareID:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

