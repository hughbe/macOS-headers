//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class CIImage, VNImageHomographicAlignmentObservation;

@interface PILongExposureRegistrationJob : NURenderJob
{
    CIImage *_stillImage;
    VNImageHomographicAlignmentObservation *_observation;
    CDStruct_996ac03c _guideExtent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VNImageHomographicAlignmentObservation *observation; // @synthesize observation=_observation;
@property(retain, nonatomic) CIImage *stillImage; // @synthesize stillImage=_stillImage;
@property(nonatomic) CDStruct_996ac03c guideExtent; // @synthesize guideExtent=_guideExtent;
- (id)result;
- (BOOL)render:(out id *)arg1;
- (BOOL)prepare:(out id *)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)registrationRequest;
- (id)scalePolicy;
- (BOOL)wantsRenderScaleClampedToNativeScale;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputImage;
- (BOOL)wantsOutputGeometry;

@end

