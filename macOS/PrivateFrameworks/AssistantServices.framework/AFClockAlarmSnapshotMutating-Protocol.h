//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDate, NSDictionary, NSOrderedSet;

@protocol AFClockAlarmSnapshotMutating <NSObject>
- (void)setNotifiedFiringAlarmIDs:(NSOrderedSet *)arg1;
- (void)setAlarmsByID:(NSDictionary *)arg1;
- (void)setDate:(NSDate *)arg1;
- (void)setGeneration:(unsigned long long)arg1;
@end

