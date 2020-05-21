//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNGenerateObjectnessBasedSaliencyDetector : VNEspressoModelFileBasedDetector
{
}

+ (id)configurationOptionKeysForDetectorKey;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (BOOL)supportsProcessingDevice:(id)arg1;
- (id)_observationsForImageIn32BGRAPixelBuffer:(struct __CVBuffer *)arg1 withOptions:(id)arg2 originalImageSize:(struct CGSize)arg3 regionOfInterest:(struct CGRect)arg4 warningRecorder:(id)arg5 error:(id *)arg6;

@end

