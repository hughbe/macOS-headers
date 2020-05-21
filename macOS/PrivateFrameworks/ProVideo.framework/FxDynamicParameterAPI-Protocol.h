//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSError, NSString;

@protocol FxDynamicParameterAPI
- (NSError *)setAsDefaultsAtTime:(double)arg1;
- (NSError *)setPopupMenuParameter:(unsigned int)arg1 entries:(NSArray *)arg2 defaultValue:(unsigned int)arg3;
- (NSError *)setParameter:(unsigned int)arg1 intMinimum:(int)arg2 maximum:(int)arg3 sliderMinimum:(int)arg4 sliderMaximum:(int)arg5;
- (NSError *)parameter:(unsigned int)arg1 intMinimum:(int *)arg2 maximum:(int *)arg3 sliderMinimum:(int *)arg4 sliderMaximum:(int *)arg5;
- (NSError *)setParameter:(unsigned int)arg1 floatMinimum:(double)arg2 maximum:(double)arg3 sliderMinimum:(double)arg4 sliderMaximum:(double)arg5;
- (NSError *)parameter:(unsigned int)arg1 floatMinimum:(double *)arg2 maximum:(double *)arg3 sliderMinimum:(double *)arg4 sliderMaximum:(double *)arg5;
- (NSError *)setParameter:(unsigned int)arg1 name:(NSString *)arg2;
- (NSError *)parameter:(unsigned int)arg1 name:(id *)arg2;
- (NSError *)removeParameter:(unsigned int)arg1;
- (unsigned int)parameterIDAtIndex:(unsigned int)arg1;
- (unsigned int)parameterCount;
@end

