//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SkyLight/SLDataTimelineSnapshotCollectionMetadata-Protocol.h>

@protocol SLDataTimelineConnection, SLDataTimelineSnapshotCollection;

@protocol SLDataTimelineUpdate <SLDataTimelineSnapshotCollectionMetadata>
@property(readonly, nonatomic) unsigned int action;
@property(readonly, nonatomic) id <SLDataTimelineConnection> connection;
- (id <SLDataTimelineSnapshotCollection>)claimSnapshotCollection;
@end

