//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncRemoteStorage-Protocol.h>

@class NSArray, NSDate, _DKSyncDeletedEventIDs, _DKSyncPeer;
@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@protocol _DKSyncRemoteKnowledgeStorage <_DKSyncRemoteStorage>
- (void)setFetchDelegate:(id <_DKSyncRemoteKnowledgeStorageFetchDelegate>)arg1;
- (void)updateStorageWithAddedEvents:(NSArray *)arg1 deletedEventIDs:(_DKSyncDeletedEventIDs *)arg2 highPriority:(BOOL)arg3 completion:(void (^)(NSError *))arg4;
- (void)fetchDeletionsHighWaterMarkWithPeer:(_DKSyncPeer *)arg1 highPriority:(BOOL)arg2 completion:(void (^)(NSDate *, NSError *))arg3;
- (void)fetchDeletedEventIDsFromPeer:(_DKSyncPeer *)arg1 sinceDate:(NSDate *)arg2 streamNames:(NSArray *)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(void (^)(NSArray *, NSDate *, NSError *))arg6;
- (void)fetchAdditionsHighWaterMarkWithPeer:(_DKSyncPeer *)arg1 highPriority:(BOOL)arg2 completion:(void (^)(NSDate *, NSError *))arg3;
- (void)fetchEventsFromPeer:(_DKSyncPeer *)arg1 windows:(NSArray *)arg2 streamNames:(NSArray *)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(void (^)(NSArray *, NSArray *, NSError *))arg7;
- (void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(_DKSyncPeer *)arg2;
- (BOOL)hasDeletionsFlagForPeer:(_DKSyncPeer *)arg1;
- (void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(_DKSyncPeer *)arg2;
- (BOOL)hasAdditionsFlagForPeer:(_DKSyncPeer *)arg1;
- (void)clearPrewarmedFlag;
- (void)prewarmFetchWithCompletion:(void (^)(NSError *))arg1;
@end

