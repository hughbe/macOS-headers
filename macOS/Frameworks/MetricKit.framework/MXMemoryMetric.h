//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class MXAverage, NSMeasurement;

@interface MXMemoryMetric : MXMetric
{
    NSMeasurement *_peakMemoryUsage;
    MXAverage *_averageSuspendedMemory;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) MXAverage *averageSuspendedMemory; // @synthesize averageSuspendedMemory=_averageSuspendedMemory;
@property(readonly) NSMeasurement *peakMemoryUsage; // @synthesize peakMemoryUsage=_peakMemoryUsage;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPeakMemoryUsageMeasurement:(id)arg1 averageMemoryUsageMeasurement:(id)arg2;

@end

