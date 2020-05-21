//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSURL, TMPathTreeNode;
@protocol TMSystemPathsProvider;

@interface TMSystemPathsOracle : NSObject
{
    NSURL *_mountPointURL;
    NSLock *_discoveryLock;
    TMPathTreeNode *_systemPathsTreeRoot;
    id <TMSystemPathsProvider> _pathsProvider;
}

+ (id)_knownSystemInstalledBundleExtensions;
@property(retain) id <TMSystemPathsProvider> pathsProvider; // @synthesize pathsProvider=_pathsProvider;
- (void)enumeratePathsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePathsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)discoverSystemPathsWithOptions:(unsigned int)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (BOOL)discoverSystemPaths:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initForVolumeAtURL:(id)arg1;

@end

