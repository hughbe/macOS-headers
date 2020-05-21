//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation
{
    CDUnknownBlockType _shareParticipantKeyFetchedBlock;
    CDUnknownBlockType _shareParticipantKeyCompletionBlock;
    NSDictionary *_baseTokensByShareID;
    NSDictionary *_childRecordIDsByShareID;
    NSArray *_shareIDs;
    NSMutableDictionary *_errorsByShareID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *errorsByShareID; // @synthesize errorsByShareID=_errorsByShareID;
@property(retain, nonatomic) NSArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(retain, nonatomic) NSDictionary *childRecordIDsByShareID; // @synthesize childRecordIDsByShareID=_childRecordIDsByShareID;
@property(retain, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (Class)operationInfoClass;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantKeyCompletionBlock; // @synthesize shareParticipantKeyCompletionBlock=_shareParticipantKeyCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantKeyFetchedBlock; // @synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock;
- (id)initWithShareIDs:(id)arg1;

@end

