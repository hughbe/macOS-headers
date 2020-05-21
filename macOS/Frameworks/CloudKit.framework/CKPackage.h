//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecord, CKSQLite, NSArray, NSData, NSString;
@protocol OS_dispatch_queue;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue>
{
    struct _OpaquePCSShareProtection *_recordPCS;
    BOOL _open;
    BOOL _transaction;
    BOOL _wasCached;
    BOOL _uploaded;
    BOOL _downloaded;
    BOOL _hasSize;
    BOOL _shouldReadRawEncryptedData;
    NSString *_databaseBasePath;
    long long _state;
    NSData *_archiverInfo;
    CKSQLite *_sqlite;
    unsigned long long _nextItemIndex;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_UUID;
    unsigned long long _size;
    long long _storageGroupingPolicy;
    long long _uploadRank;
    long long _packageID;
    NSArray *_assets;
    CKRecord *_record;
    NSString *_recordKey;
}

+ (void)gcPackagesInDirectory:(id)arg1 dbInUseBlock:(CDUnknownBlockType)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)destroyClientPackageWithDatabaseBasePath:(id)arg1 UUID:(id)arg2;
+ (id)_createPackageDBWithPath:(id)arg1;
+ (id)clientPackageDatabaseDirectory;
+ (id)packageProcessBasePath;
+ (id)_packageDatabasePathWithBasePath:(id)arg1 UUID:(id)arg2 state:(long long)arg3;
+ (id)_packageDatabaseDirectoryWithBasePath:(id)arg1 state:(long long)arg2;
+ (id)_packagesBasePathForBundleID:(id)arg1;
+ (id)stagingPathSuffixForCloudKitCachesDirectoryWithBundleIdentifier:(id)arg1;
+ (id)packageInDaemonWithBasePath:(id)arg1 error:(id *)arg2;
+ (id)packageInClientWithBasePath:(id)arg1 error:(id *)arg2;
+ (id)packageWithPackage:(id)arg1 error:(id *)arg2;
+ (id)packageWithError:(id *)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(nonatomic) __weak CKRecord *record; // @synthesize record=_record;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(nonatomic) long long packageID; // @synthesize packageID=_packageID;
@property(nonatomic) long long uploadRank; // @synthesize uploadRank=_uploadRank;
@property(nonatomic) long long storageGroupingPolicy; // @synthesize storageGroupingPolicy=_storageGroupingPolicy;
@property(nonatomic) BOOL shouldReadRawEncryptedData; // @synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData;
@property(nonatomic) BOOL hasSize; // @synthesize hasSize=_hasSize;
@property(nonatomic) BOOL downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) BOOL uploaded; // @synthesize uploaded=_uploaded;
@property(nonatomic) BOOL wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=inTransaction) BOOL transaction; // @synthesize transaction=_transaction;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_open;
@property(nonatomic) unsigned long long nextItemIndex; // @synthesize nextItemIndex=_nextItemIndex;
@property(retain, nonatomic) CKSQLite *sqlite; // @synthesize sqlite=_sqlite;
@property(copy, nonatomic) NSData *archiverInfo; // @synthesize archiverInfo=_archiverInfo;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *databaseBasePath; // @synthesize databaseBasePath=_databaseBasePath;
@property(nonatomic) struct _OpaquePCSShareProtection *recordPCS; // @synthesize recordPCS=_recordPCS;
- (double)earliestUploadReceiptExpiration;
- (BOOL)claimOwnershipWithError:(id *)arg1;
@property(copy, nonatomic) NSData *signature;
- (void)_locked_endTransaction;
- (void)_locked_beginTransaction;
- (void)endTransaction;
- (void)beginTransaction;
- (void)addSection:(id)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (void)updateItemsAtIndexes:(id)arg1 fileURLs:(id)arg2;
- (void)updateItemAtIndex:(long long)arg1 withFileURL:(id)arg2;
- (void)updateItemAtIndex:(long long)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned long long)arg5;
- (void)addItem:(id)arg1;
- (id)itemEnumeratorForSectionAtIndex:(unsigned long long)arg1;
- (id)itemEnumerator;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)_itemOrNilAtIndex:(unsigned long long)arg1;
- (id)_itemWithColumnsByName:(id)arg1;
- (unsigned long long)itemCount;
- (id)sqliteOrRaise;
- (void)close;
- (void)open;
- (BOOL)_locked_openWithError:(id *)arg1;
- (void)_locked_open;
- (BOOL)openWithError:(id *)arg1;
@property(readonly, copy) NSString *description;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (void)releaseDB;
- (void)removeDB;
- (void)releaseDBWithRemove:(BOOL)arg1;
- (BOOL)prepareDBWithError:(id *)arg1;
- (BOOL)setArchiverInfo:(id)arg1 error:(id *)arg2;
- (void)handleChangeStateAction:(long long)arg1;
- (BOOL)handleChangeStateAction:(long long)arg1 error:(id *)arg2;
- (BOOL)movePackagesDatabaseInDirection:(BOOL)arg1 error:(id *)arg2;
- (id)_packageDatabasePath;
- (id)_packageDatabasePathWithState:(long long)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initUnreachablePackageWithUUID:(id)arg1;
- (id)_initWithBasePath:(id)arg1 UUID:(id)arg2;
- (id)init;
- (BOOL)removeDBAndDeleteFilesWithError:(id *)arg1;
- (id)clonedPackageInDaemonWithBasePath:(id)arg1 filesDuplicatedIntoDirectory:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

