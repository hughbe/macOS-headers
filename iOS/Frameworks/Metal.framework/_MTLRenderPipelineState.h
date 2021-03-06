/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState> {
    <MTLDevice> * _device;
    MTLDebugInstrumentationData * _fragmentDebugInstrumentationData;
    MTLIndirectArgumentBufferEmulationData * _fragmentIABEmulationData;
    unsigned long long  _gpuAddress;
    unsigned long long  _imageBlockSampleLength;
    NSString * _label;
    unsigned long long  _resourceIndex;
    bool  _supportIndirectCommandBuffers;
    long long  _textureWriteRoundingMode;
    bool  _threadgroupSizeMatchesTileSize;
    MTLDebugInstrumentationData * _tileDebugInstrumentationData;
    MTLDebugInstrumentationData * _vertexDebugInstrumentationData;
    MTLIndirectArgumentBufferEmulationData * _vertexIABEmulationData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, retain) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (nonatomic, retain) MTLIndirectArgumentBufferEmulationData *fragmentIABEmulationData;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long imageBlockSampleLength;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (nonatomic, readonly) unsigned long long resourceIndex;
@property (readonly) Class superclass;
@property (readonly) bool supportIndirectCommandBuffers;
@property (readonly) long long textureWriteRoundingMode;
@property (readonly) bool threadgroupSizeMatchesTileSize;
@property (nonatomic, retain) MTLDebugInstrumentationData *tileDebugInstrumentationData;
@property (readonly) unsigned long long uniqueIdentifier;
@property (nonatomic, retain) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (nonatomic, retain) MTLIndirectArgumentBufferEmulationData *vertexIABEmulationData;

- (void)dealloc;
- (id)device;
- (id)fragmentDebugInstrumentationData;
- (id)fragmentIABEmulationData;
- (unsigned int)getFragmentShaderTelemetryID;
- (unsigned int)getVertexShaderTelemetryID;
- (unsigned long long)gpuAddress;
- (unsigned long long)imageBlockSampleLength;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (unsigned long long)imageblockSampleLength;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;
- (id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2;
- (id)label;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (unsigned long long)resourceIndex;
- (void)setFragmentDebugInstrumentationData:(id)arg1;
- (void)setFragmentIABEmulationData:(id)arg1;
- (void)setTileDebugInstrumentationData:(id)arg1;
- (void)setVertexDebugInstrumentationData:(id)arg1;
- (void)setVertexIABEmulationData:(id)arg1;
- (bool)supportIndirectCommandBuffers;
- (long long)textureWriteFPRoundingMode;
- (long long)textureWriteRoundingMode;
- (bool)threadgroupSizeMatchesTileSize;
- (id)tileDebugInstrumentationData;
- (unsigned long long)uniqueIdentifier;
- (id)vertexDebugInstrumentationData;
- (id)vertexIABEmulationData;

@end
