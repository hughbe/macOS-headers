//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDTrendlineLabel, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTrendline : NSObject
{
    _Bool mDisplayEquation;
    _Bool mDisplayRSquaredValue;
    double mBackward;
    double mForward;
    double mInterceptYAxis;
    int mPolynomialOrder;
    long long mMovingAveragePeriod;
    int mType;
    OADGraphicProperties *mGraphicProperties;
    CHDTrendlineLabel *mLabel;
    EDString *mName;
}

+ (id)trendline;
- (void).cxx_destruct;
- (id)description;
- (id)defaultNameWithSeriesName:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setType:(int)arg1;
- (int)type;
- (void)setMovingAveragePeriod:(long long)arg1;
- (long long)movingAveragePeriod;
- (void)setPolynomialOrder:(int)arg1;
- (int)polynomialOrder;
- (void)setInterceptYAxis:(double)arg1;
- (double)interceptYAxis;
- (void)setForward:(double)arg1;
- (double)forward;
- (void)setBackward:(double)arg1;
- (double)backward;
- (void)setDisplayRSquaredValue:(_Bool)arg1;
- (_Bool)isDisplayRSquaredValue;
- (void)setDisplayEquation:(_Bool)arg1;
- (_Bool)isDisplayEquation;
- (id)init;

@end

