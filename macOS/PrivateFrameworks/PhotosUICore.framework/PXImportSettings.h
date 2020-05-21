//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXImportSettings : PXSettings
{
    BOOL _simulateEmptyImportSource;
    BOOL _showImportItemFilenames;
    BOOL _disableAssetDeletion;
    BOOL _loadActualThumbnails;
    BOOL _lazyLoadAllAssets;
    BOOL _groupItemsByEXIFDate;
    BOOL _showNewestItemsInGridUntilScrolled;
    BOOL _hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
    BOOL _longPressForOneUpInCompactMode;
    BOOL _longPressForOneUpInPadSpec;
    BOOL _useThumbnailSizesAsImageSizeHints;
    BOOL _loadRetinaThumbnails;
    BOOL _showProgressTitles;
    long long _simulatedBatteryLevel;
    long long _alreadyImportedTruncationMode;
    long long _assetEnumerationBehavior;
    double _assetEnumerationBatchInterval;
    unsigned long long _assetEnumerationBatchSize;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL showProgressTitles; // @synthesize showProgressTitles=_showProgressTitles;
@property(nonatomic) unsigned long long assetEnumerationBatchSize; // @synthesize assetEnumerationBatchSize=_assetEnumerationBatchSize;
@property(nonatomic) double assetEnumerationBatchInterval; // @synthesize assetEnumerationBatchInterval=_assetEnumerationBatchInterval;
@property(nonatomic) long long assetEnumerationBehavior; // @synthesize assetEnumerationBehavior=_assetEnumerationBehavior;
@property(nonatomic) BOOL loadRetinaThumbnails; // @synthesize loadRetinaThumbnails=_loadRetinaThumbnails;
@property(nonatomic) BOOL useThumbnailSizesAsImageSizeHints; // @synthesize useThumbnailSizesAsImageSizeHints=_useThumbnailSizesAsImageSizeHints;
@property(nonatomic) BOOL longPressForOneUpInPadSpec; // @synthesize longPressForOneUpInPadSpec=_longPressForOneUpInPadSpec;
@property(nonatomic) BOOL longPressForOneUpInCompactMode; // @synthesize longPressForOneUpInCompactMode=_longPressForOneUpInCompactMode;
@property(nonatomic) BOOL hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem; // @synthesize hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem=_hide1UpToolbarAndMarginsForCollapsedAlreadyImportedItem;
@property(nonatomic) long long alreadyImportedTruncationMode; // @synthesize alreadyImportedTruncationMode=_alreadyImportedTruncationMode;
@property(nonatomic) BOOL showNewestItemsInGridUntilScrolled; // @synthesize showNewestItemsInGridUntilScrolled=_showNewestItemsInGridUntilScrolled;
@property(nonatomic) BOOL groupItemsByEXIFDate; // @synthesize groupItemsByEXIFDate=_groupItemsByEXIFDate;
@property(nonatomic) BOOL lazyLoadAllAssets; // @synthesize lazyLoadAllAssets=_lazyLoadAllAssets;
@property(nonatomic) BOOL loadActualThumbnails; // @synthesize loadActualThumbnails=_loadActualThumbnails;
@property(nonatomic) BOOL disableAssetDeletion; // @synthesize disableAssetDeletion=_disableAssetDeletion;
@property(nonatomic) BOOL showImportItemFilenames; // @synthesize showImportItemFilenames=_showImportItemFilenames;
@property(nonatomic) BOOL simulateEmptyImportSource; // @synthesize simulateEmptyImportSource=_simulateEmptyImportSource;
@property(nonatomic) long long simulatedBatteryLevel; // @synthesize simulatedBatteryLevel=_simulatedBatteryLevel;
- (void)setDefaultValues;
- (id)parentSettings;

@end

