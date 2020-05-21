//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLComputePipelineStateSPI-Protocol.h>

@class MTLDebugInstrumentationData, NSString;
@protocol MTLDevice, MTLFunction;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI>
{
    id <MTLFunction> _function;
}

@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) unsigned long long uniqueIdentifier;
@property(nonatomic) unsigned long long resourceIndex;
- (unsigned int)getComputeKernelTelemetryID;
@property(readonly) unsigned long long staticThreadgroupMemoryLength;
@property(readonly) unsigned long long threadExecutionWidth;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) id <MTLDevice> device;
@property(readonly) NSString *label;
- (void)acceptVisitor:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

