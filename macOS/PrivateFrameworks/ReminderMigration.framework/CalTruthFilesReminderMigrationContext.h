//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderMigration/CalReminderMigrationContext.h>

#import <ReminderMigration/CalPrivacySafePathProvider-Protocol.h>

@class NSArray, NSMutableSet, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CalTruthFilesReminderMigrationContext : CalReminderMigrationContext <CalPrivacySafePathProvider>
{
    NSMutableSet *_directoriesToDelete;
    NSMutableSet *_filesToDelete;
    NSMutableSet *_accountPlistsToDisableReminders;
    NSMutableSet *_calendarPlistsToDisableReminders;
    NSURL *_calendarDirectory;
}

+ (id)_homeRelativePathForURL:(id)arg1 inCalendarDirectory:(id)arg2;
+ (void)_removeItemsToDeleteContainedByDirectory:(id)arg1 fromSet:(id)arg2;
+ (id)reminderMigrationContextWithReminderKitProvider:(id)arg1 calendarDirectory:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *calendarDirectory; // @synthesize calendarDirectory=_calendarDirectory;
- (id)_homeRelativePathForURL:(id)arg1;
- (void)_removeItemsToDeleteContainedByDirectory:(id)arg1;
- (BOOL)_isURLSubpathOfExistingDirectoryToDelete:(id)arg1;
- (id)privacySafePathForURLInCalendarDirectory:(id)arg1;
- (void)addCalendarPlistToDisableReminders:(id)arg1;
@property(readonly, nonatomic) NSArray *calendarPlistsToDisableReminders;
- (void)addAccountPlistToDisableReminders:(id)arg1;
@property(readonly, nonatomic) NSArray *accountPlistsToDisableReminders;
- (BOOL)willFileBeDeleted:(id)arg1;
- (void)addFileToDelete:(id)arg1;
- (void)addDirectoryToDelete:(id)arg1;
@property(readonly, nonatomic) NSArray *itemsToDelete;
- (void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedToURL:(id)arg4;
- (void)recordMigrationFailureWithDescription:(id)arg1 inStage:(unsigned long long)arg2 underlyingError:(id)arg3 relatedToURL:(id)arg4 isFatal:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

