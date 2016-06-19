//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAlignmentFeedbackFilter, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface _NSAlignmentFeedbackFilterImpl : NSObject
{
    NSAlignmentFeedbackFilter *_filter;
    long long _flags;
    id _velocityFilter;
    double _currentTimestamp;
    double _lastMovementTimestamp;
    struct CGPoint _currentLocation;
    unsigned long long _currentModifierFlags;
    NSObject<OS_dispatch_source> *_periodicUpdateTimer;
    double _lastAcceptVelocityTime;
    double _snapDistance;
}

+ (unsigned long long)inputEventMask;
- (void)performFeedback:(id)arg1 performanceTime:(unsigned long long)arg2;
- (id)alignmentFeedbackTokenForVerticalMovementInView:(id)arg1 previousY:(double)arg2 alignedY:(double)arg3 defaultY:(double)arg4;
- (id)alignmentFeedbackTokenForHorizontalMovementInView:(id)arg1 previousX:(double)arg2 alignedX:(double)arg3 defaultX:(double)arg4;
- (id)alignmentFeedbackTokenForMovementInView:(id)arg1 previousPoint:(struct CGPoint)arg2 alignedPoint:(struct CGPoint)arg3 defaultPoint:(struct CGPoint)arg4;
- (void)updateWithPanRecognizer:(id)arg1;
- (void)updateWithEvent:(id)arg1;
- (BOOL)_isVerticalVelocityAlignable;
- (BOOL)_isHorizontalVelocityAlignable;
- (void)_setSnapDistance:(double)arg1;
- (void)_setActuationBlock:(CDUnknownBlockType)arg1 coalesce:(BOOL)arg2;
- (CDUnknownBlockType)_actuationBlock;
- (void)_updateDragOnLocation:(struct CGPoint)arg1 timestamp:(double)arg2 modifierFlags:(unsigned long long)arg3 recognizer:(id)arg4;
- (void)_clearPeriodicTimer;
- (void)_schedulePeriodicUpdateWithRecognizer:(id)arg1;
- (void)_requestPeriodicUpdate;
- (BOOL)_modifierFlagsAllowAlignment;
- (id)initWithFilter:(id)arg1;
- (void)dealloc;
- (void)_reset;

@end

