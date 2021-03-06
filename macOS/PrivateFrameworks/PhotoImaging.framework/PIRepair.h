//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIRepair : CIFilter
{
    BOOL _inputRepairEdges;
    CIImage *_inputImage;
    CIImage *_inputMaskImage;
    double _inputStrokeRadius;
    struct CGPoint _inputOffset;
}

- (void).cxx_destruct;
@property BOOL inputRepairEdges; // @synthesize inputRepairEdges=_inputRepairEdges;
@property struct CGPoint inputOffset; // @synthesize inputOffset=_inputOffset;
@property double inputStrokeRadius; // @synthesize inputStrokeRadius=_inputStrokeRadius;
@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage=_inputMaskImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (id)outputImage;
- (id)_applyToImage:(id)arg1 maskImage:(id)arg2 strokeRadius:(double)arg3 inputOffset:(struct CGPoint)arg4 repairEdges:(BOOL)arg5;

@end

