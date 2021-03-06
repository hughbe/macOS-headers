//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIBlurmapRefinementDistanceDelta : CIFilter
{
    CIImage *inputImage;
    CIImage *inputSecondaryImage;
    NSNumber *inputThreshold;
    NSNumber *inputDistance;
    NSNumber *inputScalingFactor;
}

@property(retain) NSNumber *inputScalingFactor; // @synthesize inputScalingFactor;
@property(retain) NSNumber *inputDistance; // @synthesize inputDistance;
@property(retain) NSNumber *inputThreshold; // @synthesize inputThreshold;
@property(retain) CIImage *inputSecondaryImage; // @synthesize inputSecondaryImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

