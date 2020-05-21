//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/REMReplicaManagerClient-Protocol.h>

@class NSString, NSUUID, REMReplicaIDSource, REMReplicaManager;
@protocol REMReplicaClockProviding, REMReplicaIDHelperOwner, REMReplicaManagerProviding;

@interface REMReplicaIDHelper : NSObject <REMReplicaManagerClient>
{
    id <REMReplicaClockProviding> _replicaClockProvider;
    REMReplicaIDSource *_replicaIDSource;
    id <REMReplicaIDHelperOwner> _owner;
    NSUUID *_acquiredReplicaUUID;
    id <REMReplicaManagerProviding> _lazilyCachedReplicaManagerProvider;
}

+ (id)nonEditingReplicaUUID;
+ (id)replicaUUIDForCreation;
- (void).cxx_destruct;
@property(retain, nonatomic) id <REMReplicaManagerProviding> lazilyCachedReplicaManagerProvider; // @synthesize lazilyCachedReplicaManagerProvider=_lazilyCachedReplicaManagerProvider;
@property(retain, nonatomic) NSUUID *acquiredReplicaUUID; // @synthesize acquiredReplicaUUID=_acquiredReplicaUUID;
@property(nonatomic) __weak id <REMReplicaIDHelperOwner> owner; // @synthesize owner=_owner;
@property(retain, nonatomic) REMReplicaIDSource *replicaIDSource; // @synthesize replicaIDSource=_replicaIDSource;
@property(retain, nonatomic) id <REMReplicaClockProviding> replicaClockProvider; // @synthesize replicaClockProvider=_replicaClockProvider;
- (id)clockElementListForReplicaUUID:(id)arg1;
@property(readonly, nonatomic) NSUUID *replicaUUID;
@property(readonly, nonatomic) NSString *crdtID;
@property(readonly, nonatomic) REMReplicaManager *replicaManager;
- (void)didSerialize;
- (void)didCopy;
- (void)willEdit;
- (void)dealloc;
- (id)initWithReplicaIDSource:(id)arg1 owner:(id)arg2 replicaClockProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

