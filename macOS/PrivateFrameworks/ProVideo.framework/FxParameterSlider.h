//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProVideo/FxPinParameter.h>

@interface FxParameterSlider : FxPinParameter
{
    struct FxParameterSliderPriv *_sliderPriv;
}

- (void)setIsLogarithmic:(BOOL)arg1;
- (BOOL)isLogarithmic;
- (void)setMaxSliderValue:(double)arg1;
- (double)maxSliderValue;
- (void)setMinSliderValue:(double)arg1;
- (double)minSliderValue;
- (void)setStepValue:(double)arg1;
- (double)stepValue;
- (void)setMaxValue:(double)arg1;
- (double)maxValue;
- (void)setMinValue:(double)arg1;
- (double)minValue;
- (void)dealloc;
- (id)init;

@end

