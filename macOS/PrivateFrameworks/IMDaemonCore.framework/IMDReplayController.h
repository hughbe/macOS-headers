//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDReplayStorageController, IMDReplayStorageIterationContext, NSDictionary;

@interface IMDReplayController : NSObject
{
    IMDReplayStorageController *_suspendedStorageController;
    BOOL _isRecordingReplayDB;
    NSDictionary *_syncTaskByServiceName;
    IMDReplayStorageIterationContext *_heldDeletionContext;
    CDUnknownBlockType _automationCompletionBlock;
    IMDReplayStorageController *_storageController;
}

+ (long long)batchSize;
+ (id)sharedInstance;
@property(retain, nonatomic) IMDReplayStorageController *storageController; // @synthesize storageController=_storageController;
@property(copy, nonatomic) CDUnknownBlockType automationCompletionBlock; // @synthesize automationCompletionBlock=_automationCompletionBlock;
@property(retain, nonatomic) IMDReplayStorageIterationContext *heldDeletionContext; // @synthesize heldDeletionContext=_heldDeletionContext;
@property(retain, nonatomic) NSDictionary *syncTaskByServiceName; // @synthesize syncTaskByServiceName=_syncTaskByServiceName;
@property(readonly, nonatomic) BOOL isRecordingReplayDB; // @synthesize isRecordingReplayDB=_isRecordingReplayDB;
- (void)replayMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)endRecordingReplayDatabase;
- (void)startRecordingReplayDatabase;
- (void)restoreDefaultStoreControllerInstance;
- (void)overrideStorageControllerWithDatabaseFromPath:(id)arg1;
- (void)deleteReplayDBIfNotUnderFirstUnlock;
- (void)_fetchNexBatchOfMessagesAndReplay;
- (void)scheduleSyncTaskForServices:(id)arg1;
- (void)replayMessages;
- (void)_processBatch:(id)arg1;
- (BOOL)storeMessage:(id)arg1 type:(unsigned char)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithStorageController:(id)arg1;
- (id)init;

@end

