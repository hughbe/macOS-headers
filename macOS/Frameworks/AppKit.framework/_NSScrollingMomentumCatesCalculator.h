//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSScrollingMomentumCalculatorBase.h>

__attribute__((visibility("hidden")))
@interface _NSScrollingMomentumCatesCalculator : _NSScrollingMomentumCalculatorBase
{
    double _durationUntilStop;
    double _durationUntilStopIgnoringRubberbanding;
    struct CGSize _absDisplacementVectorIgnoringRubberbanding;
    double _linearDisplacementIgnoringRubberbanding;
    struct CGPoint _destinationIgnoringRubberbanding;
    double _durationUntilRubberband;
    struct CGPoint _initialRubberbandingOrigin;
    struct CGPoint _initialRubberbandingVelocity;
}

- (struct CGPoint)positionAfterDuration:(double)arg1;
- (double)velocityAfterDuration:(double)arg1;
- (double)durationUntilStop;
- (void)calculateToReachDestination;
- (void)calculateDestination;

@end

