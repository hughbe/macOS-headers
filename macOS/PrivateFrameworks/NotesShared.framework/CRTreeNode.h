//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/CRObject.h>

@class CRTree, CRWeakReference, NSArray;

@interface CRTreeNode : CRObject
{
    CRTree *_tree;
    NSArray *_children;
}

+ (id)CRProperties;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(nonatomic) __weak CRTree *tree; // @synthesize tree=_tree;
- (void)removeNode:(id)arg1;
- (void)moveNode:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)insertNodeWithValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isLoopNode;
- (BOOL)isInLoop;
@property(nonatomic) __weak CRTreeNode *parent;
- (id)parentReference;
- (id)initWithValue:(id)arg1 parent:(id)arg2 tree:(id)arg3;

// Remaining properties
@property(retain, nonatomic) CRWeakReference *parentRef; // @dynamic parentRef;
@property(retain, nonatomic) id value; // @dynamic value;

@end

