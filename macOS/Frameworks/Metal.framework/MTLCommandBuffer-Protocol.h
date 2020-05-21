//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/NSObject-Protocol.h>

@class MTLRenderPassDescriptor, NSError, NSString;
@protocol MTLBlitCommandEncoder, MTLCommandQueue, MTLComputeCommandEncoder, MTLDevice, MTLDrawable, MTLEvent, MTLParallelRenderCommandEncoder, MTLRenderCommandEncoder;

@protocol MTLCommandBuffer <NSObject>
@property(readonly) NSError *error;
@property(readonly) unsigned long long status;
@property(readonly) double GPUEndTime;
@property(readonly) double GPUStartTime;
@property(readonly) double kernelEndTime;
@property(readonly) double kernelStartTime;
@property(copy) NSString *label;
@property(readonly) BOOL retainedReferences;
@property(readonly) id <MTLCommandQueue> commandQueue;
@property(readonly) id <MTLDevice> device;
- (void)popDebugGroup;
- (void)pushDebugGroup:(NSString *)arg1;
- (id <MTLParallelRenderCommandEncoder>)parallelRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (void)encodeSignalEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2;
- (id <MTLComputeCommandEncoder>)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id <MTLComputeCommandEncoder>)computeCommandEncoder;
- (id <MTLRenderCommandEncoder>)renderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (id <MTLBlitCommandEncoder>)blitCommandEncoder;
- (void)waitUntilCompleted;
- (void)addCompletedHandler:(void (^)(id <MTLCommandBuffer>))arg1;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id <MTLDrawable>)arg1 afterMinimumDuration:(double)arg2;
- (void)presentDrawable:(id <MTLDrawable>)arg1 atTime:(double)arg2;
- (void)presentDrawable:(id <MTLDrawable>)arg1;
- (void)addScheduledHandler:(void (^)(id <MTLCommandBuffer>))arg1;
- (void)commit;
- (void)enqueue;
@end

