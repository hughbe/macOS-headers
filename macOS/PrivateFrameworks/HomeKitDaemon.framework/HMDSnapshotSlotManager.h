//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMDNotificationRegistration, HMDSnapshotFile, HMFMessageDispatcher, NSMapTable, NSMutableArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSnapshotSlotManager : HMFObject <HMFLogging>
{
    NSUUID *_uniqueIdentifier;
    HMDSnapshotFile *_mostRecentSnapshot;
    NSMapTable *_snapshotSlots;
    HMDAccessory *_accessory;
    NSString *_logID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSString *_imageCacheDirectory;
    NSMutableArray *_filesToCleanup;
    HMDNotificationRegistration *_notificationRegistration;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(readonly, nonatomic) NSMutableArray *filesToCleanup; // @synthesize filesToCleanup=_filesToCleanup;
@property(readonly, nonatomic) NSString *imageCacheDirectory; // @synthesize imageCacheDirectory=_imageCacheDirectory;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSMapTable *snapshotSlots; // @synthesize snapshotSlots=_snapshotSlots;
@property(retain, nonatomic) HMDSnapshotFile *mostRecentSnapshot; // @synthesize mostRecentSnapshot=_mostRecentSnapshot;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)payloadForSnapshotFile:(id)arg1;
- (id)addReferenceToMostRecentSnapshotFileForMessage:(id)arg1;
- (void)_updateMostRecentSnapshot:(id)arg1 updateGenerationCounter:(BOOL)arg2;
- (id)createSlotForSnapshotFile:(id)arg1 requestMessages:(id)arg2 updateGenerationCounter:(BOOL)arg3;
- (void)handleReleaseSnapshot:(id)arg1;
- (void)backboardServicesRelaunched:(id)arg1;
- (void)handleForegroundAppsNotification:(id)arg1;
@property(readonly, nonatomic, getter=isMostRecentSnapshotValid) BOOL mostRecentSnapshotValid;
- (void)setupMostRecentSnapshot;
- (void)findMostRecentSnapshot;
- (void)registerForMessages;
- (id)logIdentifier;
- (void)dealloc;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 imageCacheDirectory:(id)arg3 logID:(id)arg4 uniqueIdentifier:(id)arg5 msgDispatcher:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

