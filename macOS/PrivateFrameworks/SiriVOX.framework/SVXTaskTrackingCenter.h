//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXTaskTrackingDelegate-Protocol.h>

@class NSMutableSet, NSString;
@protocol SVXPerforming, SVXTaskTrackingCenterDelegate;

@interface SVXTaskTrackingCenter : NSObject <SVXTaskTrackingDelegate>
{
    id <SVXPerforming> _performer;
    NSMutableSet *_contexts;
    id <SVXTaskTrackingCenterDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_endContextsPassingTest:(CDUnknownBlockType)arg1;
- (void)_endContext:(id)arg1;
- (void)_beginContext:(id)arg1;
- (void)taskTrackerDidEnd:(id)arg1;
- (void)taskTracker:(id)arg1 childWillBegin:(id)arg2;
- (void)getContextsOfAllTrackedTasksUsingBlock:(CDUnknownBlockType)arg1;
- (void)endTrackingAllTasks;
- (void)endTrackingTasksPassingTest:(CDUnknownBlockType)arg1;
- (void)endTrackingTaskWithContext:(id)arg1;
- (id)beginTrackingTaskWithContext:(id)arg1 instrumentationContext:(id)arg2;
- (id)initWithPerformer:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

