//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIImageProcessorKernel.h>

__attribute__((visibility("hidden")))
@interface CICoreMLProcessorImageArray : CIImageProcessorKernel
{
}

+ (int)outputFormat;
+ (int)formatForInputAtIndex:(int)arg1;
+ (BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id *)arg4;
+ (struct CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(struct CGRect)arg3;
+ (void)copyInput:(id)arg1 toBuffer:(struct __CVBuffer **)arg2 usingFormat:(unsigned int)arg3;

@end

