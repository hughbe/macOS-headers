//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMBLocalZoneModelObserver-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareMessengerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMDCloudShareParticipantsManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDDatabaseDelegate-Protocol.h>
#import <HomeKitDaemon/HMDSettingsBackingStoreController-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBCloudZone, HMBLocalZone, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, NSString, NSUUID;
@protocol HMDAssistantAccessControlModelUpdateReceiver, HMDDatabase, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMDSettingTransactionReceiverProtocol, HMDUserSettingsBackingStoreControllerDelegate, OS_dispatch_queue;

@interface HMDUserSettingsBackingStoreController : NSObject <HMBLocalZoneModelObserver, HMFLogging, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, HMDCloudShareMessengerDelegate, HMDDatabaseDelegate, HMDSettingsBackingStoreController>
{
    id <HMDUserSettingsBackingStoreControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_zoneName;
    id <HMDDatabase> _database;
    HMDCloudShareMessenger *_shareMessenger;
    HMDCloudShareParticipantsManager *_participantsManager;
    HMBCloudZone *_cloudZone;
    HMBLocalZone *_localZone;
    long long _runState;
    id <HMDSettingTransactionReceiverProtocol> _transactionReceiver;
    id <HMDAssistantAccessControlModelUpdateReceiver> _assistantAccessControlModelUpdateReceiver;
    NSUUID *_assistantAccessControlModelID;
    id <HMDMediaContentProfileAccessControlModelUpdateReceiver> _mediaContentProfileAccessControlModelUpdateReceiver;
    NSUUID *_mediaContentProfileAccessControlModelID;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(copy) NSUUID *mediaContentProfileAccessControlModelID; // @synthesize mediaContentProfileAccessControlModelID=_mediaContentProfileAccessControlModelID;
@property __weak id <HMDMediaContentProfileAccessControlModelUpdateReceiver> mediaContentProfileAccessControlModelUpdateReceiver; // @synthesize mediaContentProfileAccessControlModelUpdateReceiver=_mediaContentProfileAccessControlModelUpdateReceiver;
@property(copy) NSUUID *assistantAccessControlModelID; // @synthesize assistantAccessControlModelID=_assistantAccessControlModelID;
@property __weak id <HMDAssistantAccessControlModelUpdateReceiver> assistantAccessControlModelUpdateReceiver; // @synthesize assistantAccessControlModelUpdateReceiver=_assistantAccessControlModelUpdateReceiver;
@property(retain) id <HMDSettingTransactionReceiverProtocol> transactionReceiver; // @synthesize transactionReceiver=_transactionReceiver;
@property long long runState; // @synthesize runState=_runState;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMDCloudShareParticipantsManager *participantsManager; // @synthesize participantsManager=_participantsManager;
@property(readonly) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property(readonly, copy) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak id <HMDUserSettingsBackingStoreControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2;
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2;
- (void)runTransaction:(id)arg1 waitForCloudPush:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)settingTransactionWithName:(id)arg1;
- (void)runSettingTransaction:(id)arg1 waitForCloudPush:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)runSettingTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerForSettingsTransactions:(id)arg1;
- (void)_localZone:(id)arg1 updatedModel:(id)arg2 previousModel:(id)arg3 options:(id)arg4 result:(id)arg5;
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;
- (void)messengerDidReceiveInvitationRequest:(id)arg1;
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;
- (BOOL)manager:(id)arg1 shouldShareWithUser:(id)arg2;
- (void)_updateRunState:(long long)arg1;
- (id)loadUserSettings;
- (void)_didFetchZonesWithResult:(id)arg1 isOwnedZone:(BOOL)arg2 error:(id)arg3;
- (void)_startWithSharedZone;
- (void)_startWithOwnedZone;
- (void)updateParticipants;
- (void)clearParticipants;
- (void)destroyZone;
- (void)_invalidate;
- (void)registerForMediaContentAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;
- (id)loadMediaContentAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;
- (void)registerForAssistantAccessControlModelUpdates:(id)arg1 modelID:(id)arg2;
- (id)loadAssistantAccessControlModelWithModelID:(id)arg1 error:(id *)arg2;
- (id)loadSharedUserDataModelWithError:(id *)arg1;
- (id)loadPrivateUserDataModelWithError:(id *)arg1;
- (void)start;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 zoneName:(id)arg3 database:(id)arg4 home:(id)arg5 shareMessenger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

