//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, WBSEncryptedCloudKeyValueStore;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CloudTabKeyValueStore : NSObject
{
    NSObject<OS_dispatch_queue> *_keyValueStoreAccessQueue;
    WBSEncryptedCloudKeyValueStore *_syncedTabsKeyValueStore;
    NSMutableDictionary *_cachedSyncedTabsKeyValueStoreDictionaryRepresentation;
    id _syncedTabsKeyValueStoreChangeObserver;
    WBSEncryptedCloudKeyValueStore *_userRequestsKeyValueStore;
    NSMutableDictionary *_cachedUserRequestsKeyValueStoreDictionaryRepresentation;
    id _userRequestsKeyValueStoreChangeObserver;
    NSDate *_lastKeyValueStoreModDate;
    long long _numberOfInFlightDictionaryRepresentationUpdates;
    CDUnknownBlockType _keyValueStoreChangeNotificationHandler;
}

+ (id)sharedCloudTabKeyValueStore;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType keyValueStoreChangeNotificationHandler; // @synthesize keyValueStoreChangeNotificationHandler=_keyValueStoreChangeNotificationHandler;
- (void)_cachedDictionaryRepresentationWasUpdated;
- (void)_updateCachedDictionaryRepresentationFromKeyValueStore:(long long)arg1;
- (void)removeObjectInKeyValueStore:(long long)arg1 forKey:(id)arg2 blockUntilDone:(BOOL)arg3 bypassingCache:(BOOL)arg4;
- (void)removeObjectInKeyValueStore:(long long)arg1 forKey:(id)arg2 blockUntilDone:(BOOL)arg3;
- (id)dictionaryInKeyValueStore:(long long)arg1 forKey:(id)arg2;
- (void)setDictionaryInKeyValueStore:(long long)arg1 dictionary:(id)arg2 forKey:(id)arg3 blockUntilDone:(BOOL)arg4;
- (void)_willModifyKeyValueStore;
- (id)dictionaryRepresentationForKeyValueStore:(long long)arg1;
- (void)synchronizeKeyValueStore:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)keyValueStoreDidChangeExternally:(long long)arg1;
- (void)waitForOperationsToComplete;
@property(readonly, nonatomic, getter=isUpdatingKeyValueStoreDictionaryRepresentation) BOOL isUpdatingKeyValueStoreDictionaryRepresentation;
- (id)_cachedKeyValueStoreDictionaryForIdentifier:(long long)arg1;
- (id)_keyValueStoreForIdentifier:(long long)arg1;
- (void)dealloc;
- (id)init;

@end

