//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalendar.h>

@interface CalManagedIMAPCalendar : CalManagedCalendar
{
}

+ (id)entityName;
- (BOOL)allowsScheduling;
- (void)setSharees:(id)arg1;
- (id)sharees;
- (BOOL)shouldShowInPrimaryAccounts;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1 fromServer:(BOOL)arg2;
- (id)defaultAlarmsWithIsAllDayEvent:(BOOL)arg1;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (BOOL)isWritable;
- (id)nodesInNamespace;
- (BOOL)isEventContainer;
- (id)relativePath;
- (id)type;
- (BOOL)keepSyncRecordLocal;
- (void)awakeFromInsert;

@end

