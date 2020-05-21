//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICMYKHalftone : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputWidth;
    NSNumber *inputAngle;
    NSNumber *inputSharpness;
    NSNumber *inputGCR;
    NSNumber *inputUCR;
}

+ (id)customAttributes;
- (id)outputImage;
- (id)_CICMYK_black;
- (id)_CICMYK_yellow;
- (id)_CICMYK_magenta;
- (id)_CICMYK_cyan;
- (id)_CICMYK_convert;
- (id)_CIWhite;

@end

