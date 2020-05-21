//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIPerspectiveAutoCalc.h>

@class CIImage, MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface CIPerspectiveAutoCalcV1 : CIPerspectiveAutoCalc
{
    struct float3x3 K;
    struct float3x3 invK;
    struct float3x3 T;
    struct float3x3 invT;
    CIImage *gradMap;
    unsigned long long gradMapW;
    unsigned long long gradMapH;
    MISSING_TYPE **gradMapBmp;
    unsigned long long gradMapRb;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> vLines;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> hLines;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> vLineCluster;
    struct vector<CI::Perspective::Line, std::__1::allocator<CI::Perspective::Line>> hLineCluster;
    _Bool vGuidesValid;
    _Bool hGuidesValid;
    float vGuidesAOE;
    float hGuidesAOE;
    CDStruct_ec37f00f vGuide0;
    CDStruct_ec37f00f vGuide1;
    CDStruct_ec37f00f hGuide0;
    CDStruct_ec37f00f hGuide1;
    struct PseudoRand pseudoRando;
    float rX;
    float rY;
    float rZ;
    float pitchCorrectionAreaCoverage;
    float yawCorrectionAreaCoverage;
    double minimumPitchCorrectionAreaCoverage;
    double minimumYawCorrectionAreaCoverage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) float yawCorrectionAreaCoverage; // @synthesize yawCorrectionAreaCoverage;
@property(readonly) float pitchCorrectionAreaCoverage; // @synthesize pitchCorrectionAreaCoverage;
@property double minimumYawCorrectionAreaCoverage; // @synthesize minimumYawCorrectionAreaCoverage;
@property double minimumPitchCorrectionAreaCoverage; // @synthesize minimumPitchCorrectionAreaCoverage;
- (void)computeTransform;
- (void)computeGuides;
- (void)clusterLineSegments;
- (void)extractLineSegments;
- (void)rangeLimitGradientMap;
- (void)thresholdGradientMap;
- (void)normalizeGradientMap;
- (void)createGradientMap;
- (void)standardizeImage;
- (double)confidence;
- (_Bool)compute;
- (void)dealloc;
- (id)initWithContext:(id)arg1 image:(id)arg2 config:(const CDStruct_58ac58eb *)arg3;

@end

