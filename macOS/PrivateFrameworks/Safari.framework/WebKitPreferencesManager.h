//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WKPreferences;

__attribute__((visibility("hidden")))
@interface WebKitPreferencesManager : NSObject
{
    long long _preferencesType;
    BOOL _shouldPersistPreferences;
    BOOL _intelligentTrackingPreventionDebugModeEnabledIsForced;
    WKPreferences *__wkPreferences;
}

+ (id)_webViewConfigurationForBrowsingMode:(unsigned long long)arg1 relatedWebView:(id)arg2 pageGroup:(struct OpaqueWKPageGroup *)arg3 preferencesManager:(id)arg4;
+ (id)readerWebViewConfigurationForBrowsingMode:(unsigned long long)arg1 relatedWebView:(id)arg2;
+ (id)contentWebViewConfigurationForBrowsingMode:(unsigned long long)arg1;
+ (void)toggleInternalDebugFeatureInContentPageGroupPreferences:(id)arg1;
+ (BOOL)isInternalDebugFeatureEnabled:(id)arg1;
+ (void)resetAllExperimentalFeaturesToDefaultValues;
+ (void)toggleExperimentalFeatureInContentPageGroupPreferences:(id)arg1;
+ (BOOL)isExperimentalFeatureEnabled:(id)arg1;
+ (id)automationPreferencesWithConfiguration:(id)arg1;
+ (void)addDefaultWKWebViewSettingsToDictionary:(id)arg1;
+ (id)siteMetadataFetcherPageGroupPreferencesManager;
+ (id)webArchiveGenerationPageGroupPreferencesManager;
+ (id)readerWebArchiveGenerationPageGroupPreferencesManager;
+ (id)readingListFetcherPageGroupPreferencesManager;
+ (id)readerPageGroupPreferencesManager;
+ (id)contentPageGroupPreferencesManager;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) WKPreferences *_wkPreferences; // @synthesize _wkPreferences=__wkPreferences;
@property(readonly, nonatomic) BOOL intelligentTrackingPreventionDebugModeEnabledIsForced; // @synthesize intelligentTrackingPreventionDebugModeEnabledIsForced=_intelligentTrackingPreventionDebugModeEnabledIsForced;
@property(readonly, nonatomic) BOOL webSecurityEnabledIsForced;
@property(readonly, nonatomic) BOOL webGLEnabledIsForced;
@property(readonly, nonatomic) BOOL webAudioEnabledIsForced;
@property(readonly, nonatomic) BOOL webArchiveDebugModeEnabledIsForced;
@property(readonly, nonatomic) BOOL wantsBalancedSetDefersLoadingBehaviorIsForced;
@property(readonly, nonatomic) BOOL visibleDebugOverlayRegionsIsForced;
@property(readonly, nonatomic) BOOL viewGestureDebuggingEnabledIsForced;
@property(readonly, nonatomic) BOOL usesPageCacheIsForced;
@property(readonly, nonatomic) BOOL useGiantTilesIsForced;
@property(readonly, nonatomic) BOOL universalAccessFromFileURLsAllowedIsForced;
@property(readonly, nonatomic) BOOL tiledScrollingIndicatorVisibleIsForced;
@property(readonly, nonatomic) BOOL textAreasAreResizableIsForced;
@property(readonly, nonatomic) BOOL telephoneNumberDetectionIsEnabledIsForced;
@property(readonly, nonatomic) BOOL tabFocusesLinksIsForced;
@property(readonly, nonatomic) BOOL suppressesIncrementalRenderingIsForced;
@property(readonly, nonatomic) BOOL subpixelAntialiasedLayerTextEnabledIsForced;
@property(readonly, nonatomic) BOOL storageBlockingPolicyIsForced;
@property(readonly, nonatomic) BOOL simpleLineLayoutEnabledIsForced;
@property(readonly, nonatomic) BOOL simpleLineLayoutDebugBordersEnabledIsForced;
@property(readonly, nonatomic) BOOL showsToolTipOverTruncatedTextIsForced;
@property(readonly, nonatomic) BOOL shouldSuppressKeyboardInputDuringProvisionalNavigationIsForced;
@property(readonly, nonatomic) BOOL shouldPrintBackgroundsIsForced;
@property(readonly, nonatomic) BOOL shouldAllowUserInstalledFontsIsForced;
@property(readonly, nonatomic) BOOL serviceControlsEnabledIsForced;
@property(readonly, nonatomic) BOOL resourceUsageOverlayVisibleIsForced;
@property(readonly, nonatomic) BOOL requiresUserGestureForVideoPlaybackIsForced;
@property(readonly, nonatomic) BOOL requiresUserGestureForAudioPlaybackIsForced;
@property(readonly, nonatomic) BOOL plugInSnapshottingEnabledIsForced;
@property(readonly, nonatomic) BOOL plugInsEnabledIsForced;
@property(readonly, nonatomic) BOOL peerConnectionEnabledIsForced;
@property(readonly, nonatomic) BOOL pdfPluginEnabledIsForced;
@property(readonly, nonatomic) BOOL pageVisibilityBasedProcessSuppressionEnabledIsForced;
@property(readonly, nonatomic) BOOL pageCacheSupportsPluginsIsForced;
@property(readonly, nonatomic) BOOL offlineApplicationCacheIsEnabledIsForced;
@property(readonly, nonatomic) BOOL notificationsEnabledIsForced;
@property(readonly, nonatomic) BOOL needsStorageAccessFromFileURLsQuirkIsForced;
@property(readonly, nonatomic) BOOL needsSiteSpecificQuirksIsForced;
@property(readonly, nonatomic) BOOL mockCaptureDevicesEnabledIsForced;
@property(readonly, nonatomic) BOOL minimumFontSizeIsForced;
@property(readonly, nonatomic) BOOL mediaStreamEnabledIsForced;
@property(readonly, nonatomic) BOOL mediaSourceEnabledIsForced;
@property(readonly, nonatomic) BOOL mediaDevicesEnabledIsForced;
@property(readonly, nonatomic) BOOL mediaCaptureRequiresSecureConnectionIsForced;
@property(readonly, nonatomic) BOOL mainContentUserGestureOverrideEnabledIsForced;
@property(readonly, nonatomic) BOOL logsPageMessagesToSystemConsoleEnabledIsForced;
@property(readonly, nonatomic) BOOL localFileContentSniffingEnabledIsForced;
@property(readonly, nonatomic) BOOL loadsImagesAutomaticallyIsForced;
@property(readonly, nonatomic) BOOL legacyEncryptedMediaAPIEnabledIsForced;
@property(readonly, nonatomic) BOOL javaScriptEnabledIsForced;
@property(readonly, nonatomic) BOOL javaScriptCanOpenWindowsAutomaticallyIsForced;
@property(readonly, nonatomic) BOOL javaEnabledForLocalFilesIsForced;
@property(readonly, nonatomic) BOOL javaEnabledIsForced;
@property(readonly, nonatomic) BOOL invisibleMediaAutoplayNotPermittedIsForced;
@property(readonly, nonatomic) BOOL inlineMediaPlaybackRequiresPlaysInlineAttributeIsForced;
@property(readonly, nonatomic) BOOL iceCandidateFilteringEnabledIsForced;
@property(readonly, nonatomic) BOOL hiddenPageDOMTimerThrottlingEnabledIsForced;
@property(readonly, nonatomic) BOOL hiddenPageDOMTimerThrottlingAutoIncreasesIsForced;
@property(readonly, nonatomic) BOOL fullScreenEnabledIsForced;
@property(readonly, nonatomic) BOOL enumeratingAllNetworkInterfacesEnabledIsForced;
@property(readonly, nonatomic) BOOL editableLinkBehaviorIsForced;
@property(readonly, nonatomic) BOOL domTimersThrottlingEnabledIsForced;
@property(readonly, nonatomic) BOOL dnsPrefetchingEnabledIsForced;
@property(readonly, nonatomic) BOOL diagnosticLoggingEnabledIsForced;
@property(readonly, nonatomic) BOOL developerExtrasEnabledIsForced;
@property(readonly, nonatomic) BOOL defaultTextEncodingNameIsForced;
@property(readonly, nonatomic) BOOL compositingRepaintCountersVisibleIsForced;
@property(readonly, nonatomic) BOOL compositingBordersVisibleIsForced;
@property(readonly, nonatomic) BOOL canvasUsesAcceleratedDrawingIsForced;
@property(readonly, nonatomic) BOOL backspaceKeyNavigationEnabledIsForced;
@property(readonly, nonatomic) BOOL avFoundationEnabledIsForced;
@property(readonly, nonatomic) BOOL authorAndUserStylesEnabledIsForced;
@property(readonly, nonatomic) BOOL asynchronousPluginInitializationEnabledIsForced;
@property(readonly, nonatomic) BOOL artificialPluginInitializationDelayEnabledIsForced;
@property(readonly, nonatomic) BOOL applePayEnabledIsForced;
@property(readonly, nonatomic) BOOL applePayCapabilityDisclosureAllowedIsForced;
@property(readonly, nonatomic) BOOL allowsPictureInPictureMediaPlaybackIsForced;
@property(readonly, nonatomic) BOOL allowsInlineMediaPlaybackIsForced;
@property(readonly, nonatomic) BOOL allowFileAccessFromFileURLsIsForced;
@property(readonly, nonatomic) BOOL aggressiveTileRetentionEnabledIsForced;
@property(readonly, nonatomic) BOOL acceleratedDrawingEnabledIsForced;
@property(readonly, nonatomic) BOOL acceleratedCompositingEnabledIsForced;
@property(nonatomic) BOOL webSecurityEnabled;
@property(nonatomic) BOOL webGLEnabled;
@property(nonatomic) BOOL webAudioEnabled;
@property(nonatomic) BOOL webArchiveDebugModeEnabled;
@property(nonatomic) BOOL wantsBalancedSetDefersLoadingBehavior;
@property(nonatomic) unsigned long long visibleDebugOverlayRegions;
@property(nonatomic) BOOL viewGestureDebuggingEnabled;
@property(nonatomic) BOOL usesPageCache;
@property(nonatomic) BOOL useGiantTiles;
@property(nonatomic) BOOL universalAccessFromFileURLsAllowed;
@property(nonatomic) BOOL tiledScrollingIndicatorVisible;
@property(nonatomic) BOOL textAreasAreResizable;
@property(nonatomic) BOOL telephoneNumberDetectionIsEnabled;
@property(nonatomic) BOOL tabFocusesLinks;
@property(nonatomic) BOOL suppressesIncrementalRendering;
@property(nonatomic) BOOL subpixelAntialiasedLayerTextEnabled;
@property(nonatomic) long long storageBlockingPolicy;
@property(nonatomic) BOOL simpleLineLayoutEnabled;
@property(nonatomic) BOOL simpleLineLayoutDebugBordersEnabled;
@property(nonatomic) BOOL showsToolTipOverTruncatedText;
@property(nonatomic) BOOL shouldSuppressKeyboardInputDuringProvisionalNavigation;
@property(nonatomic) BOOL shouldPrintBackgrounds;
@property(nonatomic) BOOL shouldAllowUserInstalledFonts;
@property(nonatomic) BOOL serviceControlsEnabled;
@property(nonatomic) BOOL resourceUsageOverlayVisible;
@property(nonatomic) BOOL requiresUserGestureForVideoPlayback;
@property(nonatomic) BOOL requiresUserGestureForAudioPlayback;
@property(nonatomic) BOOL plugInSnapshottingEnabled;
@property(nonatomic) BOOL plugInsEnabled;
@property(nonatomic) BOOL peerConnectionEnabled;
@property(nonatomic) BOOL pdfPluginEnabled;
@property(nonatomic) BOOL pageVisibilityBasedProcessSuppressionEnabled;
@property(nonatomic) BOOL pageCacheSupportsPlugins;
@property(nonatomic) BOOL offlineApplicationCacheIsEnabled;
@property(nonatomic) BOOL notificationsEnabled;
@property(nonatomic) BOOL needsStorageAccessFromFileURLsQuirk;
@property(nonatomic) BOOL needsSiteSpecificQuirks;
@property(nonatomic) BOOL mockCaptureDevicesEnabled;
@property(nonatomic) double minimumFontSize;
@property(nonatomic) BOOL mediaStreamEnabled;
@property(nonatomic) BOOL mediaSourceEnabled;
@property(nonatomic) BOOL mediaDevicesEnabled;
@property(nonatomic) BOOL mediaCaptureRequiresSecureConnection;
@property(nonatomic) BOOL mainContentUserGestureOverrideEnabled;
@property(nonatomic) BOOL logsPageMessagesToSystemConsoleEnabled;
@property(nonatomic) BOOL localFileContentSniffingEnabled;
@property(nonatomic) BOOL loadsImagesAutomatically;
@property(nonatomic) BOOL legacyEncryptedMediaAPIEnabled;
@property(nonatomic) BOOL javaScriptEnabled;
@property(nonatomic) BOOL javaScriptCanOpenWindowsAutomatically;
@property(nonatomic) BOOL javaEnabledForLocalFiles;
@property(nonatomic) BOOL javaEnabled;
@property(nonatomic) BOOL intelligentTrackingPreventionDebugModeEnabled;
@property(nonatomic) BOOL invisibleMediaAutoplayNotPermitted;
@property(nonatomic) BOOL inlineMediaPlaybackRequiresPlaysInlineAttribute;
@property(nonatomic) BOOL iceCandidateFilteringEnabled;
@property(nonatomic) BOOL hiddenPageDOMTimerThrottlingEnabled;
@property(nonatomic) BOOL hiddenPageDOMTimerThrottlingAutoIncreases;
@property(nonatomic) BOOL fullScreenEnabled;
@property(nonatomic) BOOL enumeratingAllNetworkInterfacesEnabled;
@property(nonatomic) long long editableLinkBehavior;
@property(nonatomic) BOOL domTimersThrottlingEnabled;
@property(nonatomic, setter=setDNSPrefetchingEnabled:) BOOL dnsPrefetchingEnabled;
@property(nonatomic) BOOL diagnosticLoggingEnabled;
@property(nonatomic) BOOL developerExtrasEnabled;
@property(copy, nonatomic) NSString *defaultTextEncodingName;
@property(nonatomic) BOOL compositingRepaintCountersVisible;
@property(nonatomic) BOOL compositingBordersVisible;
@property(nonatomic) BOOL canvasUsesAcceleratedDrawing;
- (void)setBackspaceKeyNavigationEnabled:(BOOL)arg1;
@property(readonly, nonatomic) BOOL backspaceKeyNavigationEnabled;
@property(nonatomic) BOOL avFoundationEnabled;
@property(nonatomic) BOOL authorAndUserStylesEnabled;
@property(nonatomic) BOOL asynchronousPluginInitializationEnabled;
- (void)setSandboxingAllPlugInsAlways:(BOOL)arg1;
@property(nonatomic) BOOL sandboxingAllPlugIns;
@property(nonatomic) BOOL artificialPluginInitializationDelayEnabled;
@property(nonatomic) BOOL applePayEnabled;
@property(nonatomic) BOOL applePayCapabilityDisclosureAllowed;
@property(nonatomic) BOOL allowsPictureInPictureMediaPlayback;
@property(nonatomic) BOOL allowsInlineMediaPlayback;
@property(nonatomic) BOOL allowFileAccessFromFileURLs;
@property(nonatomic) BOOL aggressiveTileRetentionEnabled;
@property(nonatomic) BOOL acceleratedDrawingEnabled;
@property(nonatomic) BOOL acceleratedCompositingEnabled;
- (void)_applyPreferencesToWKWebViewConfiguration:(id)arg1;
- (void)_readContentPageGroupInternalDebugPreferencesFromDefaults;
- (void)_readContentPageGroupExperimentalPreferencesFromDefaults;
- (void)_initializeSiteMetadataFetcherPageGroupPreferencesManager;
- (void)_initializeWebArchiveGenerationPageGroupPreferencesManager;
- (void)_initializeReaderWebArchiveGenerationPageGroupPreferencesManager;
- (void)_initializeReadingListFetcherPageGroupPreferencesManager;
- (void)_initializeReaderPageGroupPreferencesManager;
- (void)_readContentPageGroupPreferencesFromDefaults;
- (BOOL)_getFloatFromUserDefaults:(id)arg1 ifObjectExistsForKey:(id)arg2 legacyWebKitKey:(id)arg3 value:(float *)arg4;
- (BOOL)_getIntegerFromUserDefaults:(id)arg1 ifObjectExistsForKey:(id)arg2 legacyWebKitKey:(id)arg3 value:(long long *)arg4;
- (BOOL)_getStringFromUserDefaults:(id)arg1 ifObjectExistsForKey:(id)arg2 legacyWebKitKey:(id)arg3 value:(id *)arg4;
- (BOOL)_getBoolFromUserDefaults:(id)arg1 ifObjectExistsForKey:(id)arg2 legacyWebKitKey:(id)arg3 value:(char *)arg4;
- (BOOL)_migrateWKViewContentPageGroupPreferencesIfNecessary;
- (void)_initializeContentPageGroupForWKWebViewPreferences;
- (void)_initializeContentPageGroupForWKViewPreferences;
- (id)_initWithPreferencesType:(long long)arg1;
- (id)init;
- (void)setPreferencesForPageGroup:(struct PageGroup *)arg1;

@end

