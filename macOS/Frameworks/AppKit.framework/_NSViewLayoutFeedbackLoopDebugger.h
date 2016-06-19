//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableSet, NSView;

@interface _NSViewLayoutFeedbackLoopDebugger : NSObject
{
    long long _debuggingState;
    NSView *_rootView;
    NSMutableSet *_viewsWithChangingGeometry;
    NSMutableSet *_viewsWithVariableChangesTriggeringLayout;
    NSMutableSet *_turningPointViews;
    NSMutableSet *_involvedViews;
    NSMutableArray *_layoutList;
    NSArray *_reducedLayoutList;
    BOOL _rootViewConfirmed;
    BOOL _feedbackLoopConfirmed;
    long long _rootViewLayoutCount;
    NSView *_currentLayoutView;
}

+ (id)layoutFeedbackLoopDebugger;
+ (void)destroyLayoutFeedbackLoopDebuggerForUnitTests;
+ (void)createLayoutFeedbackLoopDebuggerForUnitTests;
@property(retain, nonatomic) NSView *currentLayoutView; // @synthesize currentLayoutView=_currentLayoutView;
- (void).cxx_destruct;
- (id)topLevelViewHierarchyTrace;
- (id)description;
- (void)dumpInfoWithInfoCollectionSuccess:(BOOL)arg1;
- (void)willSendSetFrame:(struct CGRect)arg1 toLayerOfView:(id)arg2;
- (void)willSendSetPosition:(struct CGPoint)arg1 toLayerOfView:(id)arg2;
- (void)willSendSetBounds:(struct CGRect)arg1 toLayerOfView:(id)arg2;
- (id)viewsWithChangingGeometryCreateIfNecessary;
- (void)willSendSetNeedsLayoutToLayerOfView:(id)arg1;
- (id)turningPointViewsCreateIfNecessary;
- (void)willSendSetNeedsLayoutToView:(id)arg1 becauseOfChangeInVariable:(id)arg2 inLayoutEngine:(id)arg3;
- (id)viewsWithVariableChangesTriggeringLayoutCreateIfNecessary;
- (void)didSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)willSendViewDidLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)didSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)willSendViewWillLayoutSubviewsToViewControllerOfView:(id)arg1;
- (void)didSendLayoutSubviewsToView:(id)arg1;
- (void)willSendLayoutSubviewsToView:(id)arg1;
- (void)willExitLayoutSublayersOfLayerForView:(id)arg1;
- (void)didEnterLayoutSublayersOfLayerForView:(id)arg1;

@end

