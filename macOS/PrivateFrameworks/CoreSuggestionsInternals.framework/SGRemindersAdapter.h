//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGJournalRemindersObserver-Protocol.h>

@class NSString, REMStore, SGSqlEntityStore;

@interface SGRemindersAdapter : NSObject <SGJournalRemindersObserver>
{
    REMStore *_reminderStore;
    SGSqlEntityStore *_store;
}

+ (unsigned long long)remindersCreatedBetweenStartDate:(id)arg1 endDate:(id)arg2;
+ (BOOL)reminderHasDuplicate:(id)arg1 usingStore:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak SGSqlEntityStore *store; // @synthesize store=_store;
- (id)_remRemindersAssociatedWithTitle:(id)arg1 sourceUniqueIdentifier:(id)arg2 usingStore:(id)arg3;
- (id)_remRemindersAssociatedWithStorageReminder:(id)arg1 remStore:(id)arg2;
- (BOOL)_deleteReminder:(id)arg1 usingReminderStore:(id)arg2;
- (BOOL)_saveReminder:(id)arg1 usingReminderStore:(id)arg2;
- (id)sourceUniqueIdentifierForStorageReminder:(id)arg1;
- (id)_remindersFoundInAppsListInREMStore:(id)arg1;
- (void)rejectReminder:(id)arg1;
- (void)orphanReminder:(id)arg1;
- (void)rejectReminderFromOtherDevice:(id)arg1;
- (void)confirmReminderFromOtherDevice:(id)arg1;
- (void)reminderAlarmTriggeredFromThisDevice:(id)arg1;
- (void)rejectReminderFromThisDevice:(id)arg1;
- (void)confirmReminderFromThisDevice:(id)arg1;
- (void)addReminder:(id)arg1;
- (id)initWithSGSqlEntityStore:(id)arg1 andREMStore:(id)arg2;
- (id)initWithSGSqlEntityStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

