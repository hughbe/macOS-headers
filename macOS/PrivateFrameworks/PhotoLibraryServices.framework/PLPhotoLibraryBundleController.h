//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, PLBackgroundJobService;

@interface PLPhotoLibraryBundleController : NSObject
{
    long long _bundleType;
    Class _libraryServicesDelegateClass;
    struct os_unfair_lock_s _bundlesByPathLock;
    NSMutableDictionary *_bundlesByPath;
    struct os_unfair_lock_s _bundleCreationPauseLock;
    NSDate *_bundleCreationPausedUntilDate;
    PLBackgroundJobService *_backgroundJobService;
}

+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)arg1;
+ (id)_realPathForLibraryURL:(id)arg1;
+ (id)sharedBundleController;
- (void).cxx_destruct;
@property(retain) PLBackgroundJobService *backgroundJobService; // @synthesize backgroundJobService=_backgroundJobService;
- (BOOL)bindAssetsdService:(id)arg1 toBundle:(id)arg2 error:(id *)arg3;
- (id)_lookupOrCreateBundleForLibraryURL:(id)arg1 replaceExisting:(BOOL)arg2;
- (id)lookupOrCreateBundleForLibraryURL:(id)arg1;
- (void)shutdownBundle:(id)arg1 reason:(id)arg2;
- (void)_unregisterBundle:(id)arg1 pauseUntilDate:(id)arg2;
- (void)handleUnknownMergeEvent;
- (id)libraryServicesStatusDescription;
- (id)newPhotoLibraryBundleWithLibraryURL:(id)arg1;
- (id)replaceBundleForRebuildAtLibraryURL:(id)arg1;
- (id)openBundleAtLibraryURL:(id)arg1;
- (id)libraryBundles;
- (id)libraryBundlePaths;
- (id)bundleForLibraryURL:(id)arg1;
- (id)initWithBundleType:(long long)arg1 libraryServicesManagerDelegateClass:(Class)arg2;
- (id)init;

@end

