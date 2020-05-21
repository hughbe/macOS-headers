//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskDependency.h>

@class NSURLSessionTask, NSURLSessionTaskDependencyDescription;

@interface __NSCFURLSessionTaskDependency : NSURLSessionTaskDependency
{
    NSURLSessionTaskDependencyDescription *_taskDependencyDescription;
    NSURLSessionTask *_parentTask;
    NSURLSessionTask *_mainDocumentTask;
}

+ (id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1;
+ (id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(BOOL)arg3;
- (id)mainDocumentTask;
- (id)parentTask;
- (void)setTaskDependencyDescription:(id)arg1;
- (id)taskDependencyDescription;
- (void)dealloc;
- (id)init;

@end

