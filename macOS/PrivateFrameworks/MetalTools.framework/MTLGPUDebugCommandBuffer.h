//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsCommandBuffer.h>

#import <MetalTools/MTLGPUDebugBufferEncoder-Protocol.h>

@protocol MTLArgumentEncoder, MTLBuffer;

@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder>
{
    id <MTLArgumentEncoder> _stageArgumentEncoder;
    id <MTLBuffer> _vertexComputeReportBuffer;
    unsigned long long _vertexComputeReportOffset;
    id <MTLBuffer> _fragmentReportBuffer;
    unsigned long long _fragmentReportOffset;
    struct vector<MetalBuffer, std::__1::allocator<MetalBuffer>> _usedBuffers;
    struct MetalBuffer _currentPooledBuffer;
    unsigned long long _currentPooledBufferOffset;
    unsigned int _currentEncoderID;
    unsigned int _currentReportID;
    struct vector<id<MTLBuffer>, std::__1::allocator<id<MTLBuffer>>> _reportBufferList;
    struct vector<ReportBufferEntry, std::__1::allocator<ReportBufferEntry>> _reportEntryList;
    struct vector<NSString *, std::__1::allocator<NSString *>> _encoderLabels;
    struct mutex _allocationLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)preCompletionHandlers;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)computeCommandEncoder;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)_encodeReportBuffer:(id)arg1 type:(unsigned long long)arg2;
- (struct ReportBufferEntry)_allocReportEntryStorageForType:(unsigned long long)arg1;
- (id)_newReportBuffer;
- (id)encodeBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3 resultOffset:(unsigned long long *)arg4;
- (void)onEncoderEnd:(id)arg1 type:(unsigned long long)arg2;
- (void)onEncoderBegin:(id)arg1 type:(unsigned long long)arg2;
- (void)_checkReportBuffers;
- (pair_eb21f6dd)setBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (pair_eb21f6dd)_temporaryBufferWithLength:(unsigned long long)arg1;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;

@end

