//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PIDefinitionFilter : CIFilter
{
    CIImage *_inputImage;
    CIImage *_inputBlurImage;
    NSNumber *_inputIntensity;
}

+ (id)definitionKernel;
- (void).cxx_destruct;
@property(retain) NSNumber *inputIntensity; // @synthesize inputIntensity=_inputIntensity;
@property(retain) CIImage *inputBlurImage; // @synthesize inputBlurImage=_inputBlurImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;

@end

