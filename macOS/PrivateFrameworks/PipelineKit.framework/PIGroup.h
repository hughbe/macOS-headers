//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, PIPipeline, PIStatisticsElapsedTime;
@protocol OS_dispatch_group;

@interface PIGroup : NSObject
{
    long long _concurrencyLimit;
    BOOL _suspended;
    NSMutableArray *_operations;
    NSMutableArray *_executingOperations;
    long long _executingConcurrency;
    BOOL _removeOnCompletion;
    NSObject<OS_dispatch_group> *_operationsGroup;
    PIStatisticsElapsedTime *_executionTime;
    CDUnknownBlockType _availableBlock;
    PIPipeline *_pipeline;
    NSString *_identifier;
    unsigned long long _priority;
    NSMutableDictionary *_operationsByPriority;
    NSMapTable *_operationsByKey;
    NSMapTable *_operationsByIdentifier;
    double _timestampStart;
}

+ (id)groupWithConcurrencyLimit:(long long)arg1 priority:(unsigned long long)arg2;
+ (id)group;
- (void).cxx_destruct;
@property BOOL removeOnCompletion; // @synthesize removeOnCompletion=_removeOnCompletion;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak PIPipeline *pipeline; // @synthesize pipeline=_pipeline;
- (id)description;
- (double)wallTime;
- (double)executionTime;
- (void)cancelAllOperationsAndSuspendGroupUntilFinished:(CDUnknownBlockType)arg1;
- (void)cancelAllOperations:(CDUnknownBlockType)arg1;
- (id)waitUntilFinished:(BOOL)arg1;
- (void)waitUntilFinishedUsingBlock:(CDUnknownBlockType)arg1;
- (void)updateOperationsWithBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addOperations:(id)arg1 waitUntilFinishedBlock:(CDUnknownBlockType)arg2;
- (void)addOperations:(id)arg1;
- (id)addOperationWithExecutionBlock:(CDUnknownBlockType)arg1;
- (void)addOperation:(id)arg1;
- (id)operationsWithPriority:(long long)arg1;
- (id)operationWithIdentifier:(id)arg1;
- (id)operationsWithKey:(id)arg1;
@property(readonly) BOOL isExecuting;
@property(readonly) long long executingConcurrency;
@property(readonly) unsigned long long executingOperationsCount;
@property(readonly) unsigned long long operationsCount;
@property(readonly, copy) NSArray *executingOperations; // @synthesize executingOperations=_executingOperations;
@property(readonly, copy) NSArray *operations; // @synthesize operations=_operations;
- (void)_removeOperation:(id)arg1;
- (void)_addOperation:(id)arg1;
- (void)_operation:(id)arg1 didChangePriority:(long long)arg2;
- (void)_rebuildOperationsByPriority;
@property(copy) CDUnknownBlockType availableBlock; // @synthesize availableBlock=_availableBlock;
@property(getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property unsigned long long priority; // @synthesize priority=_priority;
@property long long concurrencyLimit; // @synthesize concurrencyLimit=_concurrencyLimit;
- (void)_updateConcurrencyLimit;
- (void)dealloc;
- (id)init;

@end

