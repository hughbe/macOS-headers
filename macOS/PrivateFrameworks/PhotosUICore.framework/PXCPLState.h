//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDate;

@interface PXCPLState : NSObject <NSCopying>
{
    BOOL _isEnabled;
    BOOL _isSyncing;
    BOOL _isUserPaused;
    BOOL _isInLowDataMode;
    BOOL _isInLowPowerMode;
    BOOL _isExceedingBatteryQuota;
    BOOL _isExceedingCellularQuota;
    BOOL _isExceedingLocalStorageQuota;
    BOOL _isExceedingQuota;
    BOOL _isClientVersionTooOld;
    BOOL _isOffline;
    BOOL _isInSoftResetSync;
    BOOL _isInHardResetSync;
    float _itemsToUploadProgress;
    NSDate *_syncDate;
    NSDate *_exitDate;
    unsigned long long _numberOfItemsToUpload;
    unsigned long long _numberOfItemsToAdd;
    unsigned long long _numberOfOriginalsToDownload;
    unsigned long long _numberOfItemsFailingToUpload;
    unsigned long long _numberOfPhotoAssets;
    unsigned long long _numberOfVideoAssets;
    unsigned long long _numberOfOtherAssets;
    unsigned long long _numberOfReferencedItems;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isInHardResetSync; // @synthesize isInHardResetSync=_isInHardResetSync;
@property(nonatomic) BOOL isInSoftResetSync; // @synthesize isInSoftResetSync=_isInSoftResetSync;
@property(nonatomic) BOOL isOffline; // @synthesize isOffline=_isOffline;
@property(nonatomic) BOOL isClientVersionTooOld; // @synthesize isClientVersionTooOld=_isClientVersionTooOld;
@property(nonatomic) BOOL isExceedingQuota; // @synthesize isExceedingQuota=_isExceedingQuota;
@property(nonatomic) BOOL isExceedingLocalStorageQuota; // @synthesize isExceedingLocalStorageQuota=_isExceedingLocalStorageQuota;
@property(nonatomic) BOOL isExceedingCellularQuota; // @synthesize isExceedingCellularQuota=_isExceedingCellularQuota;
@property(nonatomic) BOOL isExceedingBatteryQuota; // @synthesize isExceedingBatteryQuota=_isExceedingBatteryQuota;
@property(nonatomic) BOOL isInLowPowerMode; // @synthesize isInLowPowerMode=_isInLowPowerMode;
@property(nonatomic) BOOL isInLowDataMode; // @synthesize isInLowDataMode=_isInLowDataMode;
@property(nonatomic) BOOL isUserPaused; // @synthesize isUserPaused=_isUserPaused;
@property(nonatomic) unsigned long long numberOfReferencedItems; // @synthesize numberOfReferencedItems=_numberOfReferencedItems;
@property(nonatomic) unsigned long long numberOfOtherAssets; // @synthesize numberOfOtherAssets=_numberOfOtherAssets;
@property(nonatomic) unsigned long long numberOfVideoAssets; // @synthesize numberOfVideoAssets=_numberOfVideoAssets;
@property(nonatomic) unsigned long long numberOfPhotoAssets; // @synthesize numberOfPhotoAssets=_numberOfPhotoAssets;
@property(nonatomic) unsigned long long numberOfItemsFailingToUpload; // @synthesize numberOfItemsFailingToUpload=_numberOfItemsFailingToUpload;
@property(nonatomic) unsigned long long numberOfOriginalsToDownload; // @synthesize numberOfOriginalsToDownload=_numberOfOriginalsToDownload;
@property(nonatomic) unsigned long long numberOfItemsToAdd; // @synthesize numberOfItemsToAdd=_numberOfItemsToAdd;
@property(nonatomic) float itemsToUploadProgress; // @synthesize itemsToUploadProgress=_itemsToUploadProgress;
@property(nonatomic) unsigned long long numberOfItemsToUpload; // @synthesize numberOfItemsToUpload=_numberOfItemsToUpload;
@property(copy, nonatomic) NSDate *exitDate; // @synthesize exitDate=_exitDate;
@property(copy, nonatomic) NSDate *syncDate; // @synthesize syncDate=_syncDate;
@property(nonatomic) BOOL isSyncing; // @synthesize isSyncing=_isSyncing;
@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)description;
- (BOOL)isEqualToCPLState:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

