//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDFetchRecordsOperation, CKDRecordCache, NSDictionary, NSMutableDictionary, NSObject, NSSet;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDRecordFetchAggregator : CKDDatabaseOperation
{
    CKDRecordCache *_recordCache;
    BOOL _useRecordCache;
    BOOL _fetchAssetContents;
    BOOL _preserveOrdering;
    BOOL _started;
    BOOL _markedToFinishByParent;
    BOOL _forceDecryptionAttempt;
    CDUnknownBlockType _fetchAggregatorCompletionBlock;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSSet *_desiredKeys;
    NSObject<OS_dispatch_source> *_recordReadySource;
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_source> *_fetchSource;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSMutableDictionary *_fetchInfosByOrder;
    unsigned long long _curFetchOrder;
    unsigned long long _highestReturnedOrder;
    CKDFetchRecordsOperation *_currentFetchOp;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL forceDecryptionAttempt; // @synthesize forceDecryptionAttempt=_forceDecryptionAttempt;
@property(getter=isMarkedToFinishByParent) BOOL markedToFinishByParent; // @synthesize markedToFinishByParent=_markedToFinishByParent;
@property BOOL started; // @synthesize started=_started;
@property(nonatomic) __weak CKDFetchRecordsOperation *currentFetchOp; // @synthesize currentFetchOp=_currentFetchOp;
@property unsigned long long highestReturnedOrder; // @synthesize highestReturnedOrder=_highestReturnedOrder;
@property unsigned long long curFetchOrder; // @synthesize curFetchOrder=_curFetchOrder;
@property(retain, nonatomic) NSMutableDictionary *fetchInfosByOrder; // @synthesize fetchInfosByOrder=_fetchInfosByOrder;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *fetchSource; // @synthesize fetchSource=_fetchSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *recordReadySource; // @synthesize recordReadySource=_recordReadySource;
@property(retain, nonatomic) NSSet *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property(nonatomic) BOOL preserveOrdering; // @synthesize preserveOrdering=_preserveOrdering;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(nonatomic) BOOL fetchAssetContents; // @synthesize fetchAssetContents=_fetchAssetContents;
@property(copy, nonatomic) CDUnknownBlockType fetchAggregatorCompletionBlock; // @synthesize fetchAggregatorCompletionBlock=_fetchAggregatorCompletionBlock;
@property(nonatomic) BOOL useRecordCache; // @synthesize useRecordCache=_useRecordCache;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_finishRecordFetchAggregator;
- (void)finishIfAppropriate;
- (void)fetchRecords:(id)arg1 withPerRecordCompletion:(CDUnknownBlockType)arg2;
- (id)_fetchRecord:(id)arg1 recordReadyHandle:(char *)arg2 withRecordCompletion:(CDUnknownBlockType)arg3;
- (void)main;
- (void)_addRecordFetchInfos:(id)arg1;
- (void)_recordFetchesAvailable;
- (void)_lockedSendFetchRequest;
- (void)_flushFetchedRecordsToConsumerLocked;
- (void)_flushFetchedRecordsToConsumerNoOrderingLocked;
- (void)_flushFetchedRecordsToConsumerOrderedLocked;
- (void)_performCallbackForFetchInfoLocked:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (void)dealloc;
@property(readonly, nonatomic) CKDRecordCache *recordCache;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

