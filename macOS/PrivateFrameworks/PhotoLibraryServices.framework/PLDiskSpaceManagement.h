//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLDiskSpaceManagement : NSObject
{
}

+ (long long)_processCloudSharedAsset:(id)arg1 shouldFreeSpace:(BOOL)arg2;
+ (unsigned long long)_scanAndDeleteCacheFilesInDirectory:(id)arg1 shouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromPhotoMetadataDirectoryShouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3 skipAssets:(id)arg4;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromCloudSharingCacheDataDirectoryShouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)_scanFilesInPhotoLibrary:(id)arg1 fromReimportPhotoCloudSharingDataDirectoryShouldFreeSpace:(BOOL)arg2 bytesToPurge:(unsigned long long)arg3;
+ (unsigned long long)purgeExpiredOutboundSharingAssetsFromPhotoLibrary:(id)arg1;
+ (unsigned long long)performCloudSharingSpaceManagementWithBytesToPurge:(unsigned long long)arg1 shouldFreeSpace:(BOOL)arg2 shouldKeepRecentlyViewedAssets:(BOOL)arg3 fromPhotoLibrary:(id)arg4;

@end

