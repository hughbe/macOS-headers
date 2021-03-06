//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CIMorphologyProcessor : CIImageProcessorKernel
{
}

+ (id)applyBoxToImage:(id)arg1 width:(int)arg2 height:(int)arg3 doMin:(_Bool)arg4;
+ (BOOL)allowSRGBTranferFuntionOnOutput;
+ (BOOL)allowSRGBTranferFuntionOnInputAtIndex:(int)arg1;
+ (int)formatForInputAtIndex:(int)arg1;
+ (_Bool)canReduceOutputChannels;
+ (int)outputFormat;
+ (_Bool)synchronizeInputs;
+ (BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;

@end

