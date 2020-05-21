//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSOrderedSet, XCTCapabilities;

@interface XCTRuntimeIssueContext : NSObject
{
    XCTCapabilities *_capabilities;
    Class _reportingDelegate;
    NSMutableOrderedSet *_mutableRuntimeIssues;
}

+ (id)aggregationOfRuntimeIssues:(id)arg1;
+ (void)reportRuntimeIssues:(id)arg1;
+ (void)reportRuntimeIssue:(id)arg1;
+ (void)captureIssuesWithContext:(id)arg1 inScope:(CDUnknownBlockType)arg2;
+ (id)currentContext;
- (void).cxx_destruct;
@property(retain) NSMutableOrderedSet *mutableRuntimeIssues; // @synthesize mutableRuntimeIssues=_mutableRuntimeIssues;
@property(readonly) __weak Class reportingDelegate; // @synthesize reportingDelegate=_reportingDelegate;
@property(readonly, copy) XCTCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(readonly, copy) NSOrderedSet *runtimeIssues;
- (void)reportRuntimeIssue:(id)arg1;
- (id)init;
- (id)initWithCapabilities:(id)arg1 reportingDelegate:(Class)arg2;

@end

