//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSManagedObjectContext, NSMutableArray, NSMutableDictionary, NSPredicate;

@interface ABContactFetcher : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSArray *_affectedStores;
    NSPredicate *_fetchPredicate;
    BOOL _includeGroups;
    BOOL _includeLinkedContacts;
    BOOL _unifyContacts;
    NSMutableArray *_records;
    NSMutableDictionary *_linkedContactsById;
}

+ (id)linkedContactsSortDescriptors;
@property BOOL unifyContacts; // @synthesize unifyContacts=_unifyContacts;
@property BOOL includeLinkedContacts; // @synthesize includeLinkedContacts=_includeLinkedContacts;
@property BOOL includeGroups; // @synthesize includeGroups=_includeGroups;
@property(copy) NSPredicate *fetchPredicate; // @synthesize fetchPredicate=_fetchPredicate;
@property(copy) NSArray *affectedStores; // @synthesize affectedStores=_affectedStores;
@property(retain) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (id)resultContactsForLinkId:(id)arg1;
@property(readonly, copy) NSArray *resultRecords;
- (void)fetchRecords;
- (void)fetchGroups;
- (void)fetchContacts;
- (id)fetchLinkedContactsForContacts:(id)arg1;
- (id)contactRelationshipKeyPathsForPrefetching;
- (id)contactPropertiesToFetch;
- (id)unifyContacts:(id)arg1;
- (void)buildContactsByLinkIdFromContactResults:(id)arg1;
- (id)mutableContactsForLinkId:(id)arg1;
- (void)resetResults;
- (id)fetchRecordsWithEntityName:(id)arg1 propertiesToFetch:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 sortDescriptors:(id)arg4;
- (id)fetchRecordsWithEntityName:(id)arg1 affectedStores:(id)arg2 propertiesToFetch:(id)arg3 relationshipKeyPathsForPrefetching:(id)arg4 sortDescriptors:(id)arg5 predicate:(id)arg6;
- (void)dealloc;
- (id)init;

@end

