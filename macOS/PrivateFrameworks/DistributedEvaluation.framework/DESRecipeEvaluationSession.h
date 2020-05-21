//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DESRecipe, DESRecordSet, NSArray, NSData, NSDate, NSDictionary, NSError, NSString, NSURL;
@protocol OS_xpc_object;

@interface DESRecipeEvaluationSession : NSObject
{
    NSDate *_startDate;
    NSURL *_baseURL;
    NSString *_localeIdentifier;
    NSDate *_deadline;
    NSDate *_deferralDate;
    NSArray *_attachmentsToDelete;
    double _resumeTimestamp;
    Class _protocolClass;
    BOOL _wasResumedFromURL;
    DESRecipe *_recipe;
    DESRecordSet *_matchingRecordSet;
    long long _evaluationResult;
    NSDictionary *_JSONResult;
    NSData *_binaryResult;
    NSError *_error;
    NSString *_testingRecipePath;
    NSArray *_testingRecipeAttachments;
    CDUnknownBlockType _testingCompletionHandler;
    NSObject<OS_xpc_object> *_activity;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_xpc_object> *activity; // @synthesize activity=_activity;
@property(copy, nonatomic) CDUnknownBlockType testingCompletionHandler; // @synthesize testingCompletionHandler=_testingCompletionHandler;
@property(copy, nonatomic) NSArray *testingRecipeAttachments; // @synthesize testingRecipeAttachments=_testingRecipeAttachments;
@property(copy, nonatomic) NSString *testingRecipePath; // @synthesize testingRecipePath=_testingRecipePath;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSData *binaryResult; // @synthesize binaryResult=_binaryResult;
@property(readonly, copy, nonatomic) NSDictionary *JSONResult; // @synthesize JSONResult=_JSONResult;
@property(readonly, nonatomic) long long evaluationResult; // @synthesize evaluationResult=_evaluationResult;
@property(readonly, nonatomic) DESRecordSet *matchingRecordSet; // @synthesize matchingRecordSet=_matchingRecordSet;
@property(readonly, nonatomic) DESRecipe *recipe; // @synthesize recipe=_recipe;
- (void)_deleteDownloadedAttachments;
- (id)deferralURL;
- (id)deferWithDeadline:(id)arg1 error:(id *)arg2;
- (void)completeWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeWithJSONResult:(id)arg1 binaryResult:(id)arg2 secureAggregationFloats:(const float *)arg3 count:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)completeWithJSONResult:(id)arg1 binaryResult:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_postResultsToServerIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadAttachmentsWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initWithResumptionURL:(id)arg1 recordSet:(id)arg2 protocolClass:(Class)arg3 error:(id *)arg4;
- (id)initWithResumptionURL:(id)arg1 error:(id *)arg2;
- (id)_initWithRecipe:(id)arg1 matchingRecordSet:(id)arg2 baseURL:(id)arg3 localeIdentifier:(id)arg4;
- (void)dealloc;

@end

