//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSPersistentStoreRequest.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSSecureCoding-Protocol.h>

@class NSArray, NSEntityDescription, NSPredicate, NSString;

@interface NSFetchRequest : NSPersistentStoreRequest <NSSecureCoding, NSCoding>
{
    NSArray *_groupByProperties;
    NSPredicate *_havingPredicate;
    id *_additionalPrivateIvars;
    NSArray *_valuesToFetch;
    NSEntityDescription *_entity;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    unsigned long long _batchSize;
    unsigned long long _fetchLimit;
    unsigned long long _allocationSize;
    NSArray *_relationshipKeyPathsForPrefetching;
    struct _fetchRequestFlags {
        unsigned int distinctValuesOnly:1;
        unsigned int includesSubentities:1;
        unsigned int includesPropertyValues:1;
        unsigned int resultType:3;
        unsigned int returnsObjectsAsFaults:1;
        unsigned int excludePendingChanges:1;
        unsigned int isInUse:1;
        unsigned int entityIsName:1;
        unsigned int refreshesRefetched:1;
        unsigned int propertiesValidated:1;
        unsigned int expressionsValidated:1;
        unsigned int disableCaching:1;
        unsigned int allocationType:3;
        unsigned int _RESERVED:15;
    } _flags;
}

+ (id)fetchRequestWithEntityName:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (id)decodeFromXPCArchive:(id)arg1 withContext:(id)arg2;
+ (id)_newDenormalizedFetchProperties:(id)arg1;
@property(retain, nonatomic) NSPredicate *havingPredicate;
@property(copy, nonatomic) NSArray *propertiesToGroupBy;
- (void)setGroupByProperties:(id)arg1;
- (id)groupByProperties;
@property(readonly, nonatomic) NSString *entityName;
- (id)initWithEntityName:(id)arg1;
@property(nonatomic) BOOL shouldRefreshRefetchedObjects;
@property(retain, nonatomic) NSArray *affectedStores;
@property(nonatomic) unsigned long long fetchBatchSize;
@property(nonatomic) unsigned long long fetchOffset;
@property(copy, nonatomic) NSArray *propertiesToFetch;
- (void)_bindExpressionDescriptionProperties:(id)arg1;
- (id)_newValidatedProperties:(id)arg1 groupBy:(BOOL)arg2 error:(id *)arg3;
@property(nonatomic) BOOL returnsDistinctResults;
@property(nonatomic) BOOL includesPendingChanges;
@property(nonatomic) unsigned long long resultType;
@property(nonatomic) BOOL includesPropertyValues;
- (void)setAllocationSize:(unsigned long long)arg1;
- (unsigned long long)allocationSize;
- (void)setAllocationType:(unsigned long long)arg1;
- (unsigned long long)allocationType;
@property(nonatomic) BOOL includesSubentities;
@property(nonatomic) BOOL returnsObjectsAsFaults;
@property(copy, nonatomic) NSArray *relationshipKeyPathsForPrefetching;
@property(nonatomic) unsigned long long fetchLimit;
@property(retain, nonatomic) NSArray *sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate;
@property(retain, nonatomic) NSEntityDescription *entity;
- (id)execute:(id *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (void)_setFlagsFromXPCEncoding:(id)arg1;
- (id)_XPCEncodedFlags;
- (BOOL)hasChanges;
- (id)stores;
- (unsigned long long)requestType;
- (void)_throwIfNotEditable;
- (BOOL)_isEditable;
- (void)_incrementInUseCounter;
- (void)_resolveEntityWithContext:(id)arg1;
- (id)_copyForDirtyContext;
- (void)_setDisablePersistentStoreResultCaching:(BOOL)arg1;
- (BOOL)_disablePersistentStoreResultCaching;
- (id)_asyncResultHandle;
- (void)_setAsyncResultHandle:(id)arg1;
- (BOOL)_isCachingFetchRequest;
- (void)setPrepopulateObjects:(BOOL)arg1;
- (BOOL)prepopulateObjects;
- (void)setResultsAsObjectIDs:(BOOL)arg1;
- (BOOL)resultsAsObjectIDs;
- (void)setIncludeRowData:(BOOL)arg1;
- (BOOL)includeRowData;
- (void)setShallowInheritance:(BOOL)arg1;
- (BOOL)shallowInheritance;
- (void)setPrefetchRelationshipKeys:(id)arg1;
- (id)prefetchRelationshipKeys;
- (void)setExcludesPendingChanges:(BOOL)arg1;
- (BOOL)excludesPendingChanges;
- (id)encodeForXPC;
- (id)_newNormalizedFetchProperties:(id)arg1;

@end

