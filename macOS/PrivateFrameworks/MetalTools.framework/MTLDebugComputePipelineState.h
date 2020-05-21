//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, NSArray;
@protocol MTLFunction;

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState
{
    unsigned long long _maxThreadPositionInGrid[3];
    unsigned long long _maxThreadsPerGrid[3];
    unsigned long long _maxThreadPositionInThreadgroup[3];
    unsigned long long _maxThreadIndexInThreadgroup[3];
    unsigned long long _maxThreadsPerThreadgroup[3];
    unsigned long long _maxThreadgroupPositionInGrid[3];
    unsigned long long _maxThreadgroupsPerGrid[3];
    unsigned long long _maxStageInGridSize[3];
    unsigned long long _maxStageInGridOrigin[3];
    id <MTLFunction> _function;
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_reflection;
    NSArray *_imageFilterFunctions;
    CDStruct_dbc1e4aa *_imageFilterFunctionInfo;
}

@property(readonly, nonatomic) CDStruct_dbc1e4aa *imageFilterFunctionInfo; // @synthesize imageFilterFunctionInfo=_imageFilterFunctionInfo;
@property(readonly, nonatomic) NSArray *imageFilterFunctions; // @synthesize imageFilterFunctions=_imageFilterFunctions;
@property(readonly, nonatomic) MTLComputePipelineReflection *reflection; // @synthesize reflection=_reflection;
@property(readonly, nonatomic) MTLComputePipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) id <MTLFunction> function; // @synthesize function=_function;
- (void)setImageFilterFunctions:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithComputePipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;

@end

