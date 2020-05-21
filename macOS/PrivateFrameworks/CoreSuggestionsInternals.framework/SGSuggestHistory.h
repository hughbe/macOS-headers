//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUbiquitousKeyValueStore, SGNoCloudNSUbiquitousKeyValueStore, _PASLock;

@interface SGSuggestHistory : NSObject
{
    _PASLock *_lock;
    NSUbiquitousKeyValueStore *_backingKVStore;
    SGNoCloudNSUbiquitousKeyValueStore *_noCloudFakeBackingKVStore;
}

+ (void)resetNoFlush;
+ (void)reset;
+ (id)newTestingInstanceWithSharedKVS:(id)arg1;
+ (id)sharedSuggestHistory;
- (void).cxx_destruct;
- (void)pushEmptyHashesForTestingKey:(id)arg1;
- (BOOL)hasConfirmedField:(id)arg1 value:(id)arg2 forStorageEvent:(id)arg3;
- (void)confirmFieldValues:(id)arg1 forStorageEvent:(id)arg2;
- (id)_hashesForConfirmedField:(id)arg1 value:(id)arg2 storageEvent:(id)arg3 forMatching:(BOOL)arg4;
- (BOOL)hasContactDetail:(id)arg1 forContact:(id)arg2;
- (void)rejectEventFromExternalDevice:(id)arg1;
- (void)confirmEventFromExternalDevice:(id)arg1;
- (void)addObserver:(id)arg1;
- (BOOL)isValidSuggestion:(id)arg1;
- (BOOL)isRejectedReminder:(id)arg1;
- (BOOL)isConfirmedReminder:(id)arg1;
- (BOOL)isValidNewReminder:(id)arg1;
- (void)removeConfirmationHistoryForEntityWithOpaqueKey:(id)arg1 creationTimestamp:(struct SGUnixTimestamp_)arg2;
- (void)removeConfirmationHistoryForEvent:(id)arg1;
- (BOOL)isRejectedEvent:(id)arg1;
- (BOOL)isConfirmedEvent:(id)arg1;
- (BOOL)isUpdatableContact:(id)arg1;
- (BOOL)isValidNewEvent:(id)arg1;
- (BOOL)hasStorageContact:(id)arg1;
- (BOOL)hasContact:(id)arg1;
- (BOOL)_anyHash:(id)arg1 inSet:(id)arg2;
- (void)writeAndPushRejectedReminderHashes:(id)arg1;
- (void)rejectReminder:(id)arg1;
- (void)writeAndPushConfirmedReminderHashes:(id)arg1;
- (void)confirmReminder:(id)arg1;
- (void)writeAndPushRejectedEventHashes:(id)arg1;
- (void)rejectStorageEvent:(id)arg1;
- (void)rejectEvent:(id)arg1;
- (void)writeAndPushConfirmedEventHashes:(id)arg1;
- (void)confirmStorageEvent:(id)arg1;
- (void)confirmEvent:(id)arg1;
- (void)confirmRealtimeContact:(id)arg1;
- (void)confirmOrRejectContact:(id)arg1;
- (void)rejectRealtimeContact:(id)arg1;
- (void)confirmOrRejectRecordForContact:(id)arg1;
- (void)confirmOrRejectCuratedDetail:(id)arg1 forContact:(id)arg2;
- (void)confirmOrRejectDetail:(id)arg1 forContact:(id)arg2;
- (void)confirmOrRejectDetailHashes:(id)arg1;
- (void)handleSyncedDataChanged:(id)arg1;
- (void)reset;
- (void)resetNoFlush;
- (id)hashesForPseudoEventByKey:(id)arg1 forMatching:(BOOL)arg2;
- (id)hashesForOpaqueKey:(id)arg1 forMatching:(BOOL)arg2;
- (id)rejectHashesForOpaqueKey:(id)arg1 forMatching:(BOOL)arg2;
- (id)confirmHashesForOpaqueKey:(id)arg1 withCreationTime:(struct SGUnixTimestamp_)arg2 forMatching:(BOOL)arg3;
- (id)confirmHashesForRemindersOpaqueKey:(id)arg1 withCreationTime:(struct SGUnixTimestamp_)arg2 forMatching:(BOOL)arg3;
- (id)identityBasedHashesForPseudoReminder:(id)arg1 withCreationTime:(struct SGUnixTimestamp_)arg2;
- (id)identityBasedHashesForPseudoEvent:(id)arg1 withCreationTime:(struct SGUnixTimestamp_)arg2;
- (id)hashesForCuratedContactDetail:(id)arg1 fromContact:(id)arg2 forMatching:(BOOL)arg3;
- (id)hashesForContactDetail:(id)arg1 fromContact:(id)arg2 forMatching:(BOOL)arg3;
- (id)hashesForStorageContact:(id)arg1 forMatching:(BOOL)arg2;
- (id)hashesForContact:(id)arg1 forMatching:(BOOL)arg2;
- (id)hashesForStrings:(id)arg1 forMatching:(BOOL)arg2;
- (id)modernHashesForClassicHashes:(id)arg1 forMatching:(BOOL)arg2;
- (id)_canaryHash;
- (id)keysForCuratedContactDetail:(id)arg1 ofContact:(id)arg2;
- (id)keysForContactDetail:(id)arg1 ofContact:(id)arg2;
- (id)keysForStorageContact:(id)arg1;
- (id)keysForContact:(id)arg1;
- (void)pushAll:(id)arg1;
- (void)setInternalStateAccordingToKVS;
- (void)_setInternalStateAccordingToKVS:(id)arg1;
- (void)pushResetInfo:(id)arg1;
- (void)pushDontUpdate:(id)arg1;
- (void)pushStorageDetails:(id)arg1;
- (void)pushContacts:(id)arg1;
- (void)pushConfirmedEventFields:(id)arg1;
- (void)pushRejectedReminders:(id)arg1;
- (void)pushConfirmedReminders:(id)arg1;
- (void)pushRejectedEvents:(id)arg1;
- (void)pushConfirmedEvents:(id)arg1;
- (void)_setHashes:(id)arg1 forKey:(id)arg2;
- (void)_tellObserversHashesDidChange;
- (id)description;
- (id)loadResetInfo;
- (id)setForKey:(id)arg1;
- (id)mutableSetForKey:(id)arg1;
- (id)identitySalt;
- (id)init;
- (id)initWithKVS:(id)arg1;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *kvs;

@end

