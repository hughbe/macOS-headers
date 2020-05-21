//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSPersistentStoreDescription, NSString;

@interface NSCoreDataCoreSpotlightDelegate : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStoreDescription *_description;
    NSString *_storeIdentifier;
    NSManagedObjectContext *_context__;
    NSString *_domainIdentifier;
    NSString *_indexName;
    NSString *_bundleIdentifier;
    NSString *_protectionClass;
    BOOL _enabled;
    BOOL _supportsPersistentHistory;
    BOOL _usesSharedCoordinatorStack;
    BOOL _usesPrivateIndex;
}

- (id)_lastImportedTransaction;
- (BOOL)_initialImportCompleted;
- (void)_initializePersistentStore;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(CDUnknownBlockType)arg3;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg2;
- (void)_catchUpToCurrentTransaction;
- (id)_spotlightClientStateForHistoryTracking;
- (void)_updateSpotlightClientStateForHistoryTracking:(id)arg1;
- (void)_doFullReimport;
- (void)_importObjectsUpdatedSinceTransaction:(id)arg1;
- (id)_processTransactionsStartingAt:(id)arg1;
- (void)_reindexInstancesOf:(id)arg1 inIndex:(id)arg2;
- (void)_updateSpotlightIndexFromSaveRequest:(id)arg1;
- (void)_updateSpotlightIndexForObjectsWithIDs:(id)arg1;
- (id)_searchableItemForObject:(id)arg1;
- (id)attributeSetForObject:(id)arg1;
- (id)_processedOidsForSaveRequest:(id)arg1;
- (id)_processedOidsForDictionary:(id)arg1;
- (void)dealloc;
- (void)_invalidate;
- (id)initForStoreWithDescription:(id)arg1 model:(id)arg2;
- (id)indexName;
- (id)domainIdentifier;
- (id)_retainedCurrentSearchableIndex;
- (void)_asyncContextBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSManagedObjectContext *_context;
- (void)stopSpotlightIndexing;
- (void)startSpotlightIndexing;
- (BOOL)usePrivateIndex;
- (id)protectionClass;
- (id)bundleIdentifier;
- (void)indexSearchableItemsToCurrentHistoryToken;
- (id)initForStoreWithDescription:(id)arg1 coordinator:(id)arg2;

@end

