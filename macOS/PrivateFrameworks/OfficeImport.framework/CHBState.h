//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDChart;

__attribute__((visibility("hidden")))
@interface CHBState : NSObject
{
    CHDChart *mChart;
    struct __CFArray *mXlChartDataSeriesCollection;
    int mXlSeriesCount;
    int mXlCurrentSeriesIndex;
    _Bool mHasPrimaryMixedArea;
    _Bool mHasPrimaryMixedColumn;
    _Bool mHasPrimaryMixedLine;
    _Bool mHasSecondaryMixedArea;
    _Bool mHasSecondaryMixedColumn;
    _Bool mHasSecondaryMixedLine;
}

- (void).cxx_destruct;
- (unsigned int)chartGroupIndexForType:(int)arg1 isForPrimary:(_Bool)arg2;
- (_Bool)isMixedChart;
- (void)setHasSecondaryMixedLine:(_Bool)arg1;
- (_Bool)hasSecondaryMixedLine;
- (void)setHasSecondaryMixedColumn:(_Bool)arg1;
- (_Bool)hasSecondaryMixedColumn;
- (void)setHasSecondaryMixedArea:(_Bool)arg1;
- (_Bool)hasSecondaryMixedArea;
- (void)setHasPrimaryMixedLine:(_Bool)arg1;
- (_Bool)hasPrimaryMixedLine;
- (void)setHasPrimaryMixedColumn:(_Bool)arg1;
- (_Bool)hasPrimaryMixedColumn;
- (void)setHasPrimaryMixedArea:(_Bool)arg1;
- (_Bool)hasPrimaryMixedArea;
- (void)deleteXlChartDataSeriesCollection;
- (void)readAndCacheXlChartDataSeries;
- (int)xlSeriesCount;
- (int)xlCurrentChartDataSeriesIndex;
- (struct XlChartDataSeries *)xlCurrentChartDataSeries;
- (void)setXlCurrentSeriesIndex:(int)arg1;
- (struct XlChartDataSeries *)xlChartDataSeriesAtIndex:(int)arg1;
- (id)resources;
- (id)workbook;
- (void)setChart:(id)arg1;
- (id)chart;
- (void)dealloc;
- (id)init;

@end

