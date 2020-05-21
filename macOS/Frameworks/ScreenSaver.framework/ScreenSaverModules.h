//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ScreenSaverModules : NSObject
{
    NSMutableDictionary *_modules;
    NSMutableDictionary *_times;
    BOOL _isPreview;
}

+ (id)homeFolder;
+ (id)findNewModuleForPath:(id)arg1;
+ (id)sharedInstance;
@property BOOL isPreview; // @synthesize isPreview=_isPreview;
- (void)_dropCrashReporterBreadCrumbForModule:(id)arg1;
- (id)defaultModuleName;
- (Class)classForModule:(id)arg1;
- (BOOL)_moduleNeedsAcceleration:(id)arg1;
- (id)loadModule:(id)arg1 frame:(struct CGRect)arg2 isPreview:(BOOL)arg3;
- (id)sortedModulesForType:(id)arg1;
- (void)findModulesWithOrder:(id)arg1 forceRebuild:(BOOL)arg2;
- (id)_findExtensionModules;
- (id)randomModule;
- (id)defaultModule;
- (id)basicModule;
- (id)basicModuleName;
- (id)pathForModuleName:(id)arg1;
- (id)findAll32BitModules;
- (id)findAllModules;
- (id)findModuleWithPath:(id)arg1;
- (id)findModuleWithName:(id)arg1;
- (id)moduleWithPath:(id)arg1;
- (id)moduleWithName:(id)arg1;
- (id)moduleNames;
- (BOOL)modulePathIsAppleModule:(id)arg1;
- (id)_directoriesInSearchDomain;
- (unsigned long long)moduleSearchDomains;
- (void)dealloc;
- (id)init;

@end

