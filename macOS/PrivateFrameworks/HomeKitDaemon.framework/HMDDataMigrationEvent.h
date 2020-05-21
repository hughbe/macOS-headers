//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitDataModelMigration, NSString;

@interface HMDDataMigrationEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitDataModelMigration *_metric;
    unsigned long long _migrationStart;
    unsigned long long _migrationEnd;
}

+ (id)uuid;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long migrationEnd; // @synthesize migrationEnd=_migrationEnd;
@property(readonly, nonatomic) unsigned long long migrationStart; // @synthesize migrationStart=_migrationStart;
@property(readonly, nonatomic) AWDHomeKitDataModelMigration *metric; // @synthesize metric=_metric;
- (id)metricForAWD;
- (unsigned int)AWDMessageType;
- (unsigned long long)migrationDurationInMilliseconds;
- (void)migrationCompleted;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

