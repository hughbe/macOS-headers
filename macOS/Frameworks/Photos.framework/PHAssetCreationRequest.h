//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetChangeRequest.h>

#import <Photos/PHInsertChangeRequest-Protocol.h>
#import <Photos/PHMomentSharePropertySet-Protocol.h>

@class NSData, NSDictionary, NSManagedObjectID, NSMutableArray, NSMutableDictionary, NSObject, NSString, PHAssetCreationAdjustmentBakeInOptions, PHAssetCreationMetadataCopyOptions, PHAssetCreationPhotoStreamPublishingRequest, PHAssetResourceBag, PHMomentShare, PHRelationshipChangeRequestHelper, PLManagedAsset;

@interface PHAssetCreationRequest : PHAssetChangeRequest <PHInsertChangeRequest, PHMomentSharePropertySet>
{
    NSMutableArray *_assetResources;
    PHAssetResourceBag *_assetResourceBag;
    NSMutableDictionary *_movedFiles;
    BOOL _duplicateAllowsPrivateMetadata;
    BOOL _shouldCreateScreenshot;
    CDUnknownBlockType _concurrentWorkBlock;
    PLManagedAsset *_asset;
    NSObject *_previewImage;
    NSObject *_thumbnailImage;
    NSData *_originalHash;
    BOOL _shouldPerformConcurrentWork;
    BOOL _duplicateLivePhotoAsStill;
    BOOL _duplicateAsOriginal;
    BOOL _duplicateSinglePhotoFromBurst;
    BOOL _duplicateSpatialOverCaptureResources;
    short _importedBy;
    unsigned short _duplicateAssetPhotoLibraryType;
    NSString *_importSessionID;
    PHAssetCreationPhotoStreamPublishingRequest *__photoStreamPublishingRequest;
    PHMomentShare *_momentShare;
    NSString *_momentShareUUID;
    PHRelationshipChangeRequestHelper *_momentShareHelper;
    NSString *_duplicateAssetIdentifier;
    PHAssetCreationAdjustmentBakeInOptions *_adjustmentBakeInOptions;
    PHAssetCreationMetadataCopyOptions *_metadataCopyOptions;
    CDUnknownBlockType _destinationAssetAvailabilityHandler;
    CDStruct_1b6d18a9 _duplicateStillSourceTime;
}

