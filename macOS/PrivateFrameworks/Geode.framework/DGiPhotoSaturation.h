//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface DGiPhotoSaturation : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSaturation;
    NSNumber *inputAlgorithm;
}

+ (void)initialize;
- (id)customAttributes;
- (id)outputImage;

@end

