//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIKaleidoscope : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputCount;
    CIVector *inputCenter;
    NSNumber *inputAngle;
}

+ (id)customAttributes;
- (id)outputImage;
- (struct CGRect)_outputExtent;
- (id)_kernel;

@end

