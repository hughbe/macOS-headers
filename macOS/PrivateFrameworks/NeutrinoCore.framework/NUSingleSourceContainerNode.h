//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUSourceContainerNode.h>

@class NUSourceNode;

@interface NUSingleSourceContainerNode : NUSourceContainerNode
{
    NUSourceNode *_source;
}

- (void).cxx_destruct;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(CDStruct_912cb5d2 *)arg2 error:(out id *)arg3;
- (id)primarySourceNode;
- (id)initWithSourceNode:(id)arg1 assetIdentifier:(id)arg2;
- (id)initWithAssetIdentifier:(id)arg1;

@end

