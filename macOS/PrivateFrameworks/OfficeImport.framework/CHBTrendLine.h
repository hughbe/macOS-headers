//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBTrendLine : NSObject
{
}

+ (void)readFrom:(struct XlChartTrendLine *)arg1 toSeries:(id)arg2 state:(id)arg3;
+ (id)readTrendlineGraphicProperties:(const struct XlChartSeriesFormat *)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;
+ (int)xlTrendLineRegressionTypeFrom:(int)arg1;
+ (int)edTrendLineTypeFrom:(int)arg1 order:(int)arg2;

@end

