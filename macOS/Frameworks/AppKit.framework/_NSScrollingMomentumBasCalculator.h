//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSScrollingMomentumCalculatorBase.h>

__attribute__((visibility("hidden")))
@interface _NSScrollingMomentumBasCalculator : _NSScrollingMomentumCalculatorBase
{
    double _decelerationFactorX;
    double _decelerationFactorY;
    double _decelerationLnFactorX;
    double _decelerationLnFactorY;
    double _durationUntilStop;
    double _minXOffset;
    double _maxXOffset;
    double _minYOffset;
    double _maxYOffset;
    long long _lastRequestedDuration;
    struct CGPoint _offsetAtLastRequestedDuration;
    double _velocityAtLastRequestedDuration;
}

- (struct CGPoint)positionAfterDuration:(double)arg1;
- (double)velocityAfterDuration:(double)arg1;
- (void)_cacheResultsForDurationInMs:(long long)arg1;
- (double)durationUntilStop;
- (void)calculateToReachDestination;
- (void)calculateDestination;
- (id)init;

@end

