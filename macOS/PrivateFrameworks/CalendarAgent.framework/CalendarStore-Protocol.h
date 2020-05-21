//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarAgent/CalendarLink-Protocol.h>

@class CalStoreRemoteManagedAccount, CalStoreRemoteManagedCalendar, CalStoreRemoteManagedEvent, CalStoreRemoteManagedGroup, CalStoreRemoteManagedRecurrenceException, CalStoreRemoteManagedTask, NSArray, NSDate, NSPredicate, NSString, NSTimeZone, NSURL;

@protocol CalendarStore <CalendarLink>
- (void)task:(CalStoreRemoteManagedTask *)arg1 isExchangeCompatibleWithReply:(void (^)(BOOL))arg2;
- (void)saveTask:(CalStoreRemoteManagedTask *)arg1 originatorProcessId:(int)arg2 withReply:(void (^)(CalStoreRemoteManagedTask *, NSError *))arg3;
- (void)removeTask:(CalStoreRemoteManagedTask *)arg1 originatorProcessId:(int)arg2 withReply:(void (^)(NSError *))arg3;
- (void)fetchTasksWithSharedUid:(NSString *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)fetchTasksWithPredicate:(NSPredicate *)arg1 inCalendars:(NSArray *)arg2 withReply:(void (^)(NSArray *))arg3;
- (void)exchangeCompatibleTaskWithTask:(CalStoreRemoteManagedTask *)arg1 withCalendar:(CalStoreRemoteManagedCalendar *)arg2 originatorProcessId:(int)arg3 withReply:(void (^)(CalStoreRemoteManagedTask *))arg4;
- (void)anyLocalRemindersExistWithReply:(void (^)(BOOL))arg1;
- (void)recurrenceRuleFromICSString:(NSString *)arg1 withReply:(void (^)(CalStoreRemoteCoreRecurrenceRule *))arg2;
- (void)saveGroup:(CalStoreRemoteManagedGroup *)arg1 originatorProcessId:(int)arg2 withReply:(void (^)(CalStoreRemoteManagedGroup *, NSError *))arg3;
- (void)removeGroup:(CalStoreRemoteManagedGroup *)arg1 originatorProcessId:(int)arg2 withReply:(void (^)(NSError *))arg3;
- (void)mainPrincipalForAccount:(CalStoreRemoteManagedAccount *)arg1 withReply:(void (^)(CalStoreRemoteManagedPrincipal *))arg2;
- (void)groupWithUid:(NSString *)arg1 withReply:(void (^)(CalStoreRemoteManagedGroup *))arg2;
- (void)groupWithPrincipalUrl:(NSURL *)arg1 userName:(NSString *)arg2 withReply:(void (^)(CalStoreRemoteManagedGroup *))arg3;
- (void)groupWithExchangeUrl:(NSURL *)arg1 externalURL:(NSURL *)arg2 userName:(NSString *)arg3 emailAddress:(NSString *)arg4 withReply:(void (^)(CalStoreRemoteManagedGroup *))arg5;
- (void)groupsWithReply:(void (^)(NSArray *))arg1;
- (void)fetchPrincipalsWithPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)saveEvent:(CalStoreRemoteManagedEvent *)arg1 span:(int)arg2 originatorProcessId:(int)arg3 withReply:(void (^)(CalStoreRemoteManagedEvent *, NSError *))arg4;
- (void)removeEvent:(CalStoreRemoteManagedEvent *)arg1 span:(int)arg2 originatorProcessId:(int)arg3 withReply:(void (^)(NSError *))arg4;
- (void)fetchEventsWithSharedUid:(NSString *)arg1 occurrence:(NSDate *)arg2 withReply:(void (^)(NSArray *))arg3;
- (void)fetchEventsWithSharedUid:(NSString *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)fetchEventsWithPredicate:(NSPredicate *)arg1 inCalendars:(NSArray *)arg2 withReply:(void (^)(NSArray *))arg3;
- (void)expandEvent:(CalStoreRemoteManagedEvent *)arg1 fromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 isInvitation:(BOOL)arg4 originalDuration:(double)arg5 withReply:(void (^)(NSArray *))arg6;
- (void)eventWithItemId:(NSString *)arg1 withReply:(void (^)(CalStoreRemoteManagedEvent *))arg2;
- (void)eventForRecurrenceException:(CalStoreRemoteManagedRecurrenceException *)arg1 withReply:(void (^)(CalStoreRemoteManagedEvent *))arg2;
- (void)saveCalendar:(CalStoreRemoteManagedCalendar *)arg1 originatorProcessId:(int)arg2 withReply:(void (^)(CalStoreRemoteManagedCalendar *, NSError *))arg3;
- (void)removeCalendar:(CalStoreRemoteManagedCalendar *)arg1 originatorProcessId:(int)arg2 withReply:(void (^)(NSError *))arg3;
- (void)migrateLocalCalendarsToGroup:(CalStoreRemoteManagedGroup *)arg1 originatorProcessId:(int)arg2 withReply:(void (^)(BOOL, NSError *))arg3;
- (void)fetchLocalCalendarsWithPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)fetchCalendarsWithPredicate:(NSPredicate *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)defaultLocalCalendarAttachmentsBackupPathWithReply:(void (^)(NSString *))arg1;
- (void)calendarsForGroup:(CalStoreRemoteManagedGroup *)arg1 withReply:(void (^)(NSArray *))arg2;
- (void)calendar:(NSString *)arg1 hasCapability:(int)arg2 reply:(void (^)(BOOL))arg3;
- (void)anyLocalCalendarsExistWithReply:(void (^)(BOOL))arg1;
- (void)anyLocalCalendarHasAttachmentsWithReply:(void (^)(BOOL))arg1;
- (void)activeCalendarWithReply:(void (^)(NSCalendar *))arg1;
- (void)setPassword:(NSString *)arg1 forAccount:(CalStoreRemoteManagedAccount *)arg2 withReply:(void (^)(void))arg3;
- (void)passwordForAccount:(CalStoreRemoteManagedAccount *)arg1 withReply:(void (^)(NSString *))arg2;
- (void)remoteManagedObjectWithObjectId:(NSString *)arg1 withReply:(void (^)(CalStoreRemoteManagedObject *))arg2;
- (void)nodeWithUid:(NSString *)arg1 withReply:(void (^)(CalStoreRemoteManagedObject *))arg2;
- (void)setupCalendarPersistenceWithReply:(void (^)(BOOL))arg1;
- (void)setCurrentTimeZone:(NSTimeZone *)arg1;
- (void)notifyAccountsChangedExternally;
- (void)isPluginId:(NSString *)arg1 supportedForApp:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
- (void)enableUnitTestModeWithReply:(void (^)(void))arg1;
- (void)disableUnitTestModeWithReply:(void (^)(void))arg1;
- (void)dateWithGMT:(NSDate *)arg1 withReply:(void (^)(NSDate *))arg2;
- (void)date:(NSDate *)arg1 withTimeZone:(NSTimeZone *)arg2 withReply:(void (^)(NSDate *))arg3;
- (void)dateInTimeZone:(NSTimeZone *)arg1 fromFloatingDateInGMT:(NSDate *)arg2 withReply:(void (^)(NSDate *))arg3;
- (void)currentTimeZoneWithReply:(void (^)(NSTimeZone *))arg1;
- (void)CDVServerURLForURL:(NSURL *)arg1 withPath:(BOOL)arg2 withReply:(void (^)(NSURL *))arg3;
@end

