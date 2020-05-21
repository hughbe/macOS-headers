//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray;

@interface PISelectiveColorFilter : CIFilter
{
    CIImage *_inputImage;
    NSArray *_inputCorrections;
}

+ (id)convertFromIPT:(id)arg1;
+ (id)convertToIPT:(id)arg1;
+ (id)selectiveColorKernels;
+ (double)iptHueAngleFromRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (float)hueAngleFrom:(const float *)arg1;
+ (void)iptFromLinearInto:(float *)arg1 fromRed:(float)arg2 green:(float)arg3 blue:(float)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *inputCorrections; // @synthesize inputCorrections=_inputCorrections;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;
- (id)hueSatLumTable;

@end

