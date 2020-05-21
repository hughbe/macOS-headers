//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSThread, NSUbiquitousKeyValueStore;

@interface WiFiCloudSyncEngineCore : NSObject
{
    NSUbiquitousKeyValueStore *keyValueStore;
    void *context;
    CDUnknownFunctionPointerType callback;
    NSThread *clientThread;
    BOOL iCloudSyncingEnabled;
}

@property BOOL iCloudSyncingEnabled; // @synthesize iCloudSyncingEnabled;
@property NSThread *clientThread; // @synthesize clientThread;
@property CDUnknownFunctionPointerType callback; // @synthesize callback;
@property void *context; // @synthesize context;
@property NSUbiquitousKeyValueStore *keyValueStore; // @synthesize keyValueStore;
- (void)relayKeychainSyncState:(id)arg1;
- (void)queryKeychainSyncState;
- (void)synchronizeAndCallMergeNetworks;
- (void)relayMergeNetworks:(id)arg1;
- (void)relayCloudCleanUpEvent;
- (void)relayCloudEvent:(id)arg1;
- (void)pruneKVSStore;
- (void)relayPruneKVSStore:(id)arg1;
- (void)unSubscribeKVStoreNotfications;
- (void)subscribeKVStoreNotficationsForBundleId:(id)arg1;
- (void)enableIcloudSyncing:(BOOL)arg1 ForBundleId:(id)arg2;
- (void)ubiquitousKeyValueStoreDidChange:(id)arg1;
- (void)dispatchUbiquitousKeyValueStoreDidChangeOnBackground:(id)arg1;
- (void)clearKVS;
- (void)printCompleteKVStore;
- (id)readCompleteKVStore;
- (void)relayReadStoreValueAction:(id)arg1;
- (void)readStoreValueForKey:(id)arg1;
- (void)removeFromKVStore:(id)arg1;
- (void)addToKVStore:(id)arg1;
- (void)synchronizeKVS;
- (void)dealloc;
- (void)initWithCallback:(CDUnknownFunctionPointerType)arg1 callbackContext:(void *)arg2;

@end

