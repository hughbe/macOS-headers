//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ABDataSourcePluginIndex : NSObject
{
    NSMutableDictionary *_bundlesByClass;
    NSMutableDictionary *_infoByClasses;
    BOOL _didIndexPlugins;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void)log:(id)arg1;
- (id)debugPluginPaths;
- (id)systemPluginPaths;
- (id)sourceBundlePaths;
- (void)indexPlugins;
- (id)availablePluginClasses;
- (BOOL)loadBundleForClassName:(id)arg1 error:(id *)arg2;
- (id)bundleForClassName:(id)arg1;
- (id)infoForClassName:(id)arg1;
- (void)dealloc;
- (id)init;

@end

