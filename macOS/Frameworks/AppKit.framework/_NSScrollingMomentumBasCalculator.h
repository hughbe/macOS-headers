//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
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
- (void)setVerticalScrollDecelerationFactor:(double)arg1;
- (double)verticalScrollDecelerationFactor;
- (void)setHorizontalScrollDecelerationFactor:(double)arg1;
- (double)horizontalScrollDecelerationFactor;
- (double)decelerationRate;
- (id)init;

@end

