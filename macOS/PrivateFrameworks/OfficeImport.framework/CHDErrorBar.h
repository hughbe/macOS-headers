//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CHDChart, CHDData, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDErrorBar : NSObject
{
    CHDChart *mChart;
    double mValue;
    int mType;
    int mValueType;
    int mDirection;
    _Bool mNoEndCap;
    CHDData *mMinusValues;
    CHDData *mPlusValues;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)errorBarWithChart:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setPlusValues:(id)arg1;
- (id)plusValues;
- (void)setMinusValues:(id)arg1;
- (id)minusValues;
- (void)setNoEndCap:(_Bool)arg1;
- (_Bool)isNoEndCap;
- (void)setDirection:(int)arg1;
- (int)direction;
- (void)setValueType:(int)arg1;
- (int)valueType;
- (void)setType:(int)arg1;
- (int)type;
- (void)setValue:(double)arg1;
- (double)value;
- (id)initWithChart:(id)arg1;

@end

