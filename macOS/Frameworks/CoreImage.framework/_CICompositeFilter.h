//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface _CICompositeFilter : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
}

+ (id)customAttributes;
+ (id)_kernel;
@property(retain, nonatomic) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

