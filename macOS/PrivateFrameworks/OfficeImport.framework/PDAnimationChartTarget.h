//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDAnimationShapeTarget.h>

__attribute__((visibility("hidden")))
@interface PDAnimationChartTarget : PDAnimationShapeTarget
{
    BOOL mHasCatagoryIndex;
    int mCatagoryIndex;
    BOOL mHasSeriesIndex;
    int mSeriesIndex;
    BOOL mHasBuildStep;
    int mBuildStep;
    int mChartSubElementType;
}

- (void)setChartSubElementType:(int)arg1;
- (int)chartSubElementType;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setBuildStep:(int)arg1;
- (int)buildStep;
- (BOOL)hasBuildStep;
- (void)setSeriesIndex:(int)arg1;
- (int)seriesIndex;
- (BOOL)hasSeriesIndex;
- (void)setCatagoryIndex:(int)arg1;
- (int)catagoryIndex;
- (BOOL)hasCatagoryIndex;
- (id)init;

@end

