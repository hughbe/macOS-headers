//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/PVRenderJobDelegate-Protocol.h>

@class NSString, PVRenderRequest, PVRenderer, PVVideoCompositingContext;

@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate>
{
    PVRenderer *m_pvRenderer;
    PVRenderRequest *m_request;
    HGRef_9706a068 m_renderManager;
    CDUnknownBlockType m_completionHandler;
    vector_bfafc335 *m_destinationBitmaps;
}

+ (unsigned int)jobTypeTag;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)packedFamilyCode;
- (int)renderContextPriority;
- (int)renderThreadPriority;
- (int)graphBuildThreadPriority;
- (int)jobPriority;
- (void)renderJobFinished:(HGRef_e03d2d21)arg1;
- (void)finishCancelledJob;
- (void)finishCompletedJob;
- (void)setupDestinationBuffers:(vector_bfafc335 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
- (void)buildGraph:(vector_8c7095e0 *)arg1 renderContext:(const struct HGRenderContext *)arg2 frameStats:(struct FrameStats *)arg3;
@property(readonly) PVVideoCompositingContext *videoCompositingContext;
@property(readonly) unsigned int jobTypeTag;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 pvRenderer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

