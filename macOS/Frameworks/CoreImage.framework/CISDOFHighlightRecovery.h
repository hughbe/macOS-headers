//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CISDOFHighlightRecovery : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputScale;
    NSNumber *inputApertureScaling;
    NSNumber *inputIterations;
    NSNumber *inputMaxBlur;
    CIVector *inputBlurRadius;
    CIVector *inputMaxIntensity;
    CIVector *inputMinIntensity;
}

+ (id)customAttributes;
@property(retain) CIVector *inputMinIntensity; // @synthesize inputMinIntensity;
@property(retain) CIVector *inputMaxIntensity; // @synthesize inputMaxIntensity;
@property(retain) CIVector *inputBlurRadius; // @synthesize inputBlurRadius;
@property(retain) NSNumber *inputMaxBlur; // @synthesize inputMaxBlur;
@property(retain) NSNumber *inputIterations; // @synthesize inputIterations;
@property(retain) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

