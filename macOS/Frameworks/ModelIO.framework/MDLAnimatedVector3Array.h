//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLAnimatedValue.h>

@class MISSING_TYPE;

@interface MDLAnimatedVector3Array : MDLAnimatedValue
{
    unsigned long long _elementCount;
}

@property(nonatomic) unsigned long long elementCount; // @synthesize elementCount=_elementCount;
- (unsigned long long)getDouble3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (void)resetWithDouble3Array:(const MISSING_TYPE **)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;
- (void)resetWithFloat3Array:(const MISSING_TYPE **)arg1 count:(unsigned long long)arg2 atTimes:(const double *)arg3 count:(unsigned long long)arg4;
- (unsigned long long)getDouble3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (unsigned long long)getFloat3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setDouble3Array:(const MISSING_TYPE **)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)setFloat3Array:(const MISSING_TYPE **)arg1 count:(unsigned long long)arg2 atTime:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (struct VtValue)defaultVtValue;
- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithElementCount:(unsigned long long)arg1;

@end

