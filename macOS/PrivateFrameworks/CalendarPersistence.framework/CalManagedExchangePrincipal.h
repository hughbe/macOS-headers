//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedPrincipal.h>

@class CalManagedExchangeError, NSString;

@interface CalManagedExchangePrincipal : CalManagedPrincipal
{
}

+ (id)principalInfoDictionaryForPrincipalWithRootFolderID:(id)arg1;
+ (id)fetchRequestForEmailAddress:(id)arg1 context:(id)arg2;
+ (Class)freeBusyCacheClass;
+ (id)fetchRequestWithServerURL:(id)arg1 isDelegate:(BOOL)arg2 inManagedObjectContext:(id)arg3;
+ (id)pathExtension;
+ (id)entityName;
- (id)typeString;
- (id)properties;
- (id)lastOperationError;
- (BOOL)supportsPush;
- (BOOL)allowsTasks;
- (BOOL)allowsEvents;
- (void)setSupportsDefaultAlarms:(BOOL)arg1;
- (BOOL)supportsDefaultAlarms;
- (BOOL)supportsJunkReporting;
- (BOOL)supportsLikenessPropagation;
- (BOOL)supportsAttendeeComments;
- (BOOL)isColorEditable;
- (BOOL)isRenameable;
- (BOOL)isRemote;
- (BOOL)isAutoScheduleSupported;
- (BOOL)isPrivateCommentsSupported;
- (BOOL)isCalendarServerPrivateEventsSupported;
- (id)fetchRequestForInsertValidation;
- (BOOL)validateForWrite:(id *)arg1;
- (id)type;
- (id)defaultSchedulingCalendar;
- (void)awakeFromInsert;
- (id)session;
- (id)_makeSession;
- (void)activateSession;
- (BOOL)wantsSession;
- (void)getUserAvailabilityForEventID:(id)arg1 addresses:(id)arg2 timeRange:(id)arg3 reply:(CDUnknownBlockType)arg4;

// Remaining properties
@property(retain) NSString *deletedItemsFolderId; // @dynamic deletedItemsFolderId;
@property(retain) NSString *deletedItemsFolderSyncState; // @dynamic deletedItemsFolderSyncState;
@property long long exchangeServerMajorBuildNumber; // @dynamic exchangeServerMajorBuildNumber;
@property long long exchangeServerMajorVersion; // @dynamic exchangeServerMajorVersion;
@property long long exchangeServerMinorBuildNumber; // @dynamic exchangeServerMinorBuildNumber;
@property long long exchangeServerMinorVersion; // @dynamic exchangeServerMinorVersion;
@property(retain) NSString *exchangeServerVersion; // @dynamic exchangeServerVersion;
@property(retain) CalManagedExchangeError *lastError; // @dynamic lastError;
@property(retain) NSString *mailbox; // @dynamic mailbox;
@property(retain) NSString *rootFolderID; // @dynamic rootFolderID;

@end

