//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TreeNode;

@interface TreeEnumerator : NSObject
{
    TreeNode *root;
    TreeNode *current;
    NSMutableArray *nodes;
}

+ (id)enumeratorWithRoot:(id)arg1;
- (void)reset;
- (void)skipDescendants;
- (id)nextObject;
- (id)initWithRoot:(id)arg1;
- (void)dealloc;

@end

