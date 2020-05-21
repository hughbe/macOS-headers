//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface DGSkinSmoothingFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputRadius;
    NSNumber *inputEdgeDetail;
    NSNumber *inputIntensity;
    NSNumber *inputVersion;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (id)outputImage;
- (id)customAttributes;

@end

