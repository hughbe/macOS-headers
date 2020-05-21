//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AOSUI/MMService.h>

#import <AOSUI/MMMobileDocumentsTableRowDelegate-Protocol.h>
#import <AOSUI/MMServicePreflightProtocol-Protocol.h>
#import <AOSUI/MMWebKitViewControllerDelegate-Protocol.h>
#import <AOSUI/NSTouchBarProvider-Protocol.h>

@class MMModalDialog, MMWebKitViewController, NSArray, NSButton, NSDictionary, NSImageView, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue, NSOutlineView, NSProgress, NSProgressIndicator, NSString, NSTabView, NSTabViewItem, NSTableView, NSTextField, NSTimer, NSTouchBar, NSView, NSWindow, iCloudTouchBarController;
@protocol OS_dispatch_semaphore;

@interface MMMobileDocumentsService : MMService <NSTouchBarProvider, MMWebKitViewControllerDelegate, MMServicePreflightProtocol, MMMobileDocumentsTableRowDelegate>
{
    NSMutableArray *cachedListOfApps;
    NSMutableDictionary *_rowViews;
    NSMutableArray *cachedListOfLiverPoolApps;
    NSMutableDictionary *_liverPoolrowViews;
    MMWebKitViewController *_webKitViewController;
    MMModalDialog *_confirmModalDialog;
    NSProgress *_confirmProgress;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_semaphore> *_stopDialogSemaphore;
    double _progressSpinnerStopTime;
    BOOL _isMigrationInProgress;
    BOOL _shouldSignOut;
    BOOL _preflightDialogIsDone;
    BOOL _preflightCalledForSignout;
    BOOL _isSigningOut;
    BOOL _isShowingDisableStop;
    BOOL _didEncounterLoadError;
    NSWindow *_mobileDocumentsOptionsSheet;
    NSTextField *_mobileDocumentsOptionsTitle;
    NSButton *_mobileDocumentDoneButton;
    NSTableView *_mobileDocumentsOptionsTable;
    NSTabView *_optionsTab;
    NSTabViewItem *_documentsAndDataTab;
    NSTabViewItem *_liverpoolTab;
    NSTextField *_lookMeUpByEmailOptionsTitle;
    NSOutlineView *_liverPoolOptionsTable;
    iCloudTouchBarController *_optionsTouchBarController;
    iCloudTouchBarController *_disableiCloudDriveTouchBarController;
    iCloudTouchBarController *_upgradeDevicesTouchBarController;
    NSArray *_upgradeDeviceList;
    NSArray *_incompatibleDeviceList;
    unsigned long long _devicesState;
    NSDictionary *_deviceList;
    NSWindow *_upgradeDevicesSheet;
    NSImageView *_upgradeDevicesImageView;
    NSTextField *_upgradeDevicesTitleTextField;
    NSButton *_upgradeDevicesCancelButton;
    NSButton *_upgradeDevicesContinueButton;
    NSTextField *_upgradeDevicesMessageTextField;
    NSTextField *_upgradeDevicesSecondaryMessageTextField;
    NSLayoutConstraint *_upgradeDevicesSingleDeviceTypeConstraint;
    NSLayoutConstraint *_upgradeDevicesSecondaryDeviceTypeConstraint;
    NSTimer *_migrationStatusCheckTimer;
    NSWindow *_disableiCloudDriveSheet;
    NSView *_disableiCloudDriveSheetView;
    NSImageView *_disableiCloudDriveImageView;
    NSTextField *_disableiCloudDriveTitleTextField;
    NSTextField *_disableiCloudDriveMessageTextField;
    NSButton *_disableiCloudDriveCancelButton;
    NSButton *_disableiCloudDriveStopButton;
    NSProgressIndicator *_disableiCloudDriveProgress;
    NSProgress *_downloadProgress;
    NSProgress *_uploadProgress;
    NSTextField *_disableiCloudDriveProgressTextField;
    NSProgress *_stopProgress;
    CDUnknownBlockType _stopCompletionHandler;
    NSLayoutConstraint *_exsistingProgressTextToButtonConstraint;
}

