//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSValue;

@interface DGChromaticAberrationFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputRedCyan;
    NSNumber *inputBlueYellow;
    NSValue *inputExtent;
}

+ (id)filterWithName:(id)arg1;
+ (void)initialize;
- (id)outputImage;
- (struct CGRect)chromaticAberrationPostROI:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (struct CGRect)chromaticAberrationROI:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;
- (id)customAttributes;

@end

