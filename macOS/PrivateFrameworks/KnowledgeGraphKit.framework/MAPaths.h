//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface MAPaths : NSObject
{
    NSMutableArray *_paths;
}

+ (id)pathsWithPaths:(id)arg1;
+ (id)paths;
- (void).cxx_destruct;
- (id)uniqueEdgesForLabel:(id)arg1;
- (id)uniqueNodesForLabel:(id)arg1;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (id)graphRepresentationWithStrictNodes:(BOOL)arg1 strictEdges:(BOOL)arg2;
- (void)removeAllPaths;
- (void)setPaths:(id)arg1;
- (void)addPath:(id)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)description;
- (id)init;

@end