+ (BOOL)supportsImportAssetResourceTypes:(id)arg1;
+ (BOOL)supportsAssetResourceTypes:(id)arg1;
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1;
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1 options:(id)arg2;
+ (id)creationRequestForAssetFromAssetBundle:(id)arg1;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)creationRequestForAssetFromScreenshotImage:(id)arg1;
+ (id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2;
+ (id)creationRequestForAssetFromImageData:(id)arg1;
+ (id)creationRequestForAsset;
+ (id)_creationRequestForAssetUsingUUID:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setDestinationAssetAvailabilityHandler:) CDUnknownBlockType destinationAssetAvailabilityHandler; // @synthesize destinationAssetAvailabilityHandler=_destinationAssetAvailabilityHandler;
@property(copy, nonatomic, setter=_setMetadataCopyOptions:) PHAssetCreationMetadataCopyOptions *metadataCopyOptions; // @synthesize metadataCopyOptions=_metadataCopyOptions;
@property(copy, nonatomic, setter=_setAdjustmentBakeInOptions:) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions; // @synthesize adjustmentBakeInOptions=_adjustmentBakeInOptions;
@property(nonatomic, setter=_setDuplicateSpatialOverCaptureResources:) BOOL duplicateSpatialOverCaptureResources; // @synthesize duplicateSpatialOverCaptureResources=_duplicateSpatialOverCaptureResources;
@property(nonatomic, setter=_setDuplicateSinglePhotoFromBurst:) BOOL duplicateSinglePhotoFromBurst; // @synthesize duplicateSinglePhotoFromBurst=_duplicateSinglePhotoFromBurst;
@property(nonatomic, setter=_setDuplicateAsOriginal:) BOOL duplicateAsOriginal; // @synthesize duplicateAsOriginal=_duplicateAsOriginal;
@property(nonatomic, setter=_setDuplicateLivePhotoAsStill:) BOOL duplicateLivePhotoAsStill; // @synthesize duplicateLivePhotoAsStill=_duplicateLivePhotoAsStill;
@property(nonatomic, setter=_setDuplicateStillSourceTime:) CDStruct_1b6d18a9 duplicateStillSourceTime; // @synthesize duplicateStillSourceTime=_duplicateStillSourceTime;
@property(nonatomic, setter=_setDuplicateAssetPhotoLibraryType:) unsigned short duplicateAssetPhotoLibraryType; // @synthesize duplicateAssetPhotoLibraryType=_duplicateAssetPhotoLibraryType;
@property(retain, nonatomic, setter=_setDuplicateAssetIdentifier:) NSString *duplicateAssetIdentifier; // @synthesize duplicateAssetIdentifier=_duplicateAssetIdentifier;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *momentShareHelper; // @synthesize momentShareHelper=_momentShareHelper;
@property(nonatomic) BOOL shouldPerformConcurrentWork; // @synthesize shouldPerformConcurrentWork=_shouldPerformConcurrentWork;
@property(retain, nonatomic) NSString *momentShareUUID; // @synthesize momentShareUUID=_momentShareUUID;
@property(retain, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
@property(retain, nonatomic, setter=_setPhotoStreamPublishingRequest:) PHAssetCreationPhotoStreamPublishingRequest *_photoStreamPublishingRequest; // @synthesize _photoStreamPublishingRequest=__photoStreamPublishingRequest;
@property(retain, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property(nonatomic) short importedBy; // @synthesize importedBy=_importedBy;
@property(nonatomic, getter=_shouldCreateScreenshot, setter=_setShouldCreateScreenshot:) BOOL shouldCreateScreenshot;
@property(nonatomic, setter=_setDuplicateAllowsPrivateMetadata:) BOOL duplicateAllowsPrivateMetadata;
- (BOOL)isNew;
- (id)_mutableMomentShareObjectIDsAndUUIDs;
- (void)_prepareMomentShareHelperIfNeeded;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)_populateDuplicatingAssetCreationRequest:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)arg1;
- (id)_duplicatedAssetResourcesFromAsset:(id)arg1 stillSourceTime:(CDStruct_1b6d18a9)arg2 flattenLivePhotoIntoStillPhoto:(BOOL)arg3 original:(BOOL)arg4 removeBurstIdentifier:(BOOL)arg5 error:(id *)arg6;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (long long)_mediaTypeForCreatedAsset;
- (id)placeholderForCreatedAsset;
- (void)_addResourceWithType:(long long)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4;
- (void)addResourceWithType:(long long)arg1 data:(id)arg2 options:(id)arg3;
- (void)addResourceWithType:(long long)arg1 fileURL:(id)arg2 options:(id)arg3;
- (id)initWithHelper:(id)arg1;
- (id)initForNewObjectWithUUID:(id)arg1;
- (id)initForNewObject;
- (void)finalizeRequestWithBatchSuccess:(BOOL)arg1;
@property(readonly, nonatomic) CDUnknownBlockType concurrentWorkBlock;
- (BOOL)needsConcurrentWork;
- (id)createAssetFromValidatedResources:(id)arg1 withUUID:(id)arg2 inPhotoLibrary:(id)arg3 error:(id *)arg4;
- (id)_sourceOptionsForCreateThumbnailWithAsset:(id)arg1 hasAdjustments:(BOOL)arg2;
- (void)_setupConcurrentWorkIfNecessaryWithImageSource:(struct CGImageSource *)arg1 originalImageData:(id)arg2;
- (void)_pairLivePhotoResource:(id)arg1 withAssetInLibrary:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_externalLivePhotoResourceForAsset:(id)arg1;
- (BOOL)_writeDataToDisk:(id)arg1 imageUTIType:(id)arg2 exifProperties:(id)arg3 mainFileURL:(id)arg4 thumbnailData:(id)arg5;
- (BOOL)_accessWritableURLForUUID:(id)arg1 imageUTI:(id)arg2 originalFilename:(id)arg3 photoLibrary:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (id)_managedAssetFromPrimaryResourceData:(id)arg1 withUUID:(id)arg2 photoLibrary:(id)arg3 getImageSource:(struct CGImageSource **)arg4 imageData:(id *)arg5;
- (short)_savedAssetTypeForAsset;
- (id)_exifPropertiesFromSourceImageDataExifProperties:(id)arg1;
- (BOOL)_createOriginalResourceForAsset:(id)arg1 fromValidatedResource:(id)arg2 resourceType:(unsigned int)arg3 photoLibrary:(id)arg4 destinationURL:(id)arg5 error:(id *)arg6;
- (BOOL)_createAudioResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (BOOL)_createXmpResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (BOOL)_createSocResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (BOOL)_createRAWSidecarForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (BOOL)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 error:(id *)arg3;
- (id)_ingestOriginalFromSrcURL:(id)arg1 toDstURL:(id)arg2 useSecureMove:(BOOL)arg3 resource:(id)arg4 resourceType:(unsigned int)arg5 asset:(id)arg6 error:(id *)arg7;
- (BOOL)_ingestOriginalInPlaceSrcURL:(id)arg1 dstURL:(id)arg2 asset:(id)arg3 error:(id *)arg4;
- (BOOL)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 error:(id *)arg3;
- (id)makeSubstitueRenderVideoFileFromPath:(id)arg1 primaryResource:(id)arg2 fileSuffix:(id)arg3 error:(id *)arg4;
- (id)makeSubstitueRenderImageFileFromPath:(id)arg1 primaryResource:(id)arg2 fileSuffix:(id)arg3 error:(id *)arg4;
- (void)updateOriginalResourceOptionsWithResource:(id)arg1 sourceUrl:(id)arg2;
- (id)_secureMove:(BOOL)arg1 assetResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (id)_secureMove:(BOOL)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 capabilities:(id)arg4 error:(id *)arg5;
@property(readonly, nonatomic) NSDictionary *_movedFiles;
- (void)_resetMovedFiles;
- (BOOL)_restoreMovedFilesOnFailure;
- (void)_didMoveFileFromURL:(id)arg1 toURL:(id)arg2;
- (void)_copyMediaAnalysisProperties:(id)arg1;
- (void)_copyUserSpecificMetadataFromAsset:(id)arg1;
- (void)_copyMetadataFromAsset:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) BOOL isNewRequest;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(readonly) Class superclass;

@end

