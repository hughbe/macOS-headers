//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDPersistentStore : HMFObject
{
}

+ (id)decryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)encryptDataWithMetadataKey:(id)arg1 error:(id *)arg2;
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long *)arg2 deleteExtraKeys:(BOOL)arg3 allowControllerIdentifierToChange:(BOOL)arg4 controllerIdentifierChanged:(char *)arg5 successfulKeyUserName:(id *)arg6 error:(id *)arg7;
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id *)arg2;
+ (id)_decryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)_encryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;
+ (id)unarchiveBulletinBoard;
+ (id)archiveBulletinBoard:(id)arg1;
+ (id)unarchiveIDSDataSyncJournal;
+ (id)archiveIDSDataSyncJournal:(id)arg1;
+ (void)removeTransactionJournal;
+ (id)archiveCloudServerTokenData:(id)arg1;
+ (void)removeServerTokenDataFile;
+ (BOOL)archiveMetadata:(id)arg1;
+ (id)encryptUsingLocalKeyAndArchiveData:(id)arg1 storePath:(id)arg2 dataLabel:(id)arg3;
+ (id)loadBuiltinPlainMetadataDictionary;
+ (id)loadPlainMetadataDictionary;
+ (id)decryptUsingLocalKeyAndUnarchiveFromPath:(id)arg1 error:(id *)arg2;
+ (id)unarchiveVendorStore;
+ (void)archiveVendorStore:(id)arg1;
+ (id)archiveHomeData:(id)arg1;
+ (id)serializeHomeData:(id)arg1 localStorage:(BOOL)arg2 remoteDeviceOnSameAccount:(BOOL)arg3;
+ (void)resetMetadata;
+ (void)resetConfiguration;
+ (void)cleanupKeysInStore;
+ (id)unarchiveHomeData:(id *)arg1 decryptionFailed:(char *)arg2;
+ (BOOL)deserializeHomeData:(id *)arg1 localStorage:(BOOL)arg2 fromData:(id)arg3;
+ (BOOL)writeDictionary:(id)arg1 toStorePath:(id)arg2;
+ (id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;
+ (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;

@end

