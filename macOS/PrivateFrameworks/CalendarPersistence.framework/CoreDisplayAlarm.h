//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CoreAlarm.h>

@interface CoreDisplayAlarm : CoreAlarm
{
}

+ (id)humanReadableDescriptionForTrigger:(id)arg1 isAllDay:(BOOL)arg2;
+ (id)alarmWithTrigger:(id)arg1 withDesc:(id)arg2;
+ (id)alarmWithTrigger:(id)arg1;
- (id)humanReadableDescriptionIsAllDay:(BOOL)arg1;
- (id)humanReadableDescription;
- (id)setDesc:(id)arg1;
- (id)desc;
- (Class)correspondingOccurrenceClass;
- (id)initWithTrigger:(id)arg1 withDesc:(id)arg2;
- (id)initWithTrigger:(id)arg1;

@end

