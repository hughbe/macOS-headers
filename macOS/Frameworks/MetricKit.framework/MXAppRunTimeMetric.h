//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXAppRunTimeMetric : MXMetric
{
    NSMeasurement *_cumulativeForegroundTime;
    NSMeasurement *_cumulativeBackgroundTime;
    NSMeasurement *_cumulativeBackgroundAudioTime;
    NSMeasurement *_cumulativeBackgroundLocationTime;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) NSMeasurement *cumulativeBackgroundLocationTime; // @synthesize cumulativeBackgroundLocationTime=_cumulativeBackgroundLocationTime;
@property(readonly) NSMeasurement *cumulativeBackgroundAudioTime; // @synthesize cumulativeBackgroundAudioTime=_cumulativeBackgroundAudioTime;
@property(readonly) NSMeasurement *cumulativeBackgroundTime; // @synthesize cumulativeBackgroundTime=_cumulativeBackgroundTime;
@property(readonly) NSMeasurement *cumulativeForegroundTime; // @synthesize cumulativeForegroundTime=_cumulativeForegroundTime;
- (id)toDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCumulativeForegroundTimeMeasurement:(id)arg1 cumulativeBackgroundTimeMeasurement:(id)arg2 cumulativeBackgroundAudioTimeMeasurement:(id)arg3 cumulativeBackgroundLocationTimeMeasurement:(id)arg4;

@end

