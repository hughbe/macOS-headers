//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISkyAndGrassAdjust : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSkyAmount;
    NSNumber *inputGrassAmount;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputGrassAmount; // @synthesize inputGrassAmount;
@property(retain, nonatomic) NSNumber *inputSkyAmount; // @synthesize inputSkyAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

