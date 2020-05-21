//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/CHLogger.h>

#import <CallHistory/SyncManagerProtocol-Protocol.h>

@class CallHistoryDBClientHandle, NSString, TransactionManager;

__attribute__((visibility("hidden")))
@interface SyncManager : CHLogger <SyncManagerProtocol>
{
    TransactionManager *_transactionManager;
    CallHistoryDBClientHandle *_dbHandle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CallHistoryDBClientHandle *dbHandle; // @synthesize dbHandle=_dbHandle;
- (id)archiveCallObject:(id)arg1;
- (void)resetTimers;
- (double)timerOutgoing;
- (double)timerIncoming;
- (double)timerLifetime;
- (void)addUpdateTransactions:(id)arg1;
- (void)updateAllObjects:(id)arg1;
- (void)updateObjects:(id)arg1;
- (void)deleteObjectsWithLimits:(id)arg1;
- (void)deleteAllObjects;
- (void)deleteObjectsWithUniqueIds:(id)arg1;
- (void)deleteObjectWithUniqueId:(id)arg1;
- (id)fetchObjectsWithLimits:(id)arg1;
- (id)predicateForLimits:(id)arg1;
- (id)predicateForCallKinds:(id)arg1;
- (id)predicateForCallKind:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAllObjects;
- (id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;
- (long long)deleteCallsWithPredicate:(id)arg1 error:(id *)arg2;
- (long long)setRead:(BOOL)arg1 forCallsWithPredicate:(id)arg2 error:(id *)arg3;
- (void)insertRecordsWithoutTransactions:(id)arg1;
- (void)insertWithoutTransaction:(id)arg1;
- (void)insert:(id)arg1;
- (void)initDBHandle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

