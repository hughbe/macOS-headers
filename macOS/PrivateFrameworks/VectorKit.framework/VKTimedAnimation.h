//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKAnimation.h>

@interface VKTimedAnimation : VKAnimation
{
    CDUnknownBlockType _stepHandler;
    CDUnknownBlockType _timingFunction;
    double _duration;
    double _startTimestamp;
    double _lastTimestamp;
    BOOL _resuming;
    BOOL _startTimestampSet;
}

+ (void)setDragCoefficientGetter:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType stepHandler; // @synthesize stepHandler=_stepHandler;
@property(copy, nonatomic) CDUnknownBlockType timingFunction; // @synthesize timingFunction=_timingFunction;
- (double)duration;
- (void)onTimerFired:(double)arg1;
- (void)resume;
- (void)pause;
- (void)stopAnimation:(BOOL)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)initWithDuration:(double)arg1 name:(id)arg2;
- (id)init;
- (id)initWithDuration:(double)arg1;
- (id)initWithDuration:(double)arg1 priority:(long long)arg2 name:(id)arg3;
- (BOOL)timed;
- (void)setDuration:(double)arg1;

@end

