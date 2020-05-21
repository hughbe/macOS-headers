//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallHistory/NSObject-Protocol.h>

@class CHRecentCall, NSArray, NSDictionary, NSPredicate, NSString;

@protocol SyncManagerProtocol <NSObject>
- (void)resetTimers;
- (double)timerLifetime;
- (double)timerOutgoing;
- (double)timerIncoming;
- (void)updateAllObjects:(NSDictionary *)arg1;
- (void)updateObjects:(NSDictionary *)arg1;
- (void)deleteObjectsWithLimits:(NSDictionary *)arg1;
- (void)deleteAllObjects;
- (void)deleteObjectsWithUniqueIds:(NSArray *)arg1;
- (void)deleteObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchObjectsWithLimits:(NSDictionary *)arg1;
- (CHRecentCall *)fetchObjectWithUniqueId:(NSString *)arg1;
- (NSArray *)fetchAllObjects;
- (void)insertRecordsWithoutTransactions:(NSArray *)arg1;
- (void)insertWithoutTransaction:(CHRecentCall *)arg1;
- (void)insert:(CHRecentCall *)arg1;
- (NSArray *)fetchCoalescedCallsWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2;
- (NSArray *)fetchCallsWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;
- (unsigned long long)fetchCallCountWithPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2;
- (long long)deleteCallsWithPredicate:(NSPredicate *)arg1 error:(id *)arg2;
- (long long)setRead:(BOOL)arg1 forCallsWithPredicate:(NSPredicate *)arg2 error:(id *)arg3;
@end

