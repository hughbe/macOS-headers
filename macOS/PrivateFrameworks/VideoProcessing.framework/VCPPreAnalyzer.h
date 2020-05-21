//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PVSceneTaxonomy, VCPSceneProcessingImageManager;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPPreAnalyzer : NSObject
{
    VCPSceneProcessingImageManager *_imageManager;
    PVSceneTaxonomy *_sceneTaxonomy;
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    struct CF<__CVPixelBufferPool *> _pool8Y;
    struct CF<OpaqueVTPixelTransferSession *> _transferSession;
}

+ (BOOL)_enableSceneAssetConcurrency;
+ (BOOL)_allowANE;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)analyzeWithImageURL:(id)arg1 isPano:(BOOL)arg2 isSDOF:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (int)_performAnalysis:(id *)arg1 isSDOF:(BOOL)arg2 withRequestHandler:(id)arg3 andLumaPixelBuffer:(struct __CVBuffer *)arg4;
- (int)_performExposureAnalysis:(id *)arg1 withBuffer:(struct __CVBuffer *)arg2;
- (int)_performBlurAnalysis:(id *)arg1 withBuffer:(struct __CVBuffer *)arg2 andIsSDOF:(BOOL)arg3;
- (int)_performSceneAnalysis:(id *)arg1 withRequestHandler:(id)arg2;
- (int)_collectSceneAnalysisResults:(id *)arg1 withClassificationResults:(id)arg2 andJunkImageResults:(id)arg3 andAestheticsResults:(id)arg4 andSaliencyResults:(id)arg5 andSceneprintResults:(id)arg6;
- (void)_generateSceneClassifications:(id)arg1 withClassificationResults:(id)arg2 andJunkImageResults:(id)arg3;
- (int)_createAestheticsRequest:(id *)arg1 andClassificationRequest:(id *)arg2 andSceneprintRequest:(id *)arg3 andJunkImageRequest:(id *)arg4 andSaliencyImageRequest:(id *)arg5;
- (void)_configureRequest:(id)arg1 withRevision:(unsigned long long)arg2;
- (int)_loadImageURL:(id)arg1 isPano:(BOOL)arg2 withRequestHandler:(id *)arg3 andLumaPixelBuffer:(struct __CVBuffer **)arg4;
- (int)_convertFromBuffer:(struct __CVBuffer *)arg1 toLumaPixelBuffer:(struct __CVBuffer **)arg2;
- (int)_createPixelBufferPool:(struct __CVPixelBufferPool **)arg1 withPixelFormat:(unsigned int)arg2;
- (void)dealloc;
- (id)init;

@end

