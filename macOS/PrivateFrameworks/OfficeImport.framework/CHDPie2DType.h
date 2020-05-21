//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CHDChartType.h>

__attribute__((visibility("hidden")))
@interface CHDPie2DType : CHDChartType
{
    int mFirstSliceAngle;
    _Bool mDoughnutType;
    _Bool mPieOfPieType;
    _Bool mBarOfPieType;
}

- (_Bool)hasExplosion;
- (id)contentFormat;
- (int)defaultLabelPosition;
- (void)setBarOfPieType:(_Bool)arg1;
- (_Bool)isBarOfPieType;
- (void)setPieOfPieType:(_Bool)arg1;
- (_Bool)isPieOfPieType;
- (void)setDoughnutType:(_Bool)arg1;
- (_Bool)isDoughnutType;
- (void)setFirstSliceAngle:(int)arg1;
- (int)firstSliceAngle;
- (id)initWithChart:(id)arg1;

@end

