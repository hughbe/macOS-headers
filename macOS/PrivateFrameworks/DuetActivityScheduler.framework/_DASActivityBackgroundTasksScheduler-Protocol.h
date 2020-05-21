//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DuetActivityScheduler/NSObject-Protocol.h>

@class NSError, NSString, _DASActivity;
@protocol _DASActivityBackgroundTasksSchedulerDelegate;

@protocol _DASActivityBackgroundTasksScheduler <NSObject>
- (void)completeTaskRequest:(_DASActivity *)arg1;
- (void)cancelAllTaskRequests;
- (void)cancelTaskRequestWithIdentifier:(NSString *)arg1;
- (void)getPendingTaskRequestsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (NSError *)submitTaskRequest:(_DASActivity *)arg1;
- (void)setBackgroundTasksSchedulerDelegate:(id <_DASActivityBackgroundTasksSchedulerDelegate>)arg1;
@end

