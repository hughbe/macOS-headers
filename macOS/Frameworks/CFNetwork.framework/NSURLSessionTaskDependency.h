//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURLSessionTask, NSURLSessionTaskDependencyDescription;

@interface NSURLSessionTaskDependency : NSObject
{
}

+ (id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1;
+ (id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(BOOL)arg3;

// Remaining properties
@property(readonly, retain, nonatomic) NSURLSessionTask *mainDocumentTask; // @dynamic mainDocumentTask;
@property(readonly, retain, nonatomic) NSURLSessionTask *parentTask; // @dynamic parentTask;
@property(retain, nonatomic) NSURLSessionTaskDependencyDescription *taskDependencyDescription; // @dynamic taskDependencyDescription;

@end

