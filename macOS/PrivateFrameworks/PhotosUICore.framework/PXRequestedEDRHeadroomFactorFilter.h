//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXNumberFilter.h>

@interface PXRequestedEDRHeadroomFactorFilter : PXNumberFilter
{
    double _sustainDuration;
    double _highValue;
    double _lastDecreaseTime;
}

@property(nonatomic) double lastDecreaseTime; // @synthesize lastDecreaseTime=_lastDecreaseTime;
@property(nonatomic) double highValue; // @synthesize highValue=_highValue;
@property(nonatomic) double sustainDuration; // @synthesize sustainDuration=_sustainDuration;
@property(readonly, nonatomic, getter=isPaused) BOOL paused;
- (double)updatedOutput;
- (void)setInput:(double)arg1;
- (id)initWithInput:(double)arg1;

@end

