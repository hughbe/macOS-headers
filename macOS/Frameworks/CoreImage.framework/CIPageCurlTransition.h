//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPageCurlTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    CIImage *inputBacksideImage;
    CIImage *inputShadingImage;
    CIVector *inputExtent;
    NSNumber *inputTime;
    NSNumber *inputAngle;
    NSNumber *inputRadius;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CIPageCurlTransNoEmap;
- (id)_CIPageCurlTransition;

@end

