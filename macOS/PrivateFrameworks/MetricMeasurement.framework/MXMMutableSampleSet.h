//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricMeasurement/MXMSampleSet.h>

@interface MXMMutableSampleSet : MXMSampleSet
{
}

- (void)appendFloatValue:(float)arg1 timestamp:(unsigned long long)arg2;
- (void)appendDoubleValue:(double)arg1 timestamp:(unsigned long long)arg2;
- (void)appendUnsignedIntegerValue:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)appendUnsignedIntValue:(unsigned int)arg1 timestamp:(unsigned long long)arg2;
- (void)appendIntegerValue:(long long)arg1 timestamp:(unsigned long long)arg2;
- (void)appendIntValue:(int)arg1 timestamp:(unsigned long long)arg2;
- (void)appendAttribute:(id)arg1;
- (void)appendSample:(id)arg1;
- (void)appendSet:(id)arg1;

@end

