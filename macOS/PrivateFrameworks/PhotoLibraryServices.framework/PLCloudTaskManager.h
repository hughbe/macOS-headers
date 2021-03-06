//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PLCloudTaskManager : NSObject
{
    NSMutableDictionary *_pendingTaskForTaskIdentifier;
    NSMutableDictionary *_highPriorityResourceToTaskIdentifierMap;
    NSMutableDictionary *_lowPriorityResourceToTaskIdentifierMap;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

- (void).cxx_destruct;
- (void)_removeTaskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2;
- (void)_setTaskIdentifiers:(id)arg1 forResourceIdentifier:(id)arg2 highPriority:(BOOL)arg3;
- (id)_taskIdentifiersForResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2;
- (id)_taskForResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2;
- (void)reset;
- (void)cancelTaskWithTaskIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getPendingTaskForTaskIdentifier:(id)arg1;
- (void)reportCompletionForResourceIdentifier:(id)arg1 highPriority:(BOOL)arg2 withError:(id)arg3;
- (void)reportProgress:(float)arg1 forResourceIdentifier:(id)arg2 highPriority:(BOOL)arg3;
- (void)setPendingTaskWithTransferTask:(id)arg1 withTaskIdentifier:(id)arg2;
- (BOOL)addProgressBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2 forResourceIdentifier:(id)arg3 highPriority:(BOOL)arg4 withTaskIdentifier:(id)arg5;
- (id)init;

@end

