//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/TreeNode.h>

#import <Install/NSCopying-Protocol.h>

@interface PathTree : TreeNode <NSCopying>
{
    unsigned int numberOfNodes;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)removeTreeNode:(id)arg1;
- (void)removeTreePath:(char *)arg1;
- (id)addTreePath:(char *)arg1 withType:(int)arg2;
- (id)initWithValue:(char *)arg1;
- (unsigned int)numberOfNodes;

@end

