//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIStretch : CIFilter
{
    CIImage *inputImage;
    CIVector *inputPoint;
    CIVector *inputSize;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputSize; // @synthesize inputSize;
@property(retain, nonatomic) CIVector *inputPoint; // @synthesize inputPoint;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (struct CGRect)computeDOD:(struct vec4)arg1;
- (id)_kernel;
- (void)setDefaults;

@end

