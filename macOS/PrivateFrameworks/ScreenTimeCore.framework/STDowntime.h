//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface STDowntime : NSManagedObject
{
}

- (void)setStartHour:(long long)arg1 startMinute:(long long)arg2 endHour:(long long)arg3 endMinute:(long long)arg4;

// Remaining properties
@property(copy, nonatomic) NSString *calendarIdentifier; // @dynamic calendarIdentifier;
@property(nonatomic) BOOL canAskForMoreTime; // @dynamic canAskForMoreTime;
@property(nonatomic) BOOL enabled; // @dynamic enabled;
@property(copy, nonatomic) NSSet *schedule; // @dynamic schedule;

@end

