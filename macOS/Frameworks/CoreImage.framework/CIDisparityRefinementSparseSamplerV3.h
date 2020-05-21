//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinementSparseSamplerV3 : CIFilter
{
    CIImage *inputImage;
    CIImage *inputPreprocImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputScale;
}

@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputPreprocImage; // @synthesize inputPreprocImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)sampleKernel;

@end

