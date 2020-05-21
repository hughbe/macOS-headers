//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedQuaternion : MDLAnimatedValue
{
}

- (unsigned long long)getDoubleQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloatQuaternionArray:(struct *)arg1 maxCount:(unsigned long long)arg2;
- (void)resetWithDoubleQuaternionArray:(const struct *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloatQuaternionArray:(const struct *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (struct)doubleQuaternionAtTime:(double)arg1;
- (struct)floatQuaternionAtTime:(double)arg1;
- (void)setDoubleQuaternion:(struct)arg1 atTime:(double)arg2;
- (void)setFloatQuaternion:(struct)arg1 atTime:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (struct VtValue)defaultVtValue;
- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

