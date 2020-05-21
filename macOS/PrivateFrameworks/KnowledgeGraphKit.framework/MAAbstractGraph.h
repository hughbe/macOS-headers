//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MAGraph.h>

@interface MAAbstractGraph : MAGraph
{
}

+ (Class)edgeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)edgeClass;
+ (Class)nodeClassForLabel:(id)arg1 domain:(unsigned short)arg2;
+ (Class)nodeClass;
- (id)addEdgeWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)addNodeWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;
- (id)initWithPersistentStoreURL:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithGraphMLURL:(id)arg1;
- (id)initWithDataURL:(id)arg1;

@end

