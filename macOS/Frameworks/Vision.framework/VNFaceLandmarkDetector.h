//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

#import <Vision/VNDetectorKeyProviding-Protocol.h>

@class NSString;
@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceLandmarkDetector : VNEspressoModelFileBasedDetector <VNDetectorKeyProviding>
{
    struct shared_ptr<vision::mod::LandmarkAttributes> _faceAttributesPupilRefiner;
    id <VNModelFile> mLandmarkRefinerModelFileHandle;
    BOOL modelFilesWereMemmapped;
}

+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;
+ (struct _Geometry2D_point2D_)computeCentroidUsingPoints:(const struct _Geometry2D_point2D_ *)arg1 indicies:(const int *)arg2 numberOfIndicies:(int)arg3;
+ (const struct _LandmarkDetector_faceMeshParts_ *)landmarksMeshPartsForConstellation:(unsigned long long)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)detectBlinkOnFaceImage:(const struct vImage_Buffer *)arg1 faceObservation:(id)arg2 lumaRec2DInImageCoordinates:(struct _Geometry2D_rect2D_ *)arg3 landmarks:(const void *)arg4 warningRecorder:(id)arg5 error:(id *)arg6;
- (struct CGRect)normalizedFaceBBoxForLandmarks:(id)arg1;
- (BOOL)postprocessLandmarkResultsForLandmarks:(const vector_f48c7054 *)arg1 imageBuffer:(id)arg2 outputFace:(id)arg3 options:(id)arg4 warningRecorder:(id)arg5 error:(id *)arg6;
- (id)computeLandmarksScoreOnImage:(const struct vImage_Buffer *)arg1 withFaceBoundingBox:(const struct _Geometry2D_rect2D_ *)arg2 andLandmarks:(const void *)arg3 error:(id *)arg4;
- (void)calculatePupilLocationAndUpdateLandmarkPoints:(vector_f48c7054 *)arg1;
- (struct __CVBuffer *)createLumaPixelBufferFrom:(id)arg1 forFaceBBox:(struct _Geometry2D_rect2D_)arg2 initializeVImage:(struct vImage_Buffer *)arg3 initializeRect2D:(struct _Geometry2D_rect2D_ *)arg4 initializeIgnoreCropAndScaleFlag:(char *)arg5 initializeLumaScaleFromOriginal:(float *)arg6 options:(id)arg7 error:(id *)arg8;
- (void)dealloc;
- (BOOL)loadRefinersAndReturnError:(id *)arg1;
- (BOOL)completeInitializationAndReturnError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

