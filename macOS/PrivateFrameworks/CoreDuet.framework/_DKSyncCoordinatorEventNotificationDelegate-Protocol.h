//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSCountedSet, _DKChangeSet, _DKSyncCoordinator;

@protocol _DKSyncCoordinatorEventNotificationDelegate

@optional
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didApplyRemoteDeletionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didApplyRemoteAdditionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didDeleteRemoteEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didAddRemoteEventsWithStreamNameCounts:(NSCountedSet *)arg2 events:(NSArray *)arg3;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didCreateDeletionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didCreateAdditionChangeSet:(_DKChangeSet *)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didInsertLocalDeletionEventsWithCount:(unsigned long long)arg2;
- (void)syncCoordinator:(_DKSyncCoordinator *)arg1 didInsertLocalAdditionEventsWithStreamNameCounts:(NSCountedSet *)arg2;
@end

