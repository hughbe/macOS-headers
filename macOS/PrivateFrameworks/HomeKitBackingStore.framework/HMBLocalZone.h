//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitBackingStore/HMFLogging-Protocol.h>

@class HMBLocalDatabase, HMBLocalSQLContext, HMBModelContainer, HMFUnfairLock, NAFuture, NSHashTable, NSMutableDictionary, NSString;
@protocol HMBLocalZoneDelegate, HMBLocalZoneID, HMBMirrorProtocol;

@interface HMBLocalZone : HMFObject <HMFLogging>
{
    BOOL _hasStartedUp;
    HMBLocalDatabase *_localDatabase;
    HMBModelContainer *_modelContainer;
    id <HMBLocalZoneID> _zoneID;
    id <HMBMirrorProtocol> _mirror;
    id <HMBLocalZoneDelegate> _delegate;
    HMFUnfairLock *_propertyLock;
    NSHashTable *_observersForAllModels;
    NSMutableDictionary *_observersByModelID;
    unsigned long long _zoneRow;
    HMBLocalSQLContext *_sql;
    NAFuture *_shutdownFuture;
}

+ (id)logCategory;
+ (id)calculateUpdatedTokenFrom:(id)arg1 updates:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NAFuture *shutdownFuture; // @synthesize shutdownFuture=_shutdownFuture;
@property(nonatomic) BOOL hasStartedUp; // @synthesize hasStartedUp=_hasStartedUp;
@property(readonly, nonatomic) HMBLocalSQLContext *sql; // @synthesize sql=_sql;
@property(readonly, nonatomic) unsigned long long zoneRow; // @synthesize zoneRow=_zoneRow;
@property(readonly, nonatomic) NSMutableDictionary *observersByModelID; // @synthesize observersByModelID=_observersByModelID;
@property(readonly, nonatomic) NSHashTable *observersForAllModels; // @synthesize observersForAllModels=_observersForAllModels;
@property(readonly, nonatomic) HMFUnfairLock *propertyLock; // @synthesize propertyLock=_propertyLock;
@property(nonatomic) __weak id <HMBLocalZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <HMBMirrorProtocol> mirror; // @synthesize mirror=_mirror;
@property(readonly, nonatomic) id <HMBLocalZoneID> zoneID; // @synthesize zoneID=_zoneID;
@property(readonly, nonatomic) HMBModelContainer *modelContainer; // @synthesize modelContainer=_modelContainer;
@property(nonatomic) __weak HMBLocalDatabase *localDatabase; // @synthesize localDatabase=_localDatabase;
@property(readonly, copy) NSString *description;
- (id)logIdentifier;
- (BOOL)shouldLogPrivateInformation;
- (id)shutdown;
- (id)removeAllModelsOfTypes:(id)arg1 options:(id)arg2;
- (id)removeModelsAndChildModelsWithIDs:(id)arg1 options:(id)arg2;
- (id)remove:(id)arg1 options:(id)arg2;
- (id)update:(id)arg1 options:(id)arg2;
- (id)update:(id)arg1 remove:(id)arg2 options:(id)arg3;
- (id)flush;
- (BOOL)destroyWithError:(id *)arg1;
- (void)startUp;
- (id)setExternalData:(id)arg1 forExternalID:(id)arg2;
- (id)setExternalData:(id)arg1 forModelID:(id)arg2;
- (id)modelIDForExternalID:(id)arg1 error:(id *)arg2;
- (id)externalIDForModelID:(id)arg1 error:(id *)arg2;
- (id)externalDataForExternalID:(id)arg1 error:(id *)arg2;
- (id)externalDataForModelID:(id)arg1 error:(id *)arg2;
- (void)removeObserver:(id)arg1 forModelWithID:(id)arg2;
- (void)removeObserverForAllModels:(id)arg1;
- (void)addObserver:(id)arg1 forModelWithID:(id)arg2;
- (void)addObserverForAllModels:(id)arg1;
- (void)dealloc;
- (id)initWithLocalDatabase:(id)arg1 zoneID:(id)arg2 zoneRow:(unsigned long long)arg3 delegate:(id)arg4 modelContainer:(id)arg5 mirror:(id)arg6;
- (void)updateReplicationToken:(id)arg1;
- (id)replicationToken;
- (id)notifyReplicationWithToken:(id)arg1 updates:(id)arg2;
- (id)triggerProcessForBlockRow:(unsigned long long)arg1;
- (id)queueIncompleteProcesses;
- (id)observersForModelWithID:(id)arg1;
- (void)migrateUnsupportedModels;
- (id)inputContext:(id *)arg1;
- (BOOL)removeOutputBlockWithRow:(unsigned long long)arg1 error:(id *)arg2;
- (id)markGroupAsSentWithOutputBlock:(unsigned long long)arg1 tuples:(id)arg2;
- (id)fetchRecordsForOutputBlock:(unsigned long long)arg1 error:(id *)arg2;
- (id)fetchOptionsForOutputBlock:(unsigned long long)arg1 error:(id *)arg2;
- (void)rebuildIndexesIfNeeded;
- (id)countModelsUsingQuery:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
- (id)queryModelsUsingQuery:(id)arg1 arguments:(id)arg2;
- (id)queryModelsUsingQuery:(id)arg1;
- (id)queryModelsOfType:(Class)arg1;
- (id)fetchModels;
- (id)queryModelsOfType:(Class)arg1 properties:(id)arg2 filter:(CDUnknownBlockType)arg3;
- (id)queryModelsOfType:(Class)arg1 filter:(CDUnknownBlockType)arg2;
- (id)queryModelsOfType:(Class)arg1 predicate:(id)arg2;
- (BOOL)removeBlockWithRow:(unsigned long long)arg1 error:(id *)arg2;
- (id)fetchItemsInBlock:(id)arg1 error:(id *)arg2;
- (id)fetchReadyBlocksWithType:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)insertBlockToRemoveAllModelsAndChildModelsWithType:(unsigned long long)arg1 modelIDs:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (unsigned long long)insertBlockToRemoveAllModelsWithType:(unsigned long long)arg1 modelTypes:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (unsigned long long)insertBlockWithType:(unsigned long long)arg1 options:(id)arg2 items:(id)arg3 error:(id *)arg4;
- (id)createInputBlockWithType:(unsigned long long)arg1 error:(id *)arg2;
- (id)createOutputBlockWithError:(id *)arg1;
- (id)remove:(id)arg1;
- (id)update:(id)arg1;
- (id)update:(id)arg1 remove:(id)arg2;
- (id)objectFromData:(id)arg1 encoding:(unsigned long long)arg2 storageLocation:(unsigned long long)arg3 recordRowID:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)removeAllRecordsWithError:(id *)arg1;
- (id)setExternalID:(id)arg1 externalData:(id)arg2 forRecordRow:(unsigned long long)arg3;
- (id)queryAllRowRecordsReturning:(unsigned long long)arg1;
- (id)fetchRecordRowsWithModelIDs:(id)arg1 error:(id *)arg2;
- (id)fetchRecordRowWithExternalID:(id)arg1 returning:(unsigned long long)arg2 error:(id *)arg3;
- (id)fetchRecordRowWithModelID:(id)arg1 returning:(unsigned long long)arg2 error:(id *)arg3;
- (id)fetchModelWithModelID:(id)arg1 recordRow:(unsigned long long *)arg2 error:(id *)arg3;
- (id)fetchModelWithRecordRow:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)fetchModelsAndChildModelsOfType:(Class)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (id)fetchModelsOfType:(Class)arg1 error:(id *)arg2;
- (id)fetchAllModelsWithError:(id *)arg1;
- (id)fetchModelsWithParentModelID:(id)arg1 error:(id *)arg2;
- (id)fetchModelsWithParentModelID:(id)arg1 ofType:(Class)arg2 error:(id *)arg3;
- (id)fetchModelWithModelID:(id)arg1 ofType:(Class)arg2 error:(id *)arg3;
- (id)fetchModelWithModelID:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

