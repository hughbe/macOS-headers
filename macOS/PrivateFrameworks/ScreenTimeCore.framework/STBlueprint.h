//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeCore/STUniquedManagedObject.h>

#import <ScreenTimeCore/STUniquelySerializableManagedObject-Protocol.h>

@class NSData, NSDate, NSSet, NSString, STBlueprintSchedule, STBlueprintUsageLimit, STCoreOrganization;

@interface STBlueprint : STUniquedManagedObject <STUniquelySerializableManagedObject>
{
}

+ (id)scheduleTextWithLocale:(id)arg1 weekdayScheduleComparator:(CDUnknownBlockType)arg2 scheduleTimeGetter:(CDUnknownBlockType)arg3;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)blueprintIdentifierForUser:(id)arg1;
+ (id)createBlueprintWithType:(id)arg1 user:(id)arg2;
+ (id)fetchResultsRequestsForChangesToBlueprintsForUserWithDSID:(id)arg1;
+ (id)fetchResultsRequestsForChangesToBlueprints;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 withIdentifier:(id)arg3 fromOrganization:(id)arg4;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2 fromOrganization:(id)arg3;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 fromOrganization:(id)arg2;
+ (id)fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1 ofType:(id)arg2;
+ (id)_fetchRequestMatchingBlueprintsForUserWithDSID:(id)arg1;
+ (id)fetchRequestMatchingUnexpiredOneMoreMinuteBlueprints;
+ (id)fetchRequestMatchingOrphanedBlueprints;
+ (id)fetchRequestMatchingExpiredBlueprints;
+ (id)defaultAlwaysAllowBundleIDs;
+ (BOOL)saveAlwaysAllowListForUser:(id)arg1 withBundleIDs:(id)arg2 error:(id *)arg3;
+ (id)simpleScheduleTimeRangeWithStartTimeComponents:(id)arg1 endTimeComponents:(id)arg2;
+ (id)customScheduleTimeRangeWithLocale:(id)arg1 startTimeComponents:(id)arg2 endTimeComponents:(id)arg3;
+ (id)keyPathsForValuesAffectingDowntimeScheduleText;
+ (id)defaultEndTime;
+ (id)defaultStartTime;
+ (BOOL)saveDowntimeForUser:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 scheduleByWeekdayIndex:(id)arg4 enabled:(BOOL)arg5 behaviorType:(unsigned long long)arg6 error:(id *)arg7;
+ (BOOL)deleteManagedUserBlueprintForUser:(id)arg1 error:(id *)arg2;
+ (BOOL)saveManagedUserBlueprintForUser:(id)arg1 error:(id *)arg2;
+ (id)keyPathsForValuesAffectingLimitScheduleText;
+ (void)_createDisplayNameWithItemNames:(id)arg1 itemCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_addWebDomains:(id)arg1 toItemNames:(id)arg2 remainingItems:(unsigned long long)arg3 totalCount:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (id)_getDisplayNameAndAddCategories:(id)arg1 toItemNames:(id)arg2 remainingItems:(unsigned long long *)arg3;
+ (void)fetchDisplayNameForUsageLimitWithCategoryIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 webDomains:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)displayNameForUsageLimitWithCategoryIdentifiers:(id)arg1 bundleIdentifiers:(id)arg2 webDomains:(id)arg3;
+ (id)keyPathsForValuesAffectingLimitDisplayName;
+ (BOOL)deleteUsageLimitWithIdentifier:(id)arg1 user:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
+ (BOOL)saveUsageLimitWithIdentifier:(id)arg1 user:(id)arg2 bundleIdentifiers:(id)arg3 webDomains:(id)arg4 categoryIdentifiers:(id)arg5 dailyBudgetLimit:(double)arg6 budgetLimitByWeekday:(id)arg7 enabled:(BOOL)arg8 behaviorType:(unsigned long long)arg9 error:(id *)arg10;
- (id)dictionaryRepresentation;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;
- (id)declarationsWithError:(id *)arg1;
- (void)tombstone;
- (void)_didFetchAppInfo:(id)arg1;
- (void)_limitedApplicationsDidChange:(id)arg1;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
@property(readonly, copy) NSString *downtimeScheduleText;
- (void)disableDowntimeForDay:(unsigned long long)arg1;
- (void)setStartTime:(id)arg1 endTime:(id)arg2 forDay:(unsigned long long)arg3;
- (void)setStartTime:(id)arg1 endTime:(id)arg2;
@property(getter=isDowntimeEnabled) BOOL downtimeEnabled;
- (BOOL)permitWebFilterURL:(id)arg1 pageTitle:(id)arg2 error:(id *)arg3;
- (id)_webFilterBlacklistStringsForURL:(id)arg1;
@property(readonly, copy) NSString *limitScheduleText;
@property(readonly, copy) NSString *limitDisplayName;
@property(getter=isUsageLimitEnabled) BOOL usageLimitEnabled;

// Remaining properties
@property(retain, nonatomic) NSSet *configurations; // @dynamic configurations;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL enabled; // @dynamic enabled;
@property(copy, nonatomic) NSDate *expiration; // @dynamic expiration;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) BOOL invertUsageLimit; // @dynamic invertUsageLimit;
@property(nonatomic) BOOL isDirty; // @dynamic isDirty;
@property(nonatomic) BOOL isTombstoned; // @dynamic isTombstoned;
@property(nonatomic) BOOL limitEnabled; // @dynamic limitEnabled;
@property(copy, nonatomic) NSDate *minimumInstallationDate; // @dynamic minimumInstallationDate;
@property(retain, nonatomic) STCoreOrganization *organization; // @dynamic organization;
@property(retain, nonatomic) STBlueprintSchedule *schedule; // @dynamic schedule;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(retain, nonatomic) STBlueprintUsageLimit *usageLimit; // @dynamic usageLimit;
@property(retain, nonatomic) NSSet *users; // @dynamic users;
@property(copy, nonatomic) NSData *versionVector; // @dynamic versionVector;

@end

