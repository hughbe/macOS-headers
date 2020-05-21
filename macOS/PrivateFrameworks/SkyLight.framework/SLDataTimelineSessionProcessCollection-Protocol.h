//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;

@protocol SLDataTimelineSessionProcessCollection
@property(readonly, nonatomic) NSArray *processes;
@property(readonly, nonatomic) int foregroundAppPID;
@property(readonly, nonatomic) unsigned long long sessionSnapshotIndex;
@property(readonly, nonatomic) double sessionSnapshotTimestamp;
- (void)processesApplyBlock:(void (^)(id <SLDataTimelineProcess>))arg1;
@end

