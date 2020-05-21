//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface VKDebugTreeNode : NSObject
{
    VKDebugTreeNode *_parent;
    NSArray *_children;
}

@property(retain) NSArray *children; // @synthesize children=_children;
@property(readonly) VKDebugTreeNode *parent; // @synthesize parent=_parent;
- (void)searchNodes:(id)arg1 withParameter:(id)arg2;
- (id)tagsColumn;
- (id)valueColumn;
- (id)propertyColumn;
@property(readonly) NSString *name;
- (BOOL)isExpandable;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

