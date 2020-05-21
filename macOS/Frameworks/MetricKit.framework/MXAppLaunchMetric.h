//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXAppLaunchMetric : MXMetric
{
    MXHistogram *_histogrammedTimeToFirstDraw;
    MXHistogram *_histogrammedApplicationResumeTime;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) MXHistogram *histogrammedApplicationResumeTime; // @synthesize histogrammedApplicationResumeTime=_histogrammedApplicationResumeTime;
@property(readonly) MXHistogram *histogrammedTimeToFirstDraw; // @synthesize histogrammedTimeToFirstDraw=_histogrammedTimeToFirstDraw;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2;

@end

