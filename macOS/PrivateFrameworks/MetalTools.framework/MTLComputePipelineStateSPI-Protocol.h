//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLComputePipelineState-Protocol.h>

@class MTLDebugInstrumentationData;

@protocol MTLComputePipelineStateSPI <MTLComputePipelineState>
@property(readonly, retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly) unsigned long long staticThreadgroupMemoryLength;
- (unsigned int)getComputeKernelTelemetryID;

@optional
@property(nonatomic) unsigned long long resourceIndex;
@end

