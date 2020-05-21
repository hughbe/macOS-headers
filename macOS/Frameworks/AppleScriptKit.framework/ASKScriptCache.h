//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ASKScriptCache : NSObject
{
    NSMutableDictionary *_scripts;
    NSMutableDictionary *_scriptPaths;
    BOOL _hasLoadedAllScripts;
}

+ (id)scriptWithName:(id)arg1 inBundleWithIdentifier:(id)arg2;
+ (id)sharedScriptCache;
- (void)loadAllScriptPathsForBundle:(id)arg1;
- (void)loadAllScriptsForBundle:(id)arg1;
- (id)scriptWithName:(id)arg1;
- (void)removeScriptWithName:(id)arg1;
- (void)removeAllScripts;
- (void)addScriptPath:(id)arg1 withName:(id)arg2;
- (void)addScript:(id)arg1 withName:(id)arg2;
- (void)addScript:(id)arg1;
- (void)dealloc;
- (id)init;

@end

