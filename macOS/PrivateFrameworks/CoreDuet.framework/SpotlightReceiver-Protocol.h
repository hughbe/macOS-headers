//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/NSObject-Protocol.h>

@class CSSearchableItem, CSUserAction, NSArray, NSDate, NSString;

@protocol SpotlightReceiver <NSObject>

@optional
- (void)donateRelevantActions:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)donateRelevantShortcuts:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteAllInteractionsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2;
- (void)deleteInteractionsWithGroupIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (void)deleteInteractionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (void)addInteractions:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (NSArray *)supportedINIntentClassNames;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteAllUserActivities:(NSString *)arg1;
- (void)addUserAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2;
- (void)purgeSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSearchableItemsSinceDate:(NSDate *)arg1 bundleID:(NSString *)arg2;
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSearchableItemsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)addOrUpdateSearchableItems:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (NSArray *)supportedBundleIDs;
- (NSArray *)supportedContentTypes;
@end

