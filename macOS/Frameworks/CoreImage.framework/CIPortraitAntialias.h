//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitAntialias : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputMaxBlurInPixels;
    NSNumber *inputAntiAliasRadius;
    NSNumber *inputLumaNoiseAmpl;
    NSNumber *inputLumaNoiseModelCoeff;
    NSNumber *inputScale;
    CIVector *inputRect;
    CIVector *inputSensorSize;
}

@property(copy, nonatomic) CIVector *inputSensorSize; // @synthesize inputSensorSize;
@property(copy, nonatomic) CIVector *inputRect; // @synthesize inputRect;
@property(copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff; // @synthesize inputLumaNoiseModelCoeff;
@property(copy, nonatomic) NSNumber *inputLumaNoiseAmpl; // @synthesize inputLumaNoiseAmpl;
@property(copy, nonatomic) NSNumber *inputAntiAliasRadius; // @synthesize inputAntiAliasRadius;
@property(copy, nonatomic) NSNumber *inputMaxBlurInPixels; // @synthesize inputMaxBlurInPixels;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)outputImage:(id)arg1 horizontal:(BOOL)arg2;
- (id)noiseColorKernel;
- (id)_noiseGeneratorKernel;
- (id)_kernel:(BOOL)arg1 withAddedNoise:(BOOL)arg2;

@end

