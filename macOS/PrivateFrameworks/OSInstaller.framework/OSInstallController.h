//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OSInstaller/OSIPowerButtonMonitorDelegate-Protocol.h>
#import <OSInstaller/OSIPowerControllerDelegate-Protocol.h>
#import <OSInstaller/SKManagerListener-Protocol.h>

@class IASUnifiedProgressClient, NSDate, NSError, NSMutableArray, NSMutableSet, NSNumber, NSString, NSTimer, OSIDebuggerTool, OSIPersonalizedManifests, OSIPowerButtonMonitor, OSIPowerController, OSInstallOptions, PKDistributionController, SMPaths;
@protocol OSInstallControllerDelegate, OS_dispatch_queue;

@interface OSInstallController : NSObject <OSIPowerControllerDelegate, OSIPowerButtonMonitorDelegate, SKManagerListener>
{
    BOOL _isCurrentlyInstalling;
    BOOL _hasEvaluatedInstallability;
    BOOL _didReblessSuccessfully;
    BOOL _installationCompletedSuccessfully;
    BOOL _needAPFSConvert;
    BOOL _showingStuckUI;
    BOOL _shouldProcessTimeRemaining;
    BOOL _shouldShowPowerButtonWarningText;
    BOOL _targetEvaluationStarted;
    BOOL _hasPickedATarget;
    int _numOfCPIOExtractionRetries;
    NSError *_installCheckFailureReason;
    OSInstallOptions *_options;
    NSObject<OSInstallControllerDelegate> *_delegate;
    NSString *_distPath;
    NSString *_currentStatus;
    double _progressCompleted;
    double _lastProgress;
    double _initialTimeRemaining;
    double _totalNonRunningTimeRemaining;
    NSDate *_lastUpdateDate;
    NSTimer *_progressUpdateCheckTimer;
    NSTimer *_stuckElementTimer;
    double _lastIncommingTime;
    NSNumber *_lastTimeRemaining;
    SMPaths *_pather;
    NSTimer *_powerButtonWarningTextTimer;
    IASUnifiedProgressClient *_progressClient;
    OSIPowerController *_powerManager;
    OSIPowerButtonMonitor *_powerButtonMonitor;
    NSMutableArray *_installOperations;
    NSMutableArray *_validTargets;
    NSMutableArray *_products;
    NSMutableArray *_osSUUpdates;
    NSMutableArray *_invalidTargetsWithErrors;
    OSIPersonalizedManifests *_personalizedManifests;
    OSIDebuggerTool *_osiDebuggerTool;
    NSMutableArray *_distControllers;
    NSMutableArray *_distContainers;
    NSMutableArray *_productTypesToInstallInOrder;
    NSMutableSet *_disabledDistributionControllers;
    NSMutableArray *_thirdPartyProductsToInstall;
    PKDistributionController *_firmwareDistributionController;
    NSMutableArray *_customizationOptions;
    NSObject<OS_dispatch_queue> *_targetEvaluationQueue;
}

