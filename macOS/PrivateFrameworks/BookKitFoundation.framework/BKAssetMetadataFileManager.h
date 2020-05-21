//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileCoordinator, NSFileManager;

@interface BKAssetMetadataFileManager : NSObject
{
    NSFileManager *_fileManager;
    NSFileCoordinator *_fileCoordinator;
}

+ (id)metadataDateFromString:(id)arg1;
+ (id)stringFromMetadataDate:(id)arg1;
+ (id)dateFormatter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSFileCoordinator *fileCoordinator; // @synthesize fileCoordinator=_fileCoordinator;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)assetsForURLs:(id)arg1 missingFromAssets:(id)arg2 error:(id *)arg3;
- (void)_addURLsFromAsset:(id)arg1 toSet:(id)arg2;
- (id)orphanAssetsInAssets:(id)arg1 error:(id *)arg2;
- (id)_updateImageCoverDataForMetadta:(id)arg1 updates:(id)arg2 error:(id *)arg3;
- (id)_renameExistingPDFMetadata:(id)arg1 toDisplayName:(id)arg2 error:(id *)arg3;
- (void)_backupMetadataIfNeeded:(id)arg1;
- (BOOL)_writeExtendedAttributes:(id)arg1 url:(id)arg2 error:(id *)arg3;
- (unsigned long long)fixPermissionsAndCalculateAllocatedSizeAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)checkValidFilePermissionsForAsset:(id)arg1 error:(id *)arg2;
- (BOOL)setExtendedAttributesForAsset:(id)arg1 error:(id *)arg2;
- (BOOL)updateExtendedAttributesForAsset:(id)arg1 error:(id *)arg2;
- (id)extendedAttributesForAsset:(id)arg1 error:(id *)arg2;
- (BOOL)removeAsset:(id)arg1 error:(id *)arg2;
- (id)trashAsset:(id)arg1 error:(id *)arg2;
- (id)makeAssetUbiquitous:(id)arg1 toDirectory:(id)arg2 toFilename:(id)arg3 error:(id *)arg4;
- (id)replaceUbiquitousAsset:(id)arg1 withAsset:(id)arg2 error:(id *)arg3;
- (id)redactAsset:(id)arg1 intoDirectory:(id)arg2 error:(id *)arg3;
- (id)inflateAsset:(id)arg1 temporaryDirectory:(id)arg2 error:(id *)arg3;
- (void)persistMetadata:(id)arg1;
- (void)persistXattrMetadata:(id)arg1;
- (id)applyUpdate:(id)arg1 onExistingAsset:(id)arg2 error:(id *)arg3;
- (id)normalizeNamingForAsset:(id)arg1 error:(id *)arg2;
- (id)updateAsset:(id)arg1 withUpdates:(id)arg2 temporaryDirectory:(id)arg3 inflateIfNeeded:(BOOL)arg4 error:(id *)arg5;
- (id)taskToInstallAsset:(id)arg1;
- (id)moveAsset:(id)arg1 toDirectory:(id)arg2 toFilename:(id)arg3 replaceExisting:(BOOL)arg4 error:(id *)arg5;
- (id)moveAsset:(id)arg1 toURL:(id)arg2 replaceExisting:(BOOL)arg3 error:(id *)arg4;
- (id)updateWithKeyAttributesAssetMetadata:(id)arg1 error:(id *)arg2;
- (id)init;

@end

