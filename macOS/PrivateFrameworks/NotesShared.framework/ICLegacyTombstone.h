//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSDate, NSString;

@interface ICLegacyTombstone : ICCloudSyncingObject
{
}

+ (id)tombstoneIdentifierForObjectIdentifier:(id)arg1 type:(short)arg2;
+ (void)removeLegacyTombstoneForFolder:(id)arg1;
+ (void)addLegacyTombstoneForFolder:(id)arg1;
+ (void)removeLegacyTombstoneForNote:(id)arg1;
+ (void)addLegacyTombstoneForNote:(id)arg1;
+ (void)removeLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 context:(id)arg3;
+ (id)addLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3;
+ (id)allLegacyTombstonesInContext:(id)arg1;
+ (id)newLegacyTombstoneWithIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3;
+ (id)legacyTombstoneWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)legacyTombstonesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (BOOL)hasTombstonePrefix:(id)arg1;
+ (short)tombstoneTypeFromRecordName:(id)arg1;
- (id)ic_loggingValues;
- (id)cloudAccount;
- (void)deleteFromLocalDatabase;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasDeletedFromCloud;
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
- (id)newlyCreatedRecord;
- (BOOL)hasAllMandatoryFields;
- (BOOL)isInICloudAccount;
- (id)recordZoneName;
- (id)recordType;

// Remaining properties
@property(retain, nonatomic) ICAccount *account; // @dynamic account;
@property(retain, nonatomic) NSString *contentHashAtImport; // @dynamic contentHashAtImport;
@property(retain, nonatomic) NSDate *modificationDateAtImport; // @dynamic modificationDateAtImport;
@property(nonatomic) short type; // @dynamic type;

@end

