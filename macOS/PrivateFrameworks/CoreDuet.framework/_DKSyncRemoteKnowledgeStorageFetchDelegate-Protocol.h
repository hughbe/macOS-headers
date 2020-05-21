//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKSyncRemoteStorageDelegate-Protocol.h>

@class NSArray, NSDate, _DKCompatibility, _DKSyncType;

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate <_DKSyncRemoteStorageDelegate>
@property(readonly, nonatomic) _DKSyncType *syncType;
- (NSArray *)deletedEventIDsSinceDate:(NSDate *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 endDate:(id *)arg4 error:(id *)arg5;
- (NSArray *)sortedEventsFromSyncWindows:(NSArray *)arg1 streamNames:(NSArray *)arg2 compatibility:(_DKCompatibility *)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 error:(id *)arg6;
- (NSArray *)sortedEventsFromSyncWindows:(NSArray *)arg1 streamNames:(NSArray *)arg2 limit:(unsigned long long)arg3 fetchOrder:(long long)arg4 error:(id *)arg5;
@end

