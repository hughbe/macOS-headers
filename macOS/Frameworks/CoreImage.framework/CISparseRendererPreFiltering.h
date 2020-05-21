//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CISparseRendererPreFiltering : CIFilter
{
    CIImage *inputImage;
    NSDictionary *inputTuningParameters;
    NSNumber *inputApertureScaling;
    NSNumber *inputScale;
}

@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(copy) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (void)dumpImage:(id)arg1 extent:(struct CGRect)arg2 prefixFilename:(id)arg3;
- (id)outputImage:(id)arg1 horizontal:(BOOL)arg2 width:(double)arg3;
- (id)_kernel:(BOOL)arg1;

@end

