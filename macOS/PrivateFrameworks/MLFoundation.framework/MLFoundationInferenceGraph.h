//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MLFoundation/MLFoundationGraph.h>

@interface MLFoundationInferenceGraph : MLFoundationGraph
{
}

+ (id)graphWithGraphObjects:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)resultTensorForLayer:(id)arg1;
- (void)executeWithOptions:(unsigned long long)arg1 sourceTensor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)description;
- (unsigned long long)totalDeviceMemorySize;
- (unsigned long long)resultTensorDeviceMemorySizeForLayer:(id)arg1;
- (BOOL)compileWithOptions:(unsigned long long)arg1 device:(id)arg2;
- (id)nodeWithLayer:(id)arg1 sources:(id)arg2;
- (id)nodeWithLayer:(id)arg1 source:(id)arg2;
- (id)initWithGraphObjects:(id)arg1;

@end

