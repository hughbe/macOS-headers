//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPLayerGroup, NSLock, NSMutableDictionary, NSRecursiveLock, NSString, NSURL, NSUndoManager;

@interface MPDocumentInternal : NSObject
{
    NSString *uuid;
    NSString *lastRandomTransition;
    NSMutableDictionary *orderedRandomTransitions;
    NSRecursiveLock *propertiesLock;
    MPLayerGroup *documentLayerGroup;
    BOOL savesPathsAsAbsolute;
    BOOL assetLogging;
    NSMutableDictionary *cachedAbsolutePaths;
    NSMutableDictionary *cachedAbsoluteStillPaths;
    NSLock *cachedPathLock;
    NSUndoManager *undoManager;
    NSURL *fileURL;
    long long batchModifyCount;
    BOOL isInBatchModify;
    BOOL needsActionConfigure;
    NSMutableDictionary *cachedActionableLayers;
    BOOL cacheAbsolutePathOverride;
    BOOL alwaysLookupAbsolutePaths;
}

@property(nonatomic) BOOL alwaysLookupAbsolutePaths; // @synthesize alwaysLookupAbsolutePaths;
@property(nonatomic) BOOL cacheAbsolutePathOverride; // @synthesize cacheAbsolutePathOverride;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL;
@property(retain, nonatomic) NSMutableDictionary *cachedActionableLayers; // @synthesize cachedActionableLayers;
@property(nonatomic) BOOL isInBatchModify; // @synthesize isInBatchModify;
@property(nonatomic) BOOL needsActionConfigure; // @synthesize needsActionConfigure;
@property(nonatomic) long long batchModifyCount; // @synthesize batchModifyCount;
@property(retain, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager;
@property(retain, nonatomic) NSLock *cachedPathLock; // @synthesize cachedPathLock;
@property(retain, nonatomic) NSMutableDictionary *cachedAbsoluteStillPaths; // @synthesize cachedAbsoluteStillPaths;
@property(retain, nonatomic) NSMutableDictionary *cachedAbsolutePaths; // @synthesize cachedAbsolutePaths;
@property(nonatomic) BOOL assetLogging; // @synthesize assetLogging;
@property(nonatomic) BOOL savesPathsAsAbsolute; // @synthesize savesPathsAsAbsolute;
@property(retain, nonatomic) MPLayerGroup *documentLayerGroup; // @synthesize documentLayerGroup;
@property(retain, nonatomic) NSRecursiveLock *propertiesLock; // @synthesize propertiesLock;
@property(retain, nonatomic) NSMutableDictionary *orderedRandomTransitions; // @synthesize orderedRandomTransitions;
@property(retain, nonatomic) NSString *lastRandomTransition; // @synthesize lastRandomTransition;
- (void)dealloc;

@end

