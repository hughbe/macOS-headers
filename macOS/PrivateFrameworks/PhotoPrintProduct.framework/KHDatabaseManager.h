//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface KHDatabaseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_databaseManagerThemeQueue;
    NSObject<OS_dispatch_queue> *_databaseManagerProjectQueue;
    NSMutableDictionary *_projectDatabasePaths;
    NSMutableDictionary *_openProjectDatabases;
    NSMutableDictionary *_openThemeDatabases;
    NSMutableSet *_transientThemeDatabases;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly) NSMutableSet *transientThemeDatabases; // @synthesize transientThemeDatabases=_transientThemeDatabases;
@property(readonly) NSMutableDictionary *openThemeDatabases; // @synthesize openThemeDatabases=_openThemeDatabases;
@property(readonly) NSMutableDictionary *openProjectDatabases; // @synthesize openProjectDatabases=_openProjectDatabases;
@property(readonly) NSMutableDictionary *projectDatabasePaths; // @synthesize projectDatabasePaths=_projectDatabasePaths;
- (void)closeProjectDBForUuid:(id)arg1 context:(id)arg2;
- (void)closeProjectDBForUuid:(id)arg1;
- (void)closeProjectDBForURL:(id)arg1 context:(id)arg2;
- (void)closeProjectDBForURL:(id)arg1;
- (id)projectDBForUuid:(id)arg1 context:(id)arg2;
- (id)projectDBForUuid:(id)arg1;
- (id)projectDBForURL:(id)arg1 context:(id)arg2;
- (id)projectDBForURL:(id)arg1;
- (void)closeTransientThemeDB:(id)arg1;
- (void)closeThemeDBForModel:(id)arg1;
- (void)_closeThemeDBForKey:(id)arg1;
- (void)resetThemeDBForModel:(id)arg1;
- (id)_themeDBForURL:(id)arg1;
- (id)themeDBForURL:(id)arg1;
- (id)themeDBForModel:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (id)themeBundlePathForModel:(id)arg1;
- (void)requestThemeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestThemeWithIdentifier:(id)arg1 downloadHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)localThemeForThemeIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

