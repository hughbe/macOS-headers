//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLChangeBatch, CPLEngineScopeStorage, CPLEngineStore, CPLPushChangeTasks, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface CPLPushSessionTracker : NSObject
{
    CPLEngineScopeStorage *_scopes;
    NSMutableSet *_unquarantinedRecordScopedIdentifiers;
    NSMutableDictionary *_incomingBatchRecordPerScopedIdentifiers;
    NSMutableDictionary *_storedClientRecords;
    NSMutableDictionary *_storedCloudRecords;
    NSMutableArray *_addedRecords;
    NSMutableArray *_updatedRecords;
    NSMutableArray *_deletedRecordScopedIdentifiers;
    NSMutableArray *_changesWithResourceChanges;
    NSMutableDictionary *_fullRecords;
    NSMutableDictionary *_resourcesToUpload;
    BOOL _checkScopeIdentifier;
    NSMutableSet *_validScopeIdentifiers;
    NSMutableSet *_invalidScopeIdentifiers;
    BOOL _diffedBatchCanLowerQuota;
    BOOL _expandHasBeenSuccessful;
    BOOL _diffHasBeenSuccessful;
    BOOL _applyHasBeenSuccessful;
    CPLChangeBatch *_incomingBatch;
    CPLEngineStore *_store;
    CPLChangeBatch *_expandedBatch;
    CPLPushChangeTasks *_pushChangeTasks;
    CPLChangeBatch *_diffedBatch;
    unsigned long long _ignoredRecordCount;
    NSDate *_now;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL applyHasBeenSuccessful; // @synthesize applyHasBeenSuccessful=_applyHasBeenSuccessful;
@property(readonly, nonatomic) BOOL diffHasBeenSuccessful; // @synthesize diffHasBeenSuccessful=_diffHasBeenSuccessful;
@property(readonly, nonatomic) BOOL expandHasBeenSuccessful; // @synthesize expandHasBeenSuccessful=_expandHasBeenSuccessful;
@property(copy, nonatomic) NSDate *now; // @synthesize now=_now;
@property(readonly, nonatomic) BOOL diffedBatchCanLowerQuota; // @synthesize diffedBatchCanLowerQuota=_diffedBatchCanLowerQuota;
@property(readonly, nonatomic) unsigned long long ignoredRecordCount; // @synthesize ignoredRecordCount=_ignoredRecordCount;
@property(readonly, nonatomic) CPLChangeBatch *diffedBatch; // @synthesize diffedBatch=_diffedBatch;
@property(readonly, nonatomic) CPLPushChangeTasks *pushChangeTasks; // @synthesize pushChangeTasks=_pushChangeTasks;
@property(readonly, nonatomic) NSSet *unquarantinedRecordScopedIdentifiers; // @synthesize unquarantinedRecordScopedIdentifiers=_unquarantinedRecordScopedIdentifiers;
@property(readonly, nonatomic) CPLChangeBatch *expandedBatch; // @synthesize expandedBatch=_expandedBatch;
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) CPLChangeBatch *incomingBatch; // @synthesize incomingBatch=_incomingBatch;
- (BOOL)shouldCancelSyncSessionTryingToUploadChange:(id)arg1;
- (BOOL)applyChangesToClientCacheWithError:(id *)arg1;
@property(readonly, nonatomic) NSDictionary *resourcesToUpload;
- (id)deletedRecordIdentifiers;
@property(readonly, nonatomic) NSArray *deletedRecordScopedIdentifiers;
@property(readonly, nonatomic) NSArray *updatedRecords;
@property(readonly, nonatomic) NSArray *addedRecords;
- (void)enumerateDiffWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)computeDiff;
- (BOOL)computeExpandedBatchWithError:(id *)arg1;
- (id)_realChangeFromChange:(id)arg1 comparedToStoredRecord:(id)arg2 changeType:(unsigned long long)arg3;
- (BOOL)hasCloudRecordWithLocalScopedIdentifier:(id)arg1;
- (id)storedCloudRecordWithLocalScopedIdentifier:(id)arg1;
- (BOOL)hasClientRecordWithLocalScopedIdentifier:(id)arg1;
- (id)storedClientRecordWithLocalScopedIdentifier:(id)arg1;
- (BOOL)checkScopeIdentifier:(id)arg1;
- (id)resourceIdentitiesForRecordWithLocalScopedIdentifier:(id)arg1;
- (id)enqueuedOrStoredRecordWithLocalScopedIdentifier:(id)arg1;
- (id)_resourceIdentitiesFromChange:(id)arg1;
- (BOOL)knowsClientRecordWithScopedIdentifier:(id)arg1;
@property(readonly, nonatomic) BOOL hasPushChangeTasks;
- (id)initWithIncomingBatch:(id)arg1 store:(id)arg2 error:(id *)arg3;

@end

