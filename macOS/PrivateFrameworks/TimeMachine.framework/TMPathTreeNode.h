//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface TMPathTreeNode : NSObject
{
    NSString *_name;
    NSMutableDictionary *_childMap;
    TMPathTreeNode *_parentNode;
    BOOL _isRootNode;
    BOOL _isTerminalNode;
}

+ (id)rootNode;
@property BOOL isTerminalNode; // @synthesize isTerminalNode=_isTerminalNode;
@property BOOL isRootNode; // @synthesize isRootNode=_isRootNode;
@property TMPathTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void)enumerateSubtreeUsingBlock:(CDUnknownBlockType)arg1;
- (id)insertPath:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)insertPath:(id)arg1;
- (void)addChildNode:(id)arg1;
- (BOOL)containsChildNodeNamed:(id)arg1;
- (id)childNodeNamed:(id)arg1;
@property(readonly) BOOL isLeafNode;
@property(readonly) unsigned long long _totalSubtreeLeafNodeCount;
@property(readonly) unsigned long long _totalSubtreeNodeCount;
@property(readonly) NSArray *children;
@property(readonly) NSString *extension;
@property(readonly) NSString *path;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

