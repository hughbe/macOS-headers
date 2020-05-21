//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSDate, NSSet;

@protocol TabSnapshotSensitiveDataPurging
- (void)finalizePendingOperationsBeforeTermination;
- (void)purgeAllSnapshots;
- (void)purgeSnapshotsForUUIDs:(NSArray *)arg1;
- (void)purgeSnapshotsForURLs:(NSSet *)arg1;
- (void)purgeSnapshotsCreatedOnOrAfterDate:(NSDate *)arg1;
@end

