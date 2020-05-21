//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>
#import <CloudPhotoLibrary/CPLBatchExtractionStrategyStorage-Protocol.h>

@class CPLBatchExtractionStrategy, CPLPlatformObject, NSDate, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLEnginePushRepository : CPLEngineStorage <CPLAbstractObject, CPLBatchExtractionStrategyStorage>
{
    NSMutableDictionary *_propertiesPerClass;
    CPLBatchExtractionStrategy *_extractionStrategy;
    NSString *_lastStrategyName;
    NSObject<OS_dispatch_queue> *_uploadRateQueue;
    NSObject<OS_dispatch_queue> *_timingStatisticQueue;
    NSDate *_lastUploadRateUpdateDate;
    NSMutableDictionary *_timingStatistics;
    double _lastApproximativeUploadRate;
}

- (void).cxx_destruct;
- (id)status;
- (BOOL)isEmpty;
- (id)_timingStatisticStatuses;
- (void)updateTimingStatisticForKey:(id)arg1 duration:(double)arg2 recordCount:(unsigned long long)arg3 error:(BOOL)arg4 cancelled:(BOOL)arg5;
@property(readonly, nonatomic) unsigned long long maximumResourceSizePerBatch;
- (void)updateApproximativeUploadRate:(double)arg1;
- (BOOL)removeChange:(id)arg1 error:(id *)arg2;
- (id)allChangesWithScopeIdentifier:(id)arg1;
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg1;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(BOOL)arg3;
- (id)changeWithScopedIdentifier:(id)arg1;
@property(retain, nonatomic) CPLBatchExtractionStrategy *extractionStrategy;
- (id)storedExtractedBatch;
- (BOOL)reinjectExtractedBatch:(id)arg1 overwrittenRecordIdentifiers:(id *)arg2 error:(id *)arg3;
- (BOOL)storeExtractedBatch:(id)arg1 error:(id *)arg2;
- (BOOL)deleteAllChangesWithError:(id *)arg1;
- (BOOL)discardChangeWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (BOOL)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 overwrittenRecord:(char *)arg3 error:(id *)arg4;
- (id)_completeChange:(id)arg1;
- (id)_propertiesForChange:(id)arg1;
- (BOOL)storeChange:(id)arg1 uploadIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)hasChangesWithScopeFilter:(id)arg1;
- (BOOL)hasChangesInScopeWithIdentifier:(id)arg1;
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1;
- (BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

