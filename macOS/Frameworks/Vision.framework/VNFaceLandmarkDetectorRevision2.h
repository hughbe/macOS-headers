//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNFaceLandmarkDetectorDNN.h>

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetectorRevision2 : VNFaceLandmarkDetectorDNN
{
}

+ (unsigned char)landmarkDetectorDNNVersion;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;

@end

