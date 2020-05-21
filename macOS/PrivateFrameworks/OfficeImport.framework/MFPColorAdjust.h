//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, OITSUColor;

__attribute__((visibility("hidden")))
@interface MFPColorAdjust : NSObject
{
    struct MFPColorMatrix *mColorMatrix;
    struct MFPColorMatrix *mGrayMatrix;
    int mColorMatrixFlags;
    OITSUColor *mTransparentRangeLow;
    OITSUColor *mTransparentRangeHigh;
    float mGamma;
    NSDictionary *mRecolorMap;
    float mThreshold;
    BOOL mEnabled;
}

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setThreshold:(float)arg1;
- (float)threshold;
- (void)setRecolorMap:(id)arg1;
- (id)recolorMap;
- (void)setGamma:(float)arg1;
- (float)gamma;
- (void)setTransparentLow:(id)arg1 high:(id)arg2;
- (id)transparentHigh;
- (id)transparentLow;
- (void)setColorMatrixFlags:(int)arg1;
- (int)colorMatrixFlags;
- (void)setGrayMatrix:(struct MFPColorMatrix *)arg1;
- (struct MFPColorMatrix *)grayMatrix;
- (void)setColorMatrix:(struct MFPColorMatrix *)arg1;
- (struct MFPColorMatrix *)colorMatrix;
- (void)dealloc;
- (id)init;

@end

