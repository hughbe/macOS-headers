//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNFaceDetector.h>

@class VNFaceBBoxAligner;

__attribute__((visibility("hidden")))
@interface VNFaceDetectorRevision1 : VNFaceDetector
{
    struct shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector> _faceDetector;
    VNFaceBBoxAligner *_faceBBoxAligner;
}

+ (id)configurationOptionKeysForDetectorKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)purgeIntermediates;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;

@end

