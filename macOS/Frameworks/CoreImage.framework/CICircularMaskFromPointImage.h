//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICircularMaskFromPointImage : CIFilter
{
    CIImage *inputImage;
    CIImage *inputCoordinate;
    NSNumber *inputInnerRadius;
    NSNumber *inputOuterRadius;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputOuterRadius; // @synthesize inputOuterRadius;
@property(copy, nonatomic) NSNumber *inputInnerRadius; // @synthesize inputInnerRadius;
@property(retain, nonatomic) CIImage *inputCoordinate; // @synthesize inputCoordinate;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelDraw;

@end

