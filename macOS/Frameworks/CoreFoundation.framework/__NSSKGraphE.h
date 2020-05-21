//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface __NSSKGraphE : NSObject
{
    struct edge *_edges;
    struct vertex *_vertices;
    unsigned long long _numV;
    unsigned long long _numE;
    unsigned long long _currE;
    unsigned long long _dump;
    unsigned long long _l_end;
}

- (struct edge **)isAcyclic;
- (unsigned long long)numOfEdges;
- (BOOL)isEmpty;
- (BOOL)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithNumberOfVertices:(unsigned long long)arg1 numberOfEdges:(unsigned long long)arg2;

@end

