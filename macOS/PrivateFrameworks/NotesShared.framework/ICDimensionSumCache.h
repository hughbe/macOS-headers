//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDimensionSumCache : NSObject
{
    double _sum;
    double _estimateDimension;
    NSMutableDictionary *_dimensions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *dimensions; // @synthesize dimensions=_dimensions;
@property(readonly, nonatomic) double estimateDimension; // @synthesize estimateDimension=_estimateDimension;
@property(nonatomic) double sum; // @synthesize sum=_sum;
- (void)removeDimensionForKey:(id)arg1;
- (void)setDimension:(double)arg1 forKey:(id)arg2;
- (double)dimensionForKey:(id)arg1;
- (id)initWithKeys:(id)arg1 andEstimateDimension:(double)arg2;
- (id)init;
@property(readonly, nonatomic) unsigned long long count;

@end

