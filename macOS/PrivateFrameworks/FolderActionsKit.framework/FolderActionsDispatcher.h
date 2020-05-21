//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface FolderActionsDispatcher : NSObject
{
    BOOL _folderActionsEnabled;
    NSMutableArray *_frontEnds;
    NSMutableArray *_folderActions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observedFrontEnds;
}

+ (void)_enableFolderActionsDispatcherLaunchDJobIfNeeded;
+ (id)sharedDispatcher;
- (void).cxx_destruct;
@property(retain) NSMutableArray *observedFrontEnds; // @synthesize observedFrontEnds=_observedFrontEnds;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property BOOL folderActionsEnabled; // @synthesize folderActionsEnabled=_folderActionsEnabled;
@property(retain) NSMutableArray *folderActions; // @synthesize folderActions=_folderActions;
@property(retain) NSMutableArray *frontEnds; // @synthesize frontEnds=_frontEnds;
- (void)enableFolderActionsAndRunOnUnprocessedItems;
- (void)setURL:(id)arg1 ofScriptWithURL:(id)arg2 forFolderActionWithURL:(id)arg3;
- (void)disableScriptWithURL:(id)arg1 forFolderWithURL:(id)arg2;
- (void)enableScriptWithURL:(id)arg1 forFolderWithURL:(id)arg2;
- (void)removeScriptsAtIndexes:(id)arg1 fromFolderWithURL:(id)arg2;
- (void)removeScriptAtIndex:(unsigned long long)arg1 fromFolderWithURL:(id)arg2;
- (void)removeScriptWithURL:(id)arg1 fromFolderWithURL:(id)arg2;
- (void)addScripts:(id)arg1 toFolderWithURL:(id)arg2;
- (void)addScript:(id)arg1 toFolderWithURL:(id)arg2;
- (void)addScriptWithURL:(id)arg1 toFolderWithURL:(id)arg2;
- (BOOL)hasFolderActionWithURL:(id)arg1;
- (void)setName:(id)arg1 ofFolderActionWithURL:(id)arg2;
- (void)setURL:(id)arg1 ofFolderActionWithURL:(id)arg2;
- (void)disableFolderActionWithURL:(id)arg1;
- (void)enableFolderActionWithURL:(id)arg1;
- (void)enableFolderActionWithURL:(id)arg1 runOnUnprocessedItems:(BOOL)arg2;
- (void)removeFolderActionsAtIndexes:(id)arg1;
- (void)removeFolderActionAtIndex:(unsigned long long)arg1;
- (void)removeFolderActionWithURL:(id)arg1;
- (void)addFolderActions:(id)arg1;
- (void)addFolderAction:(id)arg1;
- (void)enableFolderActions;
- (void)updateFolderActionsInfo:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)seriallyDispatchBlock:(CDUnknownBlockType)arg1;
- (void)stopObservingFrontEnd:(id)arg1;
- (void)startObservingFrontEnd:(id)arg1;
- (void)removeFrontEnd:(id)arg1;
- (void)addFrontEnd:(id)arg1;
- (void)dealloc;

@end

