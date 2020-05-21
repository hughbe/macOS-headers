//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface WhiteboardFilter : CIFilter
{
    CIImage *_inputImage;
    NSNumber *_stride;
}

+ (id)customAttributes;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *stride; // @synthesize stride=_stride;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;
- (id)whiteboardFilterKernel;

@end

