//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNMTLShadable : NSObject
{
    id _vertexBuffers[31];
    id _fragmentBuffers[31];
    id _vertexTextures[31];
    id _fragmentTextures[31];
    id _vertexSamplers[16];
    id _fragmentSamplers[16];
    long long materialModificationCount;
    long long geometryModificationCount;
}

@property(nonatomic) long long geometryModificationCount; // @synthesize geometryModificationCount;
@property(nonatomic) long long materialModificationCount; // @synthesize materialModificationCount;
- (id)samplerAtIndices:(CDStruct_21854d8c)arg1;
- (id)textureAtIndices:(CDStruct_21854d8c)arg1;
- (id)bufferAtIndices:(CDStruct_21854d8c)arg1;
- (void)setResource:(id)arg1 ofType:(unsigned long long)arg2 atIndices:(CDStruct_21854d8c)arg3;
- (void)dealloc;

@end

