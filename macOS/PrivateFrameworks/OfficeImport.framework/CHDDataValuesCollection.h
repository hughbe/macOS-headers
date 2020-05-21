//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : NSObject
{
    struct __CFData *mPackedValues;
    unsigned long long mDataValueCount;
    struct __CFDictionary *mIndexToDataValueMap;
    _Bool mContainsStringValue;
}

- (id)description;
- (_Bool)containsStringValue;
- (void)finishReading;
- (unsigned long long)maxDataPointIndex;
- (id)dataValueWithIndex:(unsigned long long)arg1;
- (id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2;
- (id)dataValueAtIndex:(unsigned long long)arg1;
- (struct CHDDataPoint *)dataPointWithIndex:(unsigned long long)arg1;
- (struct CHDDataPoint *)dataPointAtIndex:(unsigned long long)arg1;
- (_Bool)addDataValue:(id)arg1;
- (_Bool)addDataPoint:(struct CHDDataPoint *)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)resetWithDataPointCount:(unsigned long long)arg1;
- (id)initWithDataPointCount:(unsigned long long)arg1;
- (id)init;
- (void)cleanup;
- (void)setupBufferForValues:(unsigned long long)arg1;

@end

