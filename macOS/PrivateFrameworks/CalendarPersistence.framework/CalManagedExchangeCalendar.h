//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CalManagedRemoteCalendar.h>

@class NSString;

@interface CalManagedExchangeCalendar : CalManagedRemoteCalendar
{
}

+ (void)enableChangeRequestNotifications;
+ (id)entityName;
- (id)serverPath;
- (BOOL)isDefaultSchedulingCalendar;
- (BOOL)isDistinguishedExchangeCalendar;
- (void)setSharees:(id)arg1;
- (id)sharees;
- (id)fixAndReportIssuesInNewlyImportedItem:(id)arg1;
- (void)deleteItemsWithoutIds:(id)arg1;
- (void)deleteItemsWithIds:(id)arg1;
- (id)properties;
- (BOOL)shareDefaultAlarmSettings;
- (BOOL)validateForUpdate:(id *)arg1;
- (BOOL)validateForInsert:(id *)arg1;
- (BOOL)validateForWrite:(id *)arg1;
- (id)nodesInNamespace;
- (BOOL)isAffectingAvailability;
- (BOOL)isColorEditable;
- (BOOL)isRenameable;
- (BOOL)isDeletable;
- (BOOL)keepSyncRecordLocal;
- (id)type;
- (id)relativePath;
- (id)calendarSource;

// Remaining properties
@property(retain) NSString *changeKey; // @dynamic changeKey;
@property(retain) NSString *folderID; // @dynamic folderID;
@property BOOL isDistinguished; // @dynamic isDistinguished;
@property(retain) NSString *parentFolderID; // @dynamic parentFolderID;
@property(retain) NSString *syncState; // @dynamic syncState;

@end

