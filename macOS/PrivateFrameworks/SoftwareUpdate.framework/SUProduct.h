//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdate/NSSecureCoding-Protocol.h>

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSURL, PKDistribution, PKDistributionChoice, SUMajorProduct;

@interface SUProduct : NSObject <NSSecureCoding>
{
    NSString *_productKey;
    PKDistribution *_distribution;
    NSDictionary *_extraInfo;
    NSDictionary *_packageInfoForPackagePathString;
    NSDictionary *_packageIntegrityInformationForPackagePathURL;
    NSDate *_postDate;
    BOOL _majorOSUpdate;
    SUMajorProduct *_majorProduct;
    unsigned long long _downloadSize;
    unsigned long long _installSize;
    NSString *_baseDisplayName;
    NSString *_displayVersion;
    NSAttributedString *_longDescription;
    NSAttributedString *_license;
    NSAttributedString *_readme;
    int _restartAction;
    NSArray *_orderedPackageSpecifiersToInstallWithoutPatchFiltering;
    NSArray *_orderedMajorOSInfoPackageSpecifiersToInstall;
    BOOL _startsSelected;
    NSArray *_extraPackageSpecifiersToInstall;
    NSMutableDictionary *_extraPackageIdentifiersToVersions;
    NSURL *_bridgeOSSoftwareUpdateEventRecordingServiceURL;
    NSURL *_originatingCatalogURL;
    NSMutableDictionary *_packageReferenceForPackageIdentifier;
    PKDistributionChoice *_swuChoice;
    NSDictionary *_distributionEnv;
    BOOL _autoUpdateEligible;
    NSDictionary *_distributionEvaluationMetainfo;
    NSNumber *_downloadSizeOnce;
    NSNumber *_installSizeOnce;
    NSNumber *_swuChoiceOnce;
}

