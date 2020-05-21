//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIKeystoneCorrection : CIFilter
{
    struct float3x3 K;
    struct float3x3 invK;
    float pitch;
    float yaw;
    float roll;
    CIImage *inputImage;
    NSNumber *inputFocalLength;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
}

+ (id)customAttributes;
- (id).cxx_construct;
@property(copy, nonatomic) CIVector *inputBottomLeft; // @synthesize inputBottomLeft;
@property(copy, nonatomic) CIVector *inputBottomRight; // @synthesize inputBottomRight;
@property(copy, nonatomic) CIVector *inputTopRight; // @synthesize inputTopRight;
@property(copy, nonatomic) CIVector *inputTopLeft; // @synthesize inputTopLeft;
@property(copy, nonatomic) NSNumber *inputFocalLength; // @synthesize inputFocalLength;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
@property(readonly, nonatomic) CIFilter *outputRotationFilter;
@property(readonly, nonatomic) CDStruct_d80e62f2 outputTransform;
- (void)computeRotation;
- (void)computeCameraIntrinsics;

@end

