/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
 */

@interface IOGPUMetalCommandBuffer : _MTLCommandBuffer {
    NSObject<OS_dispatch_semaphore> * _commitAndResetSem;
    void * _completedCallbackBlockPtr;
    IOGPUMetalDevice<MTLDevice> * _device;
    unsigned long long  _protectionOptions;
    NSMutableSet * _purgedResources;
    void * _scheduledCallbackBlockPtr;
    struct IOGPUMetalCommandBufferStorage { id x1; struct IOGPUMetalCommandBufferStoragePool {} *x2; struct { struct IOGPUMetalCommandBufferStorage {} *x_3_1_1; struct IOGPUMetalCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; id x8; char *x9; char *x10; struct IOGPUSegmentListHeader {} *x11; struct IOGPUSegmentResourceListHeader {} *x12; struct IOGPUSegmentResourceDescriptorGroup {} *x13; struct IOGPUResourceList { unsigned short x_14_1_1[256]; struct IOGPUSegmentResourceDescriptorGroup {} *x_14_1_2; unsigned long long x_14_1_3; unsigned long long x_14_1_4; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; int (*x_14_1_12)(); void *x_14_1_13; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct IOGPUMetalCommandBufferResourceInfo {} *x20; id x21; id *x22; unsigned int x23; unsigned long long x24; struct IOGPUSegmentListShmemHeader {} *x25; struct IOGPUSegmentKernelCommmandListHeader {} *x26; } * _storage;
    unsigned long long * _submitToHardwareTimeStampPointer;
}

@property (readonly) struct IOGPUMetalCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; struct IOGPUResourceInfo { struct __IOSurface {} *x_6_1_1; unsigned int x_6_1_2 : 56; unsigned int x_6_1_3 : 8; unsigned int x_6_1_4; } x6; }*commandBufferResourceInfo;
@property (readonly) struct IOGPUMetalCommandBufferStorage { id x1; struct IOGPUMetalCommandBufferStoragePool {} *x2; struct { struct IOGPUMetalCommandBufferStorage {} *x_3_1_1; struct IOGPUMetalCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; id x8; char *x9; char *x10; struct IOGPUSegmentListHeader {} *x11; struct IOGPUSegmentResourceListHeader {} *x12; struct IOGPUSegmentResourceDescriptorGroup {} *x13; struct IOGPUResourceList { unsigned short x_14_1_1[256]; struct IOGPUSegmentResourceDescriptorGroup {} *x_14_1_2; unsigned long long x_14_1_3; unsigned long long x_14_1_4; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; int (*x_14_1_12)(); void *x_14_1_13; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct IOGPUMetalCommandBufferResourceInfo {} *x20; id x21; id *x22; unsigned int x23; unsigned long long x24; struct IOGPUSegmentListShmemHeader {} *x25; struct IOGPUSegmentKernelCommmandListHeader {} *x26; }*commandBufferStorage;
@property (readonly) <MTLDevice> *device;
@property (readonly) struct IOGPUResourceList { unsigned short x1[256]; struct IOGPUSegmentResourceDescriptorGroup {} *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int (*x12)(); void *x13; }*ioGPUResourceList;

- (void)_debugBytes:(const char *)arg1 length:(unsigned long long)arg2 output_type:(unsigned int)arg3;
- (void)_encodePurgedResources;
- (void*)_reserveKernelCommandBufferSpace:(unsigned long long)arg1;
- (void)addPurgedHeap:(id)arg1;
- (void)addPurgedResource:(id)arg1;
- (id)akPrivateResourceList;
- (id)akResourceList;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)arg1;
- (void)allocDebugBuffer;
- (void)beginSegment:(void*)arg1;
- (struct IOGPUMetalCommandBufferResourceInfo { unsigned long long x1; unsigned int *x2; unsigned int *x3; unsigned int *x4; id x5; struct IOGPUResourceInfo { struct __IOSurface {} *x_6_1_1; unsigned int x_6_1_2 : 56; unsigned int x_6_1_3 : 8; unsigned int x_6_1_4; } x6; }*)commandBufferResourceInfo;
- (struct IOGPUMetalCommandBufferStorage { id x1; struct IOGPUMetalCommandBufferStoragePool {} *x2; struct { struct IOGPUMetalCommandBufferStorage {} *x_3_1_1; struct IOGPUMetalCommandBufferStorage {} **x_3_1_2; } x3; id x4; char *x5; char *x6; char *x7; id x8; char *x9; char *x10; struct IOGPUSegmentListHeader {} *x11; struct IOGPUSegmentResourceListHeader {} *x12; struct IOGPUSegmentResourceDescriptorGroup {} *x13; struct IOGPUResourceList { unsigned short x_14_1_1[256]; struct IOGPUSegmentResourceDescriptorGroup {} *x_14_1_2; unsigned long long x_14_1_3; unsigned long long x_14_1_4; unsigned int x_14_1_5; unsigned int x_14_1_6; unsigned int x_14_1_7; unsigned int x_14_1_8; unsigned int x_14_1_9; unsigned int x_14_1_10; unsigned int x_14_1_11; int (*x_14_1_12)(); void *x_14_1_13; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct IOGPUMetalCommandBufferResourceInfo {} *x20; id x21; id *x22; unsigned int x23; unsigned long long x24; struct IOGPUSegmentListShmemHeader {} *x25; struct IOGPUSegmentKernelCommmandListHeader {} *x26; }*)commandBufferStorage;
- (void)commit;
- (void)commitAndReset;
- (void)commitEncoder;
- (void)dealloc;
- (id)device;
- (void)didCompleteWithStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 error:(id)arg3;
- (void)encodeSignalEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeSubmitSleepMS:(unsigned int)arg1;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (void)endCurrentSegment;
- (void)getCurrentKernelCommandBufferPointer:(void**)arg1 end:(void**)arg2;
- (void)getCurrentKernelCommandBufferStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (void)getDebugBufferPointerStart:(void**)arg1 end:(void**)arg2;
- (struct IOGPUSegmentListHeader { unsigned long long x1; unsigned int x2; unsigned int x3; struct IOGPUSegmentResourceListHeader { unsigned long long x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; unsigned int x_4_1_4; unsigned int x_4_1_5; struct IOGPUSegmentResourceDescriptorGroup { unsigned int x_6_2_1[6]; unsigned int x_6_2_2[6]; unsigned short x_6_2_3[6]; unsigned short x_6_2_4; unsigned short x_6_2_5; } x_4_1_6[0]; } x4[0]; }*)getSegmentListHeader;
- (void)getSegmentListPointerStart:(void**)arg1 current:(void**)arg2 end:(void**)arg3;
- (void)growDebugBuffer:(unsigned int)arg1;
- (void)growKernelCommandBuffer:(unsigned long long)arg1;
- (void)growSegmentList;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2;
- (id)initWithQueue:(id)arg1 retainedReferences:(bool)arg2 synchronousDebugMode:(bool)arg3;
- (struct IOGPUResourceList { unsigned short x1[256]; struct IOGPUSegmentResourceDescriptorGroup {} *x2; unsigned long long x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; int (*x12)(); void *x13; }*)ioGPUResourceList;
- (void)kernelCommandCollectTimeStamp;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)popDebugGroup;
- (unsigned long long)protectionOptions;
- (void)pushDebugGroup:(id)arg1;
- (void)setCurrentCommandEncoder:(id)arg1;
- (void)setCurrentKernelCommandBufferPointer:(void*)arg1;
- (void)setCurrentSegmentListPointer:(void*)arg1;
- (void)setLabel:(id)arg1;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (void)validate;

@end
