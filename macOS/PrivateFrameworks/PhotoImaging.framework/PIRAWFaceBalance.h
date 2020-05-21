//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIRAWFaceBalance : CIFilter
{
    CIImage *_inputImage;
    double _inputOrigI;
    double _inputOrigQ;
    double _inputStrength;
    double _inputWarmth;
}

+ (struct CGColorSpace *)linearWideGamutColorSpace;
+ (id)faceBalanceKernels;
- (void).cxx_destruct;
@property(nonatomic) double inputWarmth; // @synthesize inputWarmth=_inputWarmth;
@property(nonatomic) double inputStrength; // @synthesize inputStrength=_inputStrength;
@property(nonatomic) double inputOrigQ; // @synthesize inputOrigQ=_inputOrigQ;
@property(nonatomic) double inputOrigI; // @synthesize inputOrigI=_inputOrigI;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;

@end

