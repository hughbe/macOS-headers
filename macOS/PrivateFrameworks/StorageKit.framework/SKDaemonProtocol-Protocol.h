//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StorageKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL, SKAPFSContainerDisk, SKAPFSDisk, SKDisk, SKFilesystem, SKRAIDDisk;

@protocol SKDaemonProtocol <NSObject>
- (void)deleteSnapshots:(NSArray *)arg1 disk:(SKAPFSDisk *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)revertToSnapshot:(NSString *)arg1 disk:(SKAPFSDisk *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)renameSnapshot:(NSString *)arg1 toName:(NSString *)arg2 disk:(SKAPFSDisk *)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)createSnapshot:(NSString *)arg1 disk:(SKAPFSDisk *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)allSnapshotsForDisk:(SKAPFSDisk *)arg1 completionBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)resizeLimitsForDisk:(SKDisk *)arg1 completionBlock:(void (^)(NSDictionary *))arg2;
- (void)dataRecordForUser:(NSString *)arg1 forVolume:(SKDisk *)arg2 completionBlock:(void (^)(NSData *, NSError *))arg3;
- (void)deleteRAID:(SKRAIDDisk *)arg1 progress:(void (^)(float, NSString *))arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)repairRAID:(SKRAIDDisk *)arg1 spareDisk:(SKDisk *)arg2 progress:(void (^)(float, NSString *))arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)setAPFSRole:(NSString *)arg1 forDisk:(SKAPFSDisk *)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)convertToAPFS:(SKDisk *)arg1 isDryRun:(BOOL)arg2 prebootFolderPath:(NSString *)arg3 withProgress:(void (^)(float, NSString *))arg4 andCompletionHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg5;
- (void)deleteAPFSVolume:(SKAPFSDisk *)arg1 progress:(void (^)(float, NSString *))arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)addSystemVolumeToAPFSContainer:(SKAPFSContainerDisk *)arg1 dataVolume:(SKAPFSDisk *)arg2 name:(NSString *)arg3 caseSensitive:(BOOL)arg4 minSize:(unsigned long long)arg5 maxSize:(unsigned long long)arg6 password:(NSString *)arg7 passwordHint:(NSString *)arg8 progressBlock:(void (^)(float, NSString *))arg9 completetionBlock:(void (^)(BOOL, SKAPFSDisk *, NSError *))arg10;
- (void)addChildVolumeToAPFSContainer:(SKAPFSContainerDisk *)arg1 name:(NSString *)arg2 caseSensitive:(BOOL)arg3 minSize:(unsigned long long)arg4 maxSize:(unsigned long long)arg5 password:(NSString *)arg6 passwordHint:(NSString *)arg7 apfsRole:(NSString *)arg8 progressBlock:(void (^)(float, NSString *))arg9 completetionBlock:(void (^)(BOOL, SKAPFSDisk *, NSError *))arg10;
- (void)addChildVolumeToAPFSContainer:(SKAPFSContainerDisk *)arg1 name:(NSString *)arg2 caseSensitive:(BOOL)arg3 minSize:(unsigned long long)arg4 maxSize:(unsigned long long)arg5 password:(NSString *)arg6 progressBlock:(void (^)(float, NSString *))arg7 completetionBlock:(void (^)(BOOL, NSError *))arg8;
- (void)removeAPFSVolumeGroup:(NSString *)arg1 container:(SKAPFSContainerDisk *)arg2 completetionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)createAPFSVolumeGroupWithDisks:(NSArray *)arg1 container:(SKAPFSContainerDisk *)arg2 completetionBlock:(void (^)(BOOL, NSError *, NSString *))arg3;
- (void)deleteAPFSContainer:(SKAPFSContainerDisk *)arg1 progress:(void (^)(float, NSString *))arg2 callbackBlock:(void (^)(BOOL, NSError *))arg3;
- (void)createAPFSContainerWithDisks:(NSArray *)arg1 progress:(void (^)(float, NSString *))arg2 callbackBlock:(void (^)(BOOL, NSError *))arg3;
- (void)volumesForAPFSPS:(SKDisk *)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)physicalStoresForAPFSVolume:(SKDisk *)arg1 completionBlock:(void (^)(NSArray *))arg2;
- (void)removeDisk:(SKDisk *)arg1 fromRAID:(SKRAIDDisk *)arg2 progress:(void (^)(float, NSString *))arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)addDisks:(NSArray *)arg1 toRAID:(SKRAIDDisk *)arg2 memberType:(NSString *)arg3 progressBlock:(void (^)(float, NSString *))arg4 completionBlock:(void (^)(BOOL, NSError *))arg5;
- (void)createRAIDSetType:(NSString *)arg1 name:(NSString *)arg2 disks:(NSArray *)arg3 format:(SKFilesystem *)arg4 options:(NSDictionary *)arg5 progressBlock:(void (^)(float, NSString *))arg6 completionBlock:(void (^)(SKRAIDDisk *, NSError *))arg7;
- (void)fixIncorrectlySizedPartitionMapOnDisk:(SKDisk *)arg1 completionBlock:(void (^)(BOOL, NSError *))arg2;
- (void)addChildVolumeToEmptyLVG:(SKDisk *)arg1 withProgress:(void (^)(float, NSString *))arg2 completetionBlock:(void (^)(SKDisk *, NSError *))arg3;
- (void)filesystemsWithCallbackBlock:(void (^)(NSArray *))arg1;
- (void)blockRestoreDisk:(SKDisk *)arg1 fromDiskImageFileURL:(NSURL *)arg2 volumeUUID:(NSString *)arg3 creatingNewVolume:(BOOL)arg4 handlingProgress:(void (^)(float, NSString *))arg5 withCompletionBlock:(void (^)(BOOL, NSError *))arg6;
- (void)blockRestoreDisk:(SKDisk *)arg1 fromDiskImageFileURL:(NSURL *)arg2 handlingProgress:(void (^)(float, NSString *))arg3 withCompletionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)blockRestoreDisk:(SKDisk *)arg1 fromDisk:(SKDisk *)arg2 volumeUUID:(NSString *)arg3 creatingNewVolume:(BOOL)arg4 handlingProgress:(void (^)(float, NSString *))arg5 withCompletionBlock:(void (^)(BOOL, NSError *))arg6;
- (void)blockRestoreDisk:(SKDisk *)arg1 fromDisk:(SKDisk *)arg2 handlingProgress:(void (^)(float, NSString *))arg3 withCompletionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)volumesForDiskImageFileURL:(NSURL *)arg1 handlingProgress:(void (^)(float, NSString *))arg2 withCompletionBlock:(void (^)(NSArray *, NSError *))arg3;
- (void)childDisksForWholeDisk:(SKDisk *)arg1 withCallbackBlock:(void (^)(NSArray *))arg2;
- (void)wholeDiskForDisk:(SKDisk *)arg1 withCallbackBlock:(void (^)(SKDisk *))arg2;
- (void)isBusy:(void (^)(BOOL))arg1;
- (void)diskForPath:(NSString *)arg1 withCallbackBlock:(void (^)(SKDisk *))arg2;
- (void)recacheDisk:(SKDisk *)arg1 withCallbackBlock:(void (^)(void))arg2;
- (void)enclosingDiskAtLevel:(unsigned long long)arg1 withCallbackBlock:(void (^)(SKDisk *))arg2;
- (void)enclosingVolumeCount:(void (^)(unsigned long long))arg1;
- (void)getFDEUsersFromDisk:(SKDisk *)arg1 retrieveImageData:(BOOL)arg2 withCompletionBlock:(void (^)(NSArray *, NSError *))arg3;
- (void)convertDiskToFDE:(SKDisk *)arg1 withRecipe:(NSArray *)arg2 handlingProgress:(void (^)(float, NSString *))arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)changePasswordForDisk:(SKDisk *)arg1 oldPassword:(NSString *)arg2 newPassword:(NSString *)arg3 passwordHint:(NSString *)arg4 withCompletionBlock:(void (^)(BOOL))arg5;
- (void)decryptVolume:(SKDisk *)arg1 withPassword:(NSString *)arg2 forUser:(NSString *)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)unlockEncryptedDisk:(SKDisk *)arg1 withiCloudUser:(NSString *)arg2 iCloudHandle:(id)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)unlockEncryptedDisk:(SKDisk *)arg1 diskUnlockPassword:(NSString *)arg2 forUser:(NSString *)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)validateEncryptedDiskPassword:(SKDisk *)arg1 diskUnlockPassword:(NSString *)arg2 forUser:(NSString *)arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)establishReserveKEKForDisk:(SKDisk *)arg1 diskUnlockPassword:(NSString *)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)extendedInfoForDisk:(SKDisk *)arg1 withCompletionBlock:(void (^)(NSDictionary *))arg2;
- (void)iCloudRecoverManageFDEUsersForDisk:(SKDisk *)arg1 icloudUser:(NSString *)arg2 icloudPassData:(NSData *)arg3 usersToRemoveArray:(NSArray *)arg4 resettingUserPasswords:(NSArray *)arg5 fdeRecipe:(NSArray *)arg6 handlingProgress:(void (^)(float, NSString *))arg7 withCompletionBlock:(void (^)(NSError *))arg8;
- (void)manageFDEUsersForDisk:(SKDisk *)arg1 diskUnlockPassword:(NSString *)arg2 removingUsers:(NSArray *)arg3 resettingUserPasswords:(NSArray *)arg4 fdeRecipe:(NSArray *)arg5 handlingProgress:(void (^)(float, NSString *))arg6 withCompletionBlock:(void (^)(NSError *))arg7;
- (void)convertDisk:(SKDisk *)arg1 toCoreStorage:(BOOL)arg2 handlingProgress:(void (^)(float, NSString *))arg3 withCompletionBlock:(void (^)(SKDisk *, NSError *))arg4;
- (void)getRecoverySystemInfoForDisk:(SKDisk *)arg1 withCompletionBlock:(void (^)(NSDictionary *, NSError *))arg2;
- (void)ejectDisk:(SKDisk *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (void)enableJournalingOnDisk:(SKDisk *)arg1 withCompletionBlock:(void (^)(SKDisk *, BOOL))arg2;
- (void)enablePermissionsOnDisk:(SKDisk *)arg1 withCompletionBlock:(void (^)(SKDisk *, BOOL))arg2;
- (void)unEnsureRecoveryForDisk:(SKDisk *)arg1 withProgressHandler:(void (^)(float, NSString *))arg2 withCompletionBlock:(void (^)(SKDisk *, NSError *))arg3;
- (void)ensureRecoveryForDisk:(SKDisk *)arg1 withRecoverySystemPath:(NSString *)arg2 chunkkList:(NSString *)arg3 diagnostics:(NSString *)arg4 ignoreBlacklist:(BOOL)arg5 handlingProgress:(void (^)(float, NSString *))arg6 callbackBlock:(void (^)(SKDisk *, NSError *))arg7;
- (void)blessDisk:(SKDisk *)arg1 options:(NSDictionary *)arg2 withCallbackBlock:(void (^)(BOOL, NSError *))arg3;
- (void)compositeDisks:(NSArray *)arg1 volumeName:(NSString *)arg2 handlingProgress:(void (^)(float, NSString *))arg3 callbackBlock:(void (^)(NSError *))arg4;
- (void)removeDisk:(SKDisk *)arg1 handlingProgress:(void (^)(float, NSString *))arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)resize:(SKDisk *)arg1 toSize:(unsigned long long)arg2 handlingProgress:(void (^)(float, NSString *))arg3 withCompletionHandler:(void (^)(NSError *))arg4;
- (void)splitDisk:(SKDisk *)arg1 toSize:(unsigned long long)arg2 newDiskRole:(NSString *)arg3 name:(NSString *)arg4 caseSensitive:(BOOL)arg5 password:(NSString *)arg6 handlingProgress:(void (^)(float, NSString *))arg7 withCompletionBlock:(void (^)(SKDisk *, SKDisk *, NSError *))arg8;
- (void)splitDisk:(SKDisk *)arg1 toSize:(unsigned long long)arg2 newDiskType:(NSString *)arg3 name:(NSString *)arg4 caseSensitive:(BOOL)arg5 password:(NSString *)arg6 handlingProgress:(void (^)(float, NSString *))arg7 withCompletionBlock:(void (^)(SKDisk *, SKDisk *, NSError *))arg8;
- (void)mountDisk:(SKDisk *)arg1 options:(NSDictionary *)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)unmountDisk:(SKDisk *)arg1 options:(NSDictionary *)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)unmountDisk:(SKDisk *)arg1 withCompletionBlock:(void (^)(NSError *))arg2;
- (void)renameDisk:(SKDisk *)arg1 to:(NSString *)arg2 withCompletionBlock:(void (^)(NSError *))arg3;
- (void)secureEraseDisk:(SKDisk *)arg1 withEraseLevel:(int)arg2 handlingProgress:(void (^)(float, NSString *))arg3 withCompletionBlock:(void (^)(SKDisk *, NSError *))arg4;
- (void)eraseDisk:(SKDisk *)arg1 toFilesystem:(SKFilesystem *)arg2 partitionMap:(NSString *)arg3 name:(NSString *)arg4 password:(NSString *)arg5 passwordHint:(NSString *)arg6 handlingProgress:(void (^)(float, NSString *))arg7 withCompletionBlock:(void (^)(SKDisk *, NSError *))arg8;
- (void)eraseDisk:(SKDisk *)arg1 toFilesystem:(SKFilesystem *)arg2 partitionMap:(NSString *)arg3 name:(NSString *)arg4 password:(NSString *)arg5 handlingProgress:(void (^)(float, NSString *))arg6 withCompletionBlock:(void (^)(SKDisk *, NSError *))arg7;
- (void)repairUserHomeDirectoryForDisk:(SKDisk *)arg1 forUser:(long long)arg2 handlingProgress:(void (^)(float, NSString *))arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)repairDisk:(SKDisk *)arg1 options:(NSDictionary *)arg2 handlingProgress:(void (^)(float, NSString *))arg3 withCompletionBlock:(void (^)(NSError *))arg4;
- (void)verifyDisk:(SKDisk *)arg1 handlingProgress:(void (^)(float, NSString *))arg2 withCompletionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)setDiskIconWithImageData:(NSData *)arg1 forDisk:(SKDisk *)arg2 WithReply:(void (^)(BOOL))arg3;
- (void)setDaemonLanguage:(NSString *)arg1 withCompletionBlock:(void (^)(BOOL))arg2;
@end