+ (id)failureReasonForError:(id)arg1;
+ (id)getPriorOSBuildOnSystemTarget:(id)arg1 withRecoveredItems:(id)arg2;
- (void).cxx_destruct;
@property BOOL hasPickedATarget; // @synthesize hasPickedATarget=_hasPickedATarget;
@property BOOL targetEvaluationStarted; // @synthesize targetEvaluationStarted=_targetEvaluationStarted;
@property(retain) NSObject<OS_dispatch_queue> *targetEvaluationQueue; // @synthesize targetEvaluationQueue=_targetEvaluationQueue;
@property(retain, nonatomic) NSMutableArray *customizationOptions; // @synthesize customizationOptions=_customizationOptions;
@property int numOfCPIOExtractionRetries; // @synthesize numOfCPIOExtractionRetries=_numOfCPIOExtractionRetries;
@property(retain) PKDistributionController *firmwareDistributionController; // @synthesize firmwareDistributionController=_firmwareDistributionController;
@property(retain) NSMutableArray *thirdPartyProductsToInstall; // @synthesize thirdPartyProductsToInstall=_thirdPartyProductsToInstall;
@property(retain) NSMutableSet *disabledDistributionControllers; // @synthesize disabledDistributionControllers=_disabledDistributionControllers;
@property(retain) NSMutableArray *productTypesToInstallInOrder; // @synthesize productTypesToInstallInOrder=_productTypesToInstallInOrder;
@property(retain) NSMutableArray *distContainers; // @synthesize distContainers=_distContainers;
@property(retain) NSMutableArray *distControllers; // @synthesize distControllers=_distControllers;
@property(retain) OSIDebuggerTool *osiDebuggerTool; // @synthesize osiDebuggerTool=_osiDebuggerTool;
@property(retain) OSIPersonalizedManifests *personalizedManifests; // @synthesize personalizedManifests=_personalizedManifests;
@property(retain) NSMutableArray *invalidTargetsWithErrors; // @synthesize invalidTargetsWithErrors=_invalidTargetsWithErrors;
@property(retain) NSMutableArray *osSUUpdates; // @synthesize osSUUpdates=_osSUUpdates;
@property(retain) NSMutableArray *products; // @synthesize products=_products;
@property(retain) NSMutableArray *validTargets; // @synthesize validTargets=_validTargets;
@property(retain) NSMutableArray *installOperations; // @synthesize installOperations=_installOperations;
@property(retain) OSIPowerButtonMonitor *powerButtonMonitor; // @synthesize powerButtonMonitor=_powerButtonMonitor;
@property(retain) OSIPowerController *powerManager; // @synthesize powerManager=_powerManager;
@property(retain) IASUnifiedProgressClient *progressClient; // @synthesize progressClient=_progressClient;
@property(retain) NSTimer *powerButtonWarningTextTimer; // @synthesize powerButtonWarningTextTimer=_powerButtonWarningTextTimer;
@property BOOL shouldShowPowerButtonWarningText; // @synthesize shouldShowPowerButtonWarningText=_shouldShowPowerButtonWarningText;
@property(retain) SMPaths *pather; // @synthesize pather=_pather;
@property(retain) NSNumber *lastTimeRemaining; // @synthesize lastTimeRemaining=_lastTimeRemaining;
@property double lastIncommingTime; // @synthesize lastIncommingTime=_lastIncommingTime;
@property(retain) NSTimer *stuckElementTimer; // @synthesize stuckElementTimer=_stuckElementTimer;
@property(retain) NSTimer *progressUpdateCheckTimer; // @synthesize progressUpdateCheckTimer=_progressUpdateCheckTimer;
@property(retain) NSDate *lastUpdateDate; // @synthesize lastUpdateDate=_lastUpdateDate;
@property double totalNonRunningTimeRemaining; // @synthesize totalNonRunningTimeRemaining=_totalNonRunningTimeRemaining;
@property double initialTimeRemaining; // @synthesize initialTimeRemaining=_initialTimeRemaining;
@property BOOL shouldProcessTimeRemaining; // @synthesize shouldProcessTimeRemaining=_shouldProcessTimeRemaining;
@property double lastProgress; // @synthesize lastProgress=_lastProgress;
@property double progressCompleted; // @synthesize progressCompleted=_progressCompleted;
@property BOOL showingStuckUI; // @synthesize showingStuckUI=_showingStuckUI;
@property(retain) NSString *currentStatus; // @synthesize currentStatus=_currentStatus;
@property BOOL needAPFSConvert; // @synthesize needAPFSConvert=_needAPFSConvert;
@property(retain) NSString *distPath; // @synthesize distPath=_distPath;
@property __weak NSObject<OSInstallControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property BOOL installationCompletedSuccessfully; // @synthesize installationCompletedSuccessfully=_installationCompletedSuccessfully;
@property BOOL didReblessSuccessfully; // @synthesize didReblessSuccessfully=_didReblessSuccessfully;
@property(retain) OSInstallOptions *options; // @synthesize options=_options;
@property(retain) NSError *installCheckFailureReason; // @synthesize installCheckFailureReason=_installCheckFailureReason;
@property BOOL hasEvaluatedInstallability; // @synthesize hasEvaluatedInstallability=_hasEvaluatedInstallability;
@property BOOL isCurrentlyInstalling; // @synthesize isCurrentlyInstalling=_isCurrentlyInstalling;
- (void)powerButtonPressed;
- (void)lowBatteryStatusChanged:(BOOL)arg1;
- (void)_thermalStateDidChange:(id)arg1;
- (void)_queueProgressWatchdog:(id)arg1;
- (void)_queueProgressStuck:(id)arg1;
- (void)operation:(id)arg1 timeRemaining:(double)arg2;
- (double)smoothTimeRemaining:(double)arg1;
- (double)timeRemainingAfter:(id)arg1;
- (void)stopProgressTimer;
- (id)getPreviousShutdownCause;
- (void)reportInstallFailed:(id)arg1;
- (void)reportMutableProductFailedWithError:(id)arg1;
- (void)reportCPIOExtractionRetry:(id)arg1;
- (void)_cleanupVirtualMemoryFolder;
- (id)_createFirmwareDistributionControllerFromProduct:(id)arg1;
- (id)_createDistributionControllerFromProduct:(id)arg1 interfaceType:(id)arg2;
- (id)_createDistributionControllerFromProduct:(id)arg1;
- (BOOL)_isValidCompatibilityUpdatePackage:(id)arg1;
- (BOOL)_isRecoverySupportedForTarget:(id)arg1;
- (id)_mountDiskImageWithPath:(id)arg1;
- (id)_baseSystemMountPathFromXML:(id)arg1;
- (BOOL)_isOSInstallFromXML:(id)arg1;
- (void)_logSystemInfo;
- (void)_evaluateDisks:(id)arg1;
- (void)_removeDisksFromHandledTargets:(id)arg1;
- (id)target;
- (BOOL)setDataTarget:(id)arg1 withSystemTarget:(id)arg2 error:(id *)arg3;
- (void)initialPopulateComplete;
- (id)visibleDiskRoles;
- (void)disksDisappeared:(id)arg1;
- (void)disksChanged:(id)arg1;
- (void)disksAppeared:(id)arg1;
- (void)_startTargetEvaulationQueue;
- (id)localizedProductName;
- (id)licenseAgreement;
- (BOOL)isRestartRequiredByBootTimeInstallPackagesOnTarget:(id)arg1;
- (BOOL)prepareForReboot;
- (BOOL)_setupInstallWithError:(id *)arg1;
- (BOOL)_setupLegacyConversionInstallWithError:(id *)arg1;
- (void)installFinishedWithFatalError:(id)arg1 withFailedQueueElement:(id)arg2;
- (BOOL)startInstall;
- (void)determineROSVAndEnableROSVPathsIfNecessary;
- (BOOL)_flushDMLogToTarget;
- (void)_setSUAppleUpgradeCookie;
- (void)_setAppleInternalPermittedByDistribution:(id)arg1;
@property(readonly) NSNumber *bytesRequiredToInstall;
- (long long)_recursivelyUpdateStateForItem:(id)arg1;
- (void)updateCustomizationState;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_invalidateCustomization;
@property(readonly) BOOL hasCustomizationOptions;
- (void)dealloc;
- (BOOL)_loadInstallerDocuments:(id *)arg1;
- (id)initWithDistributionPath:(id)arg1 requireAutomation:(BOOL)arg2 error:(id *)arg3;
- (id)initWithDistributionPath:(id)arg1 requireAutomation:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

