//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimImplementation/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol MTLBuffer, MTLCommandQueue, MTLComputePipelineState, MTLDepthStencilState, MTLDeserializerAllocator, MTLEvent, MTLFence, MTLFunction, MTLHeap, MTLLibrary, MTLRenderPipelineState, MTLResource, MTLSamplerState, MTLTexture, OS_dispatch_data;

@protocol MTLDeserializer <NSObject>
@property(readonly) BOOL generateResourceRefs;
- (BOOL)newFunctionWithSerializedMetallib:(NSObject<OS_dispatch_data> *)arg1 commandData:(const char *)arg2 commandDataSize:(unsigned long long)arg3 overrideTargetTriple:(NSString *)arg4 allocator:(id <MTLDeserializerAllocator>)arg5;
- (BOOL)newLibraryWithData:(NSObject<OS_dispatch_data> *)arg1 libraryRef:(unsigned int)arg2 allocator:(id <MTLDeserializerAllocator>)arg3;
- (void)submitCommandSegmentsTimed:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(void (^)(double, double, unsigned long long, unsigned long long))arg4 commandBufferCompleted:(void (^)(double, double, unsigned long long, unsigned long long))arg5 commandQueueRef:(unsigned int)arg6;
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(void (^)(void))arg4 commandBufferCompleted:(void (^)(void))arg5 commandQueueRef:(unsigned int)arg6;
- (void)submitCommandSegments:(void **)arg1 lengths:(unsigned long long *)arg2 count:(unsigned long long)arg3 submissionCompleted:(void (^)(void))arg4 commandBufferCompleted:(void (^)(void))arg5;
- (void)getBytes:(void *)arg1 dataSize:(unsigned long long)arg2 command:(const CDStruct_c0454aff *)arg3;
- (void)newTextureWithIOSurface:(struct __IOSurface *)arg1 serializedData:(const char *)arg2 serializedDataSize:(unsigned long long)arg3 allocator:(id <MTLDeserializerAllocator>)arg4;
- (void)deleteObjectWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;
- (void)deleteResource:(unsigned int)arg1;
- (BOOL)operationWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id <MTLDeserializerAllocator>)arg3;
- (void)notifyListenerForEventWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 block:(void (^)(unsigned int))arg3 allocator:(id <MTLDeserializerAllocator>)arg4;
- (BOOL)newObjectWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2 allocator:(id <MTLDeserializerAllocator>)arg3;
- (NSObject<OS_dispatch_data> *)newObjectCommandWithSerializedData:(const char *)arg1 serializedDataSize:(unsigned long long)arg2;
- (id <MTLResource>)getResourceForReference:(unsigned int)arg1;
- (unsigned int)registerCommandQueue:(id <MTLCommandQueue>)arg1;
- (unsigned int)registerBuffer:(id <MTLBuffer>)arg1;
- (id <MTLHeap>)getHeapForReference:(unsigned int)arg1;
- (void)registerHeapForReference:(unsigned int)arg1 heap:(id <MTLHeap>)arg2;
- (id <MTLEvent>)getEventForReference:(unsigned int)arg1;
- (void)registerEventForReference:(unsigned int)arg1 event:(id <MTLEvent>)arg2;
- (id <MTLFence>)getFenceForReference:(unsigned int)arg1;
- (void)registerFenceForReference:(unsigned int)arg1 fence:(id <MTLFence>)arg2;
- (id <MTLDepthStencilState>)getDepthStencilStateForReference:(unsigned int)arg1;
- (void)registerDepthStencilStateForReference:(unsigned int)arg1 depthStencil:(id <MTLDepthStencilState>)arg2;
- (id <MTLSamplerState>)getSamplerStateForReference:(unsigned int)arg1;
- (void)registerSamplerStateForReference:(unsigned int)arg1 sampler:(id <MTLSamplerState>)arg2;
- (id <MTLTexture>)getTextureForReference:(unsigned int)arg1;
- (void)registerTextureForReference:(unsigned int)arg1 texture:(id <MTLTexture>)arg2;
- (id <MTLBuffer>)getBufferForReference:(unsigned int)arg1;
- (void)registerBufferForReference:(unsigned int)arg1 buffer:(id <MTLBuffer>)arg2;
- (id <MTLCommandQueue>)getCommandQueueForReference:(unsigned int)arg1;
- (void)registerCommandQueueForReference:(unsigned int)arg1 commandQueue:(id <MTLCommandQueue>)arg2;
- (id <MTLRenderPipelineState>)getRenderPipelineStateForReference:(unsigned int)arg1;
- (void)registerRenderPipelineStateForReference:(unsigned int)arg1 renderPipeline:(id <MTLRenderPipelineState>)arg2;
- (id <MTLComputePipelineState>)getComputePipelineStateForReference:(unsigned int)arg1;
- (void)registerComputePipelineStateForReference:(unsigned int)arg1 computePipeline:(id <MTLComputePipelineState>)arg2;
- (id <MTLFunction>)getFunctionForReference:(unsigned int)arg1;
- (void)registerFunctionForReference:(unsigned int)arg1 function:(id <MTLFunction>)arg2;
- (id <MTLLibrary>)getLibraryForReference:(unsigned int)arg1;
- (void)registerLibraryForReference:(unsigned int)arg1 library:(id <MTLLibrary>)arg2;
@end

