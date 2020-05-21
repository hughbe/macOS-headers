//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderNode.h>

@class NUSourceNode;

@interface NUSourceContainerNode : NURenderNode
{
}

+ (id)sourceContainerNodeFromSource:(id)arg1 error:(out id *)arg2;
- (BOOL)isEqualToRenderNode:(id)arg1;
- (unsigned long long)_hash;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(CDStruct_912cb5d2 *)arg2 error:(out id *)arg3;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)preparedSourceNodeForPipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(out id *)arg4;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)initWithAssetIdentifier:(id)arg1;

// Remaining properties
@property(readonly) NUSourceNode *primarySourceNode; // @dynamic primarySourceNode;

@end

