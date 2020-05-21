//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSourceNode.h>

@interface NUTestPatternSourceNode : NUSourceNode
{
    CDStruct_d58201db _size;
    long long _orientation;
    CDStruct_1e2b2e48 _scale;
}

- (BOOL)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (BOOL)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (long long)sourceOrientation;
- (id)initWithSettings:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 orientation:(long long)arg2 scale:(CDStruct_912cb5d2)arg3;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 orientation:(long long)arg2;

@end

