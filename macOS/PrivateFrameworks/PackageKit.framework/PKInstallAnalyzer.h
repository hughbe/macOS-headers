//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, PKInstallRequest;

@interface PKInstallAnalyzer : NSObject
{
    PKInstallRequest *_installRequest;
    NSMutableDictionary *_maskPathsByPackageSpecifier;
    NSMutableDictionary *_skipComponentsByPackageSpecifier;
    NSMutableSet *_obsoletedFiles;
    NSMutableSet *_potentiallyObsoleteDirectories;
    NSMutableSet *_atomicallyObsoleteBundles;
    NSMutableSet *_truncateBeforeObsoletingFiles;
    NSMutableArray *_deferredInstallPaths;
    NSMutableArray *_registrationPaths;
    NSMutableArray *_contentCachingPaths;
    long long _kextPathCount;
    long long _systemLibraryCount;
    long long _prebootFilesCount;
    long long _xpcCachePathCount;
    NSDictionary *_bundlePathToComponentMap;
    NSMutableDictionary *_bundleIdentToXATTRMap;
    NSMutableDictionary *_defaultPathByBundleIdentifier;
    NSMutableDictionary *_actualPathByBundleIdentifier;
    NSMutableDictionary *_versionByBundleIdentifier;
    NSMutableDictionary *_downgradePathByBundleIdentifier;
    NSMutableArray *_topBundleIdentifiers;
    NSMutableArray *_actualFileInstallPaths;
}

- (id)_knownPrebootFileLocations;
- (void)_findRegistrationPathsForPackageSpecifier:(id)arg1;
- (void)_findDeferredInstallPathsForPackageSpecifier:(id)arg1;
- (void)_findMaskPathsAndSkipComponentsForPackageSpecifier:(id)arg1;
- (BOOL)_shouldInstallPackageComponent:(id)arg1 forPackageSpecifier:(id)arg2;
- (id)_versionPreviouslyDeferredForComponentAtPath:(id *)arg1;
- (id)_buildBundlePathToComponentMapForRequest;
- (void)_findObsoleteOnDiskFilesForPackageSpecifier:(id)arg1;
- (BOOL)_shouldAllowListBasedObsoletingForPackage:(id)arg1;
- (BOOL)_shouldAllowReceiptBasedFileObsoletingForPackage:(id)arg1;
- (BOOL)_isUnsafeToObsoleteComponent:(id)arg1;
- (id)extendedAttributesForComponent:(id)arg1;
@property(readonly) BOOL includesAppleInternalRootContent;
- (id)actualFileInstallPathsViolatingReadOnlySystemLocationsEvaluatingDestinationPath:(BOOL)arg1;
- (id)actualFileInstallPathsWithoutParents;
- (id)actualFileInstallPaths;
- (id)topBundleIdentifiers;
- (id)downgradePathsForBundleIdentifiers;
- (id)installedVersionForBundleIdentifiers;
- (id)actualInstallPathForBundleIdentifiers;
- (id)defaultInstallPathForBundleIdentifiers;
- (BOOL)installsXPCCacheContent;
- (BOOL)installsPrebootResources;
- (BOOL)installsSystemLibraries;
- (BOOL)installsKexts;
- (id)bundlePathsForContentCaching;
- (id)bundlePathsForRegistration;
- (id)deferredInstallPaths;
- (id)atomicallyObsoletePaths;
- (id)potentiallyObsoleteDirectories;
- (id)truncateBeforeObsoletingFiles;
- (id)obsoletedFiles;
- (id)skipComponentsForPackageSpecifier:(id)arg1;
- (id)maskPathsForPackageSpecifier:(id)arg1;
- (void)_sanitizePackageDataForRequest;
- (void)_computeManifestForSpecifier:(id)arg1;
- (void)_analyzeIncludingObsoletion:(BOOL)arg1;
- (void)dealloc;
- (id)initWithInstallRequest:(id)arg1 includeObsoletion:(BOOL)arg2;
- (id)initWithInstallRequest:(id)arg1;

@end

