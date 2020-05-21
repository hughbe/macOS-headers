//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/PVRenderJobDelegate-Protocol.h>

@class NSString, PVEffect, PVRendererBase, PVVideoCompositingContext;

@interface PVEffectPreviewRenderJobDelegate : NSObject <PVRenderJobDelegate>
{
    PVEffect *m_effect;
    CDStruct_1b6d18a9 m_time;
    struct CGImage *m_input;
    HGRef_265f9e4c m_inputHGNode;
    struct CGSize m_outputSize;
    CDUnknownBlockType m_completionHandler;
    PVRendererBase *m_pvRenderer;
    struct HGRef<HGCVBitmap> m_outputCVBitmap;
    struct PVImageProperties m_imageCreationProperties;
}

+ (unsigned int)jobTypeTag;
+ (void)cleanupCaches;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)packedFamilyCode;
- (int)renderThreadPriority;
- (int)jobPriority;
- (void)renderJobFinished:(HGRef_e03d2d21)arg1;
- (void)finishCancelledJob;
- (struct CGImage *)_makeResultImage;
- (void)finishCompletedJob;
- (void)setupDestinationBuffers:(vector_bfafc335 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
- (void)_setupInputHGNode:(const struct HGRenderContext *)arg1 frameStats:(struct FrameStats *)arg2;
- (void)buildGraph:(vector_8c7095e0 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
@property(readonly) PVVideoCompositingContext *videoCompositingContext;
@property(readonly) unsigned int jobTypeTag;
- (void)dealloc;
- (id)initWEffect:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 inputImage:(struct CGImage *)arg3 outputSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5 pvRenderer:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

