//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISpotColor : CIFilter
{
    CIImage *inputImage;
    CIColor *inputCenterColor1;
    CIColor *inputReplacementColor1;
    NSNumber *inputCloseness1;
    NSNumber *inputContrast1;
    CIColor *inputCenterColor2;
    CIColor *inputReplacementColor2;
    NSNumber *inputCloseness2;
    NSNumber *inputContrast2;
    CIColor *inputCenterColor3;
    CIColor *inputReplacementColor3;
    NSNumber *inputCloseness3;
    NSNumber *inputContrast3;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CISpotColor;

@end

