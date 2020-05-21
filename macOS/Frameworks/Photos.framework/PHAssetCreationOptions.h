//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHAssetCreationAdjustmentBakeInOptions, PHAssetCreationMetadataCopyOptions;

@interface PHAssetCreationOptions : NSObject
{
    BOOL _shouldDownloadOrCloudReReferenceMissingResources;
    BOOL _resetUserSpecificMetadata;
    BOOL _copyStillPhotoFromLivePhoto;
    BOOL _copyOriginal;
    BOOL _copySinglePhotoFromBurst;
    CDUnknownBlockType _destinationAssetAvailabilityHandler;
    PHAssetCreationAdjustmentBakeInOptions *_adjustmentBakeInOptions;
    PHAssetCreationMetadataCopyOptions *_metadataCopyOptions;
    CDStruct_1b6d18a9 _stillSourceTime;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL copySinglePhotoFromBurst; // @synthesize copySinglePhotoFromBurst=_copySinglePhotoFromBurst;
@property(nonatomic) BOOL copyOriginal; // @synthesize copyOriginal=_copyOriginal;
@property(nonatomic) BOOL copyStillPhotoFromLivePhoto; // @synthesize copyStillPhotoFromLivePhoto=_copyStillPhotoFromLivePhoto;
@property(nonatomic) BOOL resetUserSpecificMetadata; // @synthesize resetUserSpecificMetadata=_resetUserSpecificMetadata;
@property(nonatomic) CDStruct_1b6d18a9 stillSourceTime; // @synthesize stillSourceTime=_stillSourceTime;
@property(copy, nonatomic) PHAssetCreationMetadataCopyOptions *metadataCopyOptions; // @synthesize metadataCopyOptions=_metadataCopyOptions;
@property(copy, nonatomic) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions; // @synthesize adjustmentBakeInOptions=_adjustmentBakeInOptions;
@property(copy, nonatomic) CDUnknownBlockType destinationAssetAvailabilityHandler; // @synthesize destinationAssetAvailabilityHandler=_destinationAssetAvailabilityHandler;
@property(nonatomic) BOOL shouldDownloadOrCloudReReferenceMissingResources; // @synthesize shouldDownloadOrCloudReReferenceMissingResources=_shouldDownloadOrCloudReReferenceMissingResources;
- (id)init;

@end

