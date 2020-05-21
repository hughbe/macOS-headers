//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSGestureRecognizerFailureMap : NSObject
{
    NSMutableArray *_gestureRecognizers;
    char *_failureMap;
    int _unmetFailureRequirementCount;
    int _unmetFailureDependentCount;
}

+ (void)buildFailureMapForGestureRecognizer:(id)arg1;
+ (void)buildFailureMapForGestureRecognizers:(id)arg1;
- (BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)arg1;
@property(readonly) BOOL hasUnmetFailureRequirementsOrDependents;
- (void)gestureRecognizerFinished:(id)arg1;
- (void)_queueRecognizersForResetIfFinished;
- (void)_gestureRecognizerFinished:(id)arg1;
- (void)gestureRecognizerBecameDirty:(id)arg1;
- (void)gestureRecognizerDeallocated:(id)arg1;
- (id)description;
- (void)rebuildFailureMap;
- (void)reloadFailureMap;
- (void)dealloc;
- (id)initWithRelatedGestures:(id)arg1;

@end