+ (BOOL)supportsSecureCoding;
+ (void)setUsingSeedCatalog:(BOOL)arg1;
+ (BOOL)isUsingSeedCatalog;
+ (void)setCatalogVersion:(long long)arg1;
+ (long long)catalogVersion;
+ (BOOL)_isCriticalWithExtraInfo:(id)arg1;
+ (id)__extendedValueForKey:(id)arg1 extraInfo:(id)arg2;
+ (BOOL)_isVisibleForPredictateOnlyWithDistribution:(id)arg1;
+ (BOOL)_isStagedWithExtraInfo:(id)arg1;
+ (id)_productKeysFromProducts:(id)arg1;
@property(retain) NSNumber *swuChoiceOnce; // @synthesize swuChoiceOnce=_swuChoiceOnce;
@property(retain) NSNumber *installSizeOnce; // @synthesize installSizeOnce=_installSizeOnce;
@property(retain) NSNumber *downloadSizeOnce; // @synthesize downloadSizeOnce=_downloadSizeOnce;
@property(readonly, retain) NSAttributedString *readme; // @synthesize readme=_readme;
@property(readonly, retain) NSAttributedString *license; // @synthesize license=_license;
@property(readonly, retain) NSAttributedString *longDescription; // @synthesize longDescription=_longDescription;
@property(readonly, getter=isAutoUpdateEligible) BOOL autoUpdateEligible; // @synthesize autoUpdateEligible=_autoUpdateEligible;
@property(retain) NSDictionary *distributionEvaluationMetainfo; // @synthesize distributionEvaluationMetainfo=_distributionEvaluationMetainfo;
- (id)postDate;
- (unsigned long long)installSize;
- (unsigned long long)_installSizeForPackageReference:(id)arg1;
- (unsigned long long)downloadSize;
- (id)packageURLs;
- (BOOL)hasInstallablePackages;
- (id)packageReferenceForPackageIdentifier:(id)arg1;
- (id)packageIntegrityInformationForRefURL:(id)arg1;
- (id)packageInfoForPackageRefURL:(id)arg1;
- (void)invalidatePackageIdentifierInCache:(id)arg1;
- (id)packageIdentifiersToInstall;
- (id)orderedMajorOSInfoPackageSpecifiersToInstall;
- (id)orderedPackageSpecifiersToInstall;
- (id)orderedPackageReferencesToInstall;
- (id)orderedMajorOSInfoPackageReferencesToInstall;
- (BOOL)_isActiveDistributionPackageReference:(id)arg1;
- (id)majorOSInfoPackageReference;
- (id)allSoftwareUpdatePackageReferences;
- (id)_allPackageReferencesUnderChoice:(id)arg1;
- (int)restartAction;
- (id)_resourceDataForKey:(id)arg1 returningMIMEType:(id *)arg2;
- (id)displayVersion;
- (BOOL)autoUpdateEligible;
- (id)productVersion;
- (id)productBuildVersion;
- (id)productType;
- (id)displayName;
- (id)identifier;
- (id)choice;
- (id)distribution;
- (id)productKey;
- (id)description;
- (void)setIntegrityInformation:(id)arg1 preserveOriginalData:(BOOL)arg2;
- (BOOL)setPKMDataByPackageURL:(id)arg1 preserveOriginalData:(BOOL)arg2;
- (void)_cacheDataFromDistributionController:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductKey:(id)arg1 distribution:(id)arg2 distributionController:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProductKey:(id)arg1 catalogProductDictionary:(id)arg2 localization:(id)arg3 error:(id *)arg4;
- (id)_journalEntry;
- (id)_updateInfoDictionary;
- (void)_setDistributionEnvironment:(id)arg1;
- (id)_distributionEnvironment;
- (void)_setExtraInfo:(id)arg1;
- (id)_extraInfo;
- (id)_originatingCatalogURL;
- (void)_setOriginatingCatalogURL:(id)arg1;
- (id)_bridgeOSSoftwareUpdateEventRecordingServiceURL;
- (void)_setBridgeOSSoftwareUpdateEventRecordingServiceURL:(id)arg1;
- (id)_extraPackageIdentifiersToVersions;
- (id)_extraPackageSpecifiersToInstall;
- (void)_setExtraPackageSpecifiersToInstall:(id)arg1;
- (BOOL)_shouldLaunchFirstLoginOptimization;
- (BOOL)_shouldAuthenticateReboot;
- (BOOL)_allowedToPerformBaseSystemInstall;
- (BOOL)_allowedToUseInstallLater;
- (id)_customPostInstallNotifyURL;
- (id)_customPostInstallNotifyText;
- (id)_customPostInstallNotifyTitle;
- (BOOL)_shouldNotifyUserAfterAutoInstall;
- (id)_customCriticalText;
- (id)_customCriticalTitle;
- (BOOL)_shouldRegisterCriticalUpdateForPostLogoutInstallNow;
- (BOOL)_shouldAutoInstallCriticalUpdateInBackgroundNow;
- (long long)_shouldAutoInstallCriticalUpdateWithDelayInHours;
- (BOOL)_isCritical;
- (void)fetchRemoteMajorProduct:(CDUnknownBlockType)arg1;
- (id)_majorOSInstallerBundleIdentifier;
- (id)_majorProduct;
- (void)_setMajorOSProduct:(id)arg1;
- (BOOL)_isMajorOSUpdateInternal;
- (void)_setMajorOSUpdate:(BOOL)arg1;
- (BOOL)_isMajorOSUpdate;
- (void)_setPostDate:(id)arg1;
- (BOOL)_isWaitingFirmware;
- (BOOL)_isAdminDeferredReturningDeferralDate:(id *)arg1;
- (id)_deferredEnablementDate;
- (BOOL)_isVisibleForPredicateOnly;
- (BOOL)_isDeferrable;
- (void)_addBridgeOSUpdatePackagesFromCatalogAtURL:(id)arg1 isDevelopmentCatalog:(BOOL)arg2 enforceEV:(BOOL)arg3 downloadingToDirectory:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (BOOL)_willSearchForBridgeOSUpdatePackages;
- (id)_minimumRequiredBridgeVersion;
- (BOOL)_isMacOSUpdate;
- (BOOL)_isFirmware;
- (BOOL)_isConfigData;
- (BOOL)_isRampedUnseen;
- (BOOL)_isRamped;
- (BOOL)_isRecommendedForStageOnly:(BOOL)arg1;
- (BOOL)_isRecommended;
- (BOOL)_isStaged;
- (BOOL)_isIgnored;
- (BOOL)_isStandardVisibleRecommendedProduct;
- (BOOL)_requiresPKMData;
- (id)_disabledGroupID;
- (id)_labelVersion;
- (id)_label;

@end

