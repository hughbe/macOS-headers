//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDevice, MTLFunction, MTLLibrary;

@interface MetalRANSACDispatcher : NSObject
{
    float inlierLimit;
    id <MTLCommandQueue> m_metalCommandQueue;
    id <MTLDevice> m_metalDevice;
    id <MTLFunction> m_metalKernelFunction;
    id <MTLLibrary> m_metalLibrary;
    id <MTLComputePipelineState> m_metalPipeline;
    unsigned long long _m_numThreadsPerGroup;
    unsigned long long _m_maxCorrespondences;
    id <MTLBuffer> _m_mX;
    id <MTLBuffer> _m_mXhat;
    id <MTLBuffer> _m_ScoreBuffer;
    id <MTLBuffer> _m_RansacParams;
    id <MTLBuffer> _m_RansacHomographies;
    id <MTLBuffer> _m_ModelScores;
    struct CGSize frameSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <MTLBuffer> m_ModelScores; // @synthesize m_ModelScores=_m_ModelScores;
@property(retain, nonatomic) id <MTLBuffer> m_RansacHomographies; // @synthesize m_RansacHomographies=_m_RansacHomographies;
@property(retain, nonatomic) id <MTLBuffer> m_RansacParams; // @synthesize m_RansacParams=_m_RansacParams;
@property(retain, nonatomic) id <MTLBuffer> m_ScoreBuffer; // @synthesize m_ScoreBuffer=_m_ScoreBuffer;
@property(retain, nonatomic) id <MTLBuffer> m_mXhat; // @synthesize m_mXhat=_m_mXhat;
@property(retain, nonatomic) id <MTLBuffer> m_mX; // @synthesize m_mX=_m_mX;
@property(nonatomic) unsigned long long m_maxCorrespondences; // @synthesize m_maxCorrespondences=_m_maxCorrespondences;
@property(nonatomic) unsigned long long m_numThreadsPerGroup; // @synthesize m_numThreadsPerGroup=_m_numThreadsPerGroup;
@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize;
@property(nonatomic) float inlierLimit; // @synthesize inlierLimit;
@property(retain, nonatomic) id <MTLComputePipelineState> m_metalPipeline; // @synthesize m_metalPipeline;
@property(retain, nonatomic) id <MTLLibrary> m_metalLibrary; // @synthesize m_metalLibrary;
@property(retain, nonatomic) id <MTLFunction> m_metalKernelFunction; // @synthesize m_metalKernelFunction;
@property(retain, nonatomic) id <MTLDevice> m_metalDevice; // @synthesize m_metalDevice;
@property(retain, nonatomic) id <MTLCommandQueue> m_metalCommandQueue; // @synthesize m_metalCommandQueue;
- (void)assureSizeAndCopyToMetalBuffer:(id *)arg1 fromData:(const void *)arg2 dataSize:(unsigned long long)arg3 metalResourceOptions:(unsigned long long)arg4;
- (void)performRansacOnData:(unsigned int)arg1 firstPointSet:(const float *)arg2 secondPointSet:(const float *)arg3 pointWeights:(const float *)arg4 homographies:(const struct ransac_homography_record *)arg5 numHomographies:(unsigned int)arg6 homScores:(float *)arg7;
- (id)initWithMaxCorrespondences:(unsigned long long)arg1;

@end

