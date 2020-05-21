//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLPhotoLibraryPathManager.h>

@interface PLPhotoLibraryPathManager (conveniences)
+ (BOOL)supportedFilesystemForCloneWithLibraryURL:(id)arg1 error:(id *)arg2;
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1;
- (id)cloudSharingArchiveDirectory;
- (id)directoryPathForInFlightComments:(BOOL)arg1;
- (id)cplDownloadFinishedMarkerFilePath;
- (id)cplEnableMarkerFilePath;
- (id)forceSoftResetSyncPath;
- (id)pauseICloudPhotosFilePath;
- (id)disableICloudPhotosFilePath;
- (id)enableICloudPhotosFilePath;
- (id)cplDataDirectoryCreateIfNeeded:(BOOL)arg1;
- (id)deletedMemoryUUIDsFilePath;
- (id)searchMetadataStoreFilePath;
- (id)zeroKeywordStoreFilePath;
- (id)searchIndexManagerDatabaseFilePath;
- (id)searchIndexManagerDatabaseDirectory;
- (id)dataMigratorFinishedFilePath;
- (id)photoStreamsDataDirectory;
- (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
- (id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
- (id)recordRebuildReason;
- (long long)lastRebuildReason;
- (void)setSqliteErrorForReason:(long long)arg1 allowsExit:(BOOL)arg2;
- (void)removeSqliteErrorIndicatorFile;
- (BOOL)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)arg1;
- (id)_rebuildDateFormatter;
- (BOOL)sqliteErrorIndicatorFileExists;
@end

