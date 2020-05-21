//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIFaceMaskApply : CIFilter
{
    CIImage *inputImage;
    CIImage *inputParameterImage;
    CIVector *inputFacesCenterX;
    CIVector *inputFacesCenterY;
    CIVector *inputFacesChinX;
    CIVector *inputFacesChinY;
    CIVector *inputK0;
    CIVector *inputK1;
    CIVector *inputK2;
    CIVector *inputK3;
    NSNumber *inputK4;
    NSDictionary *inputTuningParameters;
}

+ (id)_kernel;
@property(copy, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(copy, nonatomic) NSNumber *inputK4; // @synthesize inputK4;
@property(copy, nonatomic) CIVector *inputK3; // @synthesize inputK3;
@property(copy, nonatomic) CIVector *inputK2; // @synthesize inputK2;
@property(copy, nonatomic) CIVector *inputK1; // @synthesize inputK1;
@property(copy, nonatomic) CIVector *inputK0; // @synthesize inputK0;
@property(copy, nonatomic) CIVector *inputFacesChinY; // @synthesize inputFacesChinY;
@property(copy, nonatomic) CIVector *inputFacesChinX; // @synthesize inputFacesChinX;
@property(copy, nonatomic) CIVector *inputFacesCenterY; // @synthesize inputFacesCenterY;
@property(copy, nonatomic) CIVector *inputFacesCenterX; // @synthesize inputFacesCenterX;
@property(retain, nonatomic) CIImage *inputParameterImage; // @synthesize inputParameterImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