+ (id)keyPathsForValuesAffectingShowSecondaryDeviceTypeField;
- (void).cxx_destruct;
@property __weak NSLayoutConstraint *exsistingProgressTextToButtonConstraint; // @synthesize exsistingProgressTextToButtonConstraint=_exsistingProgressTextToButtonConstraint;
@property(nonatomic) BOOL didEncounterLoadError; // @synthesize didEncounterLoadError=_didEncounterLoadError;
@property(copy) CDUnknownBlockType stopCompletionHandler; // @synthesize stopCompletionHandler=_stopCompletionHandler;
@property(retain) NSProgress *stopProgress; // @synthesize stopProgress=_stopProgress;
@property __weak NSTextField *disableiCloudDriveProgressTextField; // @synthesize disableiCloudDriveProgressTextField=_disableiCloudDriveProgressTextField;
@property(retain) NSProgress *uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(retain) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property __weak NSProgressIndicator *disableiCloudDriveProgress; // @synthesize disableiCloudDriveProgress=_disableiCloudDriveProgress;
@property __weak NSButton *disableiCloudDriveStopButton; // @synthesize disableiCloudDriveStopButton=_disableiCloudDriveStopButton;
@property __weak NSButton *disableiCloudDriveCancelButton; // @synthesize disableiCloudDriveCancelButton=_disableiCloudDriveCancelButton;
@property __weak NSTextField *disableiCloudDriveMessageTextField; // @synthesize disableiCloudDriveMessageTextField=_disableiCloudDriveMessageTextField;
@property __weak NSTextField *disableiCloudDriveTitleTextField; // @synthesize disableiCloudDriveTitleTextField=_disableiCloudDriveTitleTextField;
@property __weak NSImageView *disableiCloudDriveImageView; // @synthesize disableiCloudDriveImageView=_disableiCloudDriveImageView;
@property __weak NSView *disableiCloudDriveSheetView; // @synthesize disableiCloudDriveSheetView=_disableiCloudDriveSheetView;
@property(retain) NSWindow *disableiCloudDriveSheet; // @synthesize disableiCloudDriveSheet=_disableiCloudDriveSheet;
@property BOOL isMigrationInProgress; // @synthesize isMigrationInProgress=_isMigrationInProgress;
@property BOOL isShowingDisableStop; // @synthesize isShowingDisableStop=_isShowingDisableStop;
@property(retain) NSTimer *migrationStatusCheckTimer; // @synthesize migrationStatusCheckTimer=_migrationStatusCheckTimer;
@property __weak NSLayoutConstraint *upgradeDevicesSecondaryDeviceTypeConstraint; // @synthesize upgradeDevicesSecondaryDeviceTypeConstraint=_upgradeDevicesSecondaryDeviceTypeConstraint;
@property __weak NSLayoutConstraint *upgradeDevicesSingleDeviceTypeConstraint; // @synthesize upgradeDevicesSingleDeviceTypeConstraint=_upgradeDevicesSingleDeviceTypeConstraint;
@property __weak NSTextField *upgradeDevicesSecondaryMessageTextField; // @synthesize upgradeDevicesSecondaryMessageTextField=_upgradeDevicesSecondaryMessageTextField;
@property __weak NSTextField *upgradeDevicesMessageTextField; // @synthesize upgradeDevicesMessageTextField=_upgradeDevicesMessageTextField;
@property __weak NSButton *upgradeDevicesContinueButton; // @synthesize upgradeDevicesContinueButton=_upgradeDevicesContinueButton;
@property __weak NSButton *upgradeDevicesCancelButton; // @synthesize upgradeDevicesCancelButton=_upgradeDevicesCancelButton;
@property __weak NSTextField *upgradeDevicesTitleTextField; // @synthesize upgradeDevicesTitleTextField=_upgradeDevicesTitleTextField;
@property __weak NSImageView *upgradeDevicesImageView; // @synthesize upgradeDevicesImageView=_upgradeDevicesImageView;
@property(retain) NSWindow *upgradeDevicesSheet; // @synthesize upgradeDevicesSheet=_upgradeDevicesSheet;
@property BOOL isSigningOut; // @synthesize isSigningOut=_isSigningOut;
@property BOOL preflightCalledForSignout; // @synthesize preflightCalledForSignout=_preflightCalledForSignout;
@property BOOL preflightDialogIsDone; // @synthesize preflightDialogIsDone=_preflightDialogIsDone;
@property BOOL shouldSignOut; // @synthesize shouldSignOut=_shouldSignOut;
@property(retain) NSDictionary *deviceList; // @synthesize deviceList=_deviceList;
@property(nonatomic) unsigned long long devicesState; // @synthesize devicesState=_devicesState;
@property(retain) NSArray *incompatibleDeviceList; // @synthesize incompatibleDeviceList=_incompatibleDeviceList;
@property(retain) NSArray *upgradeDeviceList; // @synthesize upgradeDeviceList=_upgradeDeviceList;
@property(retain) iCloudTouchBarController *upgradeDevicesTouchBarController; // @synthesize upgradeDevicesTouchBarController=_upgradeDevicesTouchBarController;
@property(retain) iCloudTouchBarController *disableiCloudDriveTouchBarController; // @synthesize disableiCloudDriveTouchBarController=_disableiCloudDriveTouchBarController;
@property(retain) iCloudTouchBarController *optionsTouchBarController; // @synthesize optionsTouchBarController=_optionsTouchBarController;
@property __weak NSOutlineView *liverPoolOptionsTable; // @synthesize liverPoolOptionsTable=_liverPoolOptionsTable;
@property(retain) MMWebKitViewController *webKitViewController; // @synthesize webKitViewController=_webKitViewController;
@property(retain) NSProgress *confirmProgress; // @synthesize confirmProgress=_confirmProgress;
@property(retain) MMModalDialog *confirmModalDialog; // @synthesize confirmModalDialog=_confirmModalDialog;
@property __weak NSTextField *lookMeUpByEmailOptionsTitle; // @synthesize lookMeUpByEmailOptionsTitle=_lookMeUpByEmailOptionsTitle;
@property __weak NSTabViewItem *liverpoolTab; // @synthesize liverpoolTab=_liverpoolTab;
@property __weak NSTabViewItem *documentsAndDataTab; // @synthesize documentsAndDataTab=_documentsAndDataTab;
@property __weak NSTabView *optionsTab; // @synthesize optionsTab=_optionsTab;
@property __weak NSTableView *mobileDocumentsOptionsTable; // @synthesize mobileDocumentsOptionsTable=_mobileDocumentsOptionsTable;
@property __weak NSButton *mobileDocumentDoneButton; // @synthesize mobileDocumentDoneButton=_mobileDocumentDoneButton;
@property __weak NSTextField *mobileDocumentsOptionsTitle; // @synthesize mobileDocumentsOptionsTitle=_mobileDocumentsOptionsTitle;
@property(retain) NSWindow *mobileDocumentsOptionsSheet; // @synthesize mobileDocumentsOptionsSheet=_mobileDocumentsOptionsSheet;
- (void)_closeWebViewWindow;
- (void)callCompletionWithResult:(BOOL)arg1;
- (void)mmWebKitViewControllerDidDismiss:(id)arg1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(id)arg1 error:(id)arg2;
- (void)mmWebKitViewControllerDidSucceed:(id)arg1;
- (void)mmWebKitViewControllerDidCancel:(id)arg1;
- (_Bool)iCloudHomeShouldEnable;
- (void)openFinderWindowOnDisable;
- (void)revealFoldersInFinder;
- (void)DSEEnableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)preflightDSEEnableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)endiCloudDriveSheet:(id)arg1;
- (void)endUploadDisableiCloudDriveSheet:(long long)arg1;
- (void)showUploadDisableiCloudDriveSheetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleDisableFailed:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)endDownloadDisableiCloudDriveSheet:(long long)arg1;
- (void)disableStop:(id)arg1;
- (void)showDownloadDisableiCloudDriveSheetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleOperationCompletion:(id)arg1;
- (void)uploadAndOptOutOfiCloudDriveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)uploadAndSignoutOfiCloudDriveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadAndOptOutOfiCloudDriveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)downloadAndSignoutOfiCloudDriveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showManageWebView;
- (void)showUpsellStorageWebView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showWillExceedMaxTierQuotaSheet:(id)arg1 storageAvailable:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleWillExceedCloudStorage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)DebugUsageDictValueForKey;
- (id)getiCloudStorageUsageDict;
- (id)getUsageDictionaries;
- (BOOL)brCanIngestFolderWithStats:(id)arg1;
- (BOOL)validateUsageDictionary:(id)arg1;
- (id)totalSpaceNeeded:(id)arg1;
- (id)getDocumentsDict;
- (id)getDesktopDict;
- (id)_readDeviceArrayFromDefaults:(id)arg1;
- (id)testingNotEligibleDevicesList;
- (id)testingEligibleDevicesList;
- (id)_arrayToCSVString:(id)arg1;
- (id)_truncatedDeviceString:(id)arg1 size:(unsigned long long)arg2;
- (id)_attributedDeviceListString:(id)arg1 lines:(unsigned long long)arg2;
- (void)_updateSecondaryDeviceTypeField;
- (void)_updatePrimaryDeviceTypeField;
- (id)incompatibleDevicesDescriptionString;
- (id)upgradeDevicesDescriptionString;
- (void)_updateConstraints;
- (void)_updateSheet;
@property(readonly) BOOL showSecondaryDeviceTypeField;
- (void)iCloudDesktopPressed:(BOOL)arg1 withRow:(id)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)mobileDocumentsLookMeUpTableRowDidChange:(id)arg1;
- (void)mobileDocumentsTableRowDidChange:(id)arg1 withRow:(id)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)monitorGlobalActivity;
- (void)confirmUserWantsToDisableiCloudDriveAndDesktopWithDialogCompletion:(CDUnknownBlockType)arg1;
- (void)_serviceEnableChanged:(id)arg1;
- (void)willSelect;
- (void)didBecomeActive;
- (void)setiCloudHome:(BOOL)arg1 withDataclassOption:(id)arg2;
- (void)migrationStatusTimerFireMethod:(id)arg1;
- (void)stopListeningForACAccountStoreNotifications;
- (void)startListeningForACAccountStoreNotifications;
- (void)_acaccountStoreChanged:(id)arg1;
- (void)_setMigrationCompleteOnAppleAccount;
- (void)endModalDialog:(id)arg1;
- (void)reloadLiverPoolOptionsData:(id)arg1;
- (void)showMobileDocumentsOptionsSheet:(id)arg1;
- (void)_updateOptionsUI;
- (void)endDevicesConfirmationSheet:(long long)arg1;
- (void)showMultipleDevicesConfirmationSheetWithParentWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showNoDevicesMigrationConfirmationSheet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_showMigrationConfirmationSheet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_isMigrationComplete;
- (BOOL)_getMobileDevices;
- (id)_dsid;
- (BOOL)_isiCloudHomeAvailable;
- (BOOL)_isiCloudHomeEnabled;
- (BOOL)_areChangesPending;
- (void)loadNibsNeeded;
- (BOOL)isDataService;
- (void)showMoreInfo:(id)arg1;
- (void)_updateUI;
- (void)setEnabled:(BOOL)arg1 creating:(BOOL)arg2 withWindow:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)icon;
@property(readonly) NSTouchBar *touchBar;
- (void)dealloc;
- (id)initWithServiceID:(id)arg1 forAccount:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property NSWindow *parentWindow; // @dynamic parentWindow;
@property(readonly) Class superclass;

@end

