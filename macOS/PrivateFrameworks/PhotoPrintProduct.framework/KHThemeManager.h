//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoPrintProduct/KHThemeManagerPathSourceProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSURL;
@protocol KHThemeManagerPathSourceProtocol, OS_dispatch_queue;

@interface KHThemeManager : NSObject <KHThemeManagerPathSourceProtocol>
{
    NSMutableDictionary *_themeProviderCache;
    NSMutableArray *_sources;
    NSMutableSet *_cachedLocalThemeProviders;
    NSObject<OS_dispatch_queue> *_themeManagerQueue;
    NSObject<OS_dispatch_queue> *_themeManagerLocalThemeCacheQueue;
    id <KHThemeManagerPathSourceProtocol> _delegate;
    NSURL *_delegateThemeManagerStagingPath;
}

+ (id)defaultManager;
- (void).cxx_destruct;
@property(readonly) NSURL *delegateThemeManagerStagingPath; // @synthesize delegateThemeManagerStagingPath=_delegateThemeManagerStagingPath;
@property(readonly) NSArray *sources; // @synthesize sources=_sources;
@property(nonatomic) __weak id <KHThemeManagerPathSourceProtocol> delegate; // @synthesize delegate=_delegate;
- (id)watchDirectoriesForThemeManager:(id)arg1;
- (void)_discoverDelegates;
- (id)bundleForIdentifier:(id)arg1;
- (id)cachedThemeProvidersForProjectType:(long long)arg1;
- (id)cachedLocalThemeProviderForIdentifier:(id)arg1;
- (id)localThemeProviderForURL:(id)arg1 themeIdentifier:(id)arg2 andProductCode:(id)arg3;
- (void)fetchThemeProvidersForIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchThemeCatalogs:(CDUnknownBlockType)arg1;
- (id)scanForNewThemeCatalogs:(CDUnknownBlockType)arg1;
- (void)resetThemeCatalogs;
- (id)cachedThemeProvidersForProductCode:(id)arg1;
- (id)productCodesForProductTypeWithinCachedThemeProviders:(long long)arg1;
- (id)allCachedLocalThemeProviders;
- (void)invalidateAllCachedLocalThemeProviders;
- (id)catalogForProductCodes:(id)arg1;
@property(readonly, nonatomic) NSURL *bundledPrintsThemesURL;
@property(readonly, nonatomic) NSURL *bundledThemesURL;
- (void)prepareCatalogsForProjectType:(long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

