//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMCaptureManagerVideoFrameObserver-Protocol.h>

@class AXMCaptureManager, AXMFaceDetectorNode, AXMImageNode, AXMSceneDetectorNode, AXMVisionAnalysisOptions, AXMVisionEngine, NSString;

@interface _AXMCaptureManagerDetectionEngine : NSObject <AXMCaptureManagerVideoFrameObserver>
{
    AXMCaptureManager *_captureManager;
    AXMVisionEngine *_visionEngine;
    AXMImageNode *_imageNode;
    AXMSceneDetectorNode *_sceneDetector;
    AXMFaceDetectorNode *_faceDetector;
    AXMVisionAnalysisOptions *_analysisOptions;
}

- (void).cxx_destruct;
- (void)captureManager:(id)arg1 didOutputPixelBuffer:(struct __CVBuffer *)arg2;
- (id)initWithCaptureManager:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

