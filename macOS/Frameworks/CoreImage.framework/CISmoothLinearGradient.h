//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector;

__attribute__((visibility("hidden")))
@interface CISmoothLinearGradient : CIFilter
{
    CIVector *inputPoint0;
    CIVector *inputPoint1;
    CIColor *inputColor0;
    CIColor *inputColor1;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property(retain, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(retain, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
- (id)outputImage;
- (id)_kernel;

@end

