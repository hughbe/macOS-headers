//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AOSUI/MMService.h>

#import <AOSUI/MMLinkTextFieldDelegate-Protocol.h>
#import <AOSUI/MMServicePreflightProtocol-Protocol.h>
#import <AOSUI/MMWebKitViewControllerDelegate-Protocol.h>

@class CPSConfigurationClient, MMPromptForLocalSecret, MMWebKitViewController, NSMutableDictionary, NSString;

@interface MMMediaStreamService : MMService <MMWebKitViewControllerDelegate, MMLinkTextFieldDelegate, MMServicePreflightProtocol>
{
    MMWebKitViewController *_webKitViewController;
    BOOL _hasCheckedQuota;
    BOOL _hasCheckedRampedState;
    BOOL _didEncounterLoadError;
    NSString *_infoButtonURLString;
    NSMutableDictionary *_cachedExitingStatus;
    CPSConfigurationClient *_gSharedCPSConfigurationClient;
    MMPromptForLocalSecret *_gSharedPromptForLocalSecret;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL didEncounterLoadError; // @synthesize didEncounterLoadError=_didEncounterLoadError;
@property(retain) MMPromptForLocalSecret *gSharedPromptForLocalSecret; // @synthesize gSharedPromptForLocalSecret=_gSharedPromptForLocalSecret;
@property(retain) CPSConfigurationClient *gSharedCPSConfigurationClient; // @synthesize gSharedCPSConfigurationClient=_gSharedCPSConfigurationClient;
@property(retain) NSMutableDictionary *cachedExitingStatus; // @synthesize cachedExitingStatus=_cachedExitingStatus;
@property(retain) NSString *infoButtonURLString; // @synthesize infoButtonURLString=_infoButtonURLString;
@property BOOL hasCheckedRampedState; // @synthesize hasCheckedRampedState=_hasCheckedRampedState;
@property(retain) MMWebKitViewController *webKitViewController; // @synthesize webKitViewController=_webKitViewController;
- (id)_simulateHasReferencedFiles;
- (id)_simulateMediaServiceExitType;
- (id)_simulateMediaServiceExitInterval;
- (id)_simulateMediaServiceLibrarySizeExceeded;
- (id)_simulateMediaServiceIsRamped;
- (id)_simulateMediaServiceExceedsQuota;
- (void)DSEEnableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)preflightDSEEnableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)preflightForSignoutWithWindow:(id)arg1;
- (BOOL)hasPreflightAction;
- (void)_closeWebViewWindow;
- (void)callCompletionWithResult:(BOOL)arg1;
- (void)mmWebKitViewControllerDidDismiss:(id)arg1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitViewControllerDidSucceed:(id)arg1;
- (void)mmWebKitViewControllerDidCancel:(id)arg1;
- (void)showManageWebView;
- (void)showUpsellStorageWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)clickedOnLink:(id)arg1;
- (void)mtLogStorageActivity:(id)arg1;
- (id)exitMessage:(long long)arg1 durationInterval:(double)arg2;
- (id)exitCheckboxAttributedStringForDurationInterval:(double)arg1;
- (id)exceededQuotaString;
- (id)rampedStateString;
- (id)sharedLocalSecretPrompt;
- (id)sharedConfigurationClient;
- (id)_photoLibraryReferencedFilesCount;
- (id)_isExiting;
- (id)_rampedState;
- (void)_refreshRampStateWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_isQuotaExceeded;
- (long long)_willLibraryExceedQuota:(id)arg1 storageAvailable:(id *)arg2;
- (id)iCloudPhotoLibraryStorage:(id)arg1;
- (id)_photoLibraryStatusInformation;
- (id)_photoLibraryCountOfUndownloadedAssets:(id *)arg1;
- (id)_photoLibraryExitInterval;
- (BOOL)_photoLibraryNotConnected;
- (BOOL)_photoLibraryHasThumbnailsOnly;
- (BOOL)_isPhotoLibraryOnHFSVolume;
- (BOOL)_hasUnimportedPhotos;
- (void)showEnableExceedsVolumeSizeSheet:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showDisableConfirmationSheet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showInsufficentDownloadSpaceSheet:(unsigned long long)arg1;
- (void)showNoAttachedPhotoLibrarySheet:(id)arg1 completionHander:(CDUnknownBlockType)arg2;
- (void)showDownloadOriginalsSheet:(id)arg1 completionHander:(CDUnknownBlockType)arg2;
- (void)showLibraryUpdatingSheet:(id)arg1 completionHander:(CDUnknownBlockType)arg2;
- (void)showDisableErrorSheet;
- (void)_handleDisableCloudPhotoLibrary:(CDUnknownBlockType)arg1;
- (void)showWillExceedMaxTierQuotaSheet:(id)arg1 storageAvailable:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showMayExceedMaxTierQuotaSheet:(id)arg1 storageAvailable:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showWillExceedQuotaSheet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showChooseiCloudPhotoLibrarySheet;
- (void)showiCloudPhotoLibraryReferencedFilesSheet:(id)arg1;
- (void)showiCloudPhotoLibraryHFSWarning;
- (void)showiCloudPhotoLibraryRampStateDialog;
- (void)_servicePropertiesChanged:(id)arg1;
- (void)_serviceEnableChanged:(id)arg1;
- (BOOL)hasDataToMerge;
- (BOOL)isDataService;
- (void)_handleWillExceedCloudStorage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 withWindow:(id)arg3;
- (_Bool)needsPassword;
- (void)_setEnabled:(BOOL)arg1 withOptions:(int)arg2;
- (void)_setEnabled:(BOOL)arg1;
- (id)icon;
- (void)dealloc;
- (id)initWithServiceID:(id)arg1 forAccount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

