//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/NSFastEnumeration-Protocol.h>

@class HMDAppleAccountManager, HMDRemoteAccountManager, NSArray, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDAccountRegistry : HMFObject <HMFLogging, NSFastEnumeration>
{
    id <HMFLocking> _lock;
    BOOL _started;
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMDAppleAccountManager *_appleAccountManager;
    HMDRemoteAccountManager *_remoteAccountManager;
}

+ (id)logCategory;
+ (id)sharedRegistry;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
@property(readonly) HMDRemoteAccountManager *remoteAccountManager; // @synthesize remoteAccountManager=_remoteAccountManager;
@property(readonly) HMDAppleAccountManager *appleAccountManager; // @synthesize appleAccountManager=_appleAccountManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)_resolveAccountForHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__handleRemovedRemoteAccount:(id)arg1;
- (void)__handleAddedRemoteAccount:(id)arg1;
- (void)__handleAppleAccountDeviceAdded:(id)arg1;
- (void)__handleAppleAccountHandlesUpdated:(id)arg1;
- (void)__handleAppleAccountUpdate:(id)arg1;
- (id)deviceForDevice:(id)arg1 exists:(char *)arg2;
- (id)deviceForDevice:(id)arg1;
- (BOOL)deviceExistsForDevice:(id)arg1;
- (id)deviceForHandle:(id)arg1 exists:(char *)arg2;
- (id)deviceForHandle:(id)arg1;
- (BOOL)deviceExistsForHandle:(id)arg1;
- (id)deviceForIdentifier:(id)arg1;
- (id)accountForHandle:(id)arg1 exists:(char *)arg2;
- (id)accountForHandle:(id)arg1;
- (BOOL)accountExistsForHandle:(id)arg1;
@property(readonly, nonatomic) NSArray *accounts;
- (void)reset;
- (void)stop;
- (void)start;
@property(readonly) BOOL started; // @synthesize started=_started;
- (id)attributeDescriptions;
- (id)initWithAppleAccountManager:(id)arg1 remoteAccountManager:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

