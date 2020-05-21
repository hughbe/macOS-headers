//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCNMTLComputePipeline, SCNMTLResourceManager;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLMorph : NSObject
{
    SCNMTLResourceManager *_resourceManager;
    CDStruct_798fd7c0 _baseBuffer;
    unsigned int _baseVertexCount;
    short _baseBufferTypes[3];
    unsigned int _baseBufferTypesCount;
    unsigned int _baseBufferStride;
    short _targetBufferTypes[3];
    unsigned int _targetBufferTypesCount;
    unsigned int _targetBufferStride;
    unsigned int _dstSemanticUsageMask;
    unsigned int _srcSemanticUsageMask;
    struct SCNMTLBufferPool *_bufferPool;
    BOOL _unifyPostMorphNormals;
    BOOL _shouldMorphNormals;
    unsigned char _dataKindForMorphing;
    id <MTLBuffer> _splatProvokingVertices;
    struct {
        id <MTLBuffer> perVertexTrianglesOffsets;
        id <MTLBuffer> perVertexTrianglesIndices;
        char sharedTriangleIs16Bits;
    } _postUnifyInfo;
    struct Target *_targets;
    unsigned long long _targetCount;
    NSArray *_originalTargets;
    SCNMTLComputePipeline *_copyCPS;
    SCNMTLComputePipeline *_blendCPS;
    SCNMTLComputePipeline *_blendSparseCPS;
    SCNMTLComputePipeline *_splatCPS;
}

- (void)morphSparseMesh:(id)arg1 morpher:(struct __C3DMorpher *)arg2 renderContext:(id)arg3;
- (void)unifyMesh:(id)arg1 renderContext:(id)arg2;
- (void)morphIncrementalMesh:(id)arg1 morpher:(struct __C3DMorpher *)arg2 renderContext:(id)arg3;
- (void)morphMesh:(id)arg1 morph:(struct __C3DMorph *)arg2 renderContext:(id)arg3;
- (BOOL)isCompatibleWithMorph:(struct __C3DMorph *)arg1;
- (unsigned int)sparseIndexSize;
- (void)dealloc;
- (CDStruct_798fd7c0)newBufferWithLength:(unsigned long long)arg1;
- (id)initWithMorph:(struct __C3DMorph *)arg1 baseGeometry:(struct __C3DGeometry *)arg2 resourceManager:(id)arg3;
- (void)_prepareTargetDataForIndex:(long long)arg1 morph:(struct __C3DMorph *)arg2 baseMesh:(struct __C3DMesh *)arg3;
- (void)_writeSources:(const struct __C3DMeshSource **)arg1 dstTypes:(short *)arg2 sourcesCount:(unsigned int)arg3 inBuffer:(void *)arg4 stride:(unsigned int)arg5 length:(unsigned long long)arg6 sparse:(BOOL)arg7 positionScale:(float)arg8;

@end

