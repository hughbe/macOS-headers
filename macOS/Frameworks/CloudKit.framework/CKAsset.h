//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/CKRecordValue-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKAssetCopyInfo, CKAssetDownloadPreauthorization, CKAssetReference, CKAssetRereferenceInfo, CKAssetTransferOptions, CKRecord, CKRecordID, NSData, NSDate, NSDictionary, NSFileHandle, NSNumber, NSString, NSURL;

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding>
{
    BOOL _shouldReadAssetContentUsingClientProxy;
    BOOL _wasCached;
    BOOL _hasSize;
    BOOL _uploaded;
    BOOL _downloaded;
    BOOL _shouldReadRawEncryptedData;
    NSString *_downloadURLTemplate;
    CKRecord *_record;
    NSString *_recordKey;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSString *_authToken;
    CKAssetDownloadPreauthorization *_downloadPreauthorization;
    NSString *_downloadBaseURL;
    unsigned long long _downloadTokenExpiration;
    NSData *_boundaryKey;
    NSFileHandle *_clientOpenedFileHandle;
    NSURL *_constructedAssetDownloadURL;
    NSString *_constructedAssetDownloadURLTemplate;
    unsigned long long _constructedAssetEstimatedSize;
    NSURL *_realPathURL;
    NSData *_signature;
    unsigned long long _size;
    unsigned long long _paddedFileSize;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationCountToSave;
    NSURL *_fileURL;
    NSData *_assetContent;
    NSString *_itemTypeHint;
    CKAssetCopyInfo *_assetCopyInfo;
    NSString *_UUID;
    NSDate *_downloadURLExpiration;
    NSData *_assetKey;
    NSData *_wrappedAssetKey;
    NSData *_clearAssetKey;
    NSData *_referenceSignature;
    NSString *_uploadReceipt;
    double _uploadReceiptExpiration;
    long long _storageGroupingPolicy;
    CKAssetTransferOptions *_assetTransferOptions;
    long long _arrayIndex;
    CKRecordID *_recordID;
    CKAssetRereferenceInfo *_assetRereferenceInfo;
    CKAssetReference *_assetReference;
    NSDictionary *_assetChunkerOptions;
    long long _uploadRank;
}

+ (BOOL)supportsSecureCoding;
+ (id)_canonicalizeTemplateURL:(id)arg1;
+ (id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2;
+ (id)getFileMetadataAtPath:(id)arg1 error:(id *)arg2;
+ (id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id *)arg3;
+ (id)getFileSizeWithOpenInfo:(id)arg1 error:(id *)arg2;
+ (id)openWithOpenInfo:(id)arg1 error:(id *)arg2;
+ (id)_openUnencryptedWithOpenInfo:(id)arg1 genCountCheck:(BOOL)arg2 error:(id *)arg3;
+ (int)errorCodeFromPOSIXCode:(int)arg1;
+ (id)assetWithFileURL:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long uploadRank; // @synthesize uploadRank=_uploadRank;
@property(retain, nonatomic) NSDictionary *assetChunkerOptions; // @synthesize assetChunkerOptions=_assetChunkerOptions;
@property(retain, nonatomic) CKAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(retain, nonatomic) CKAssetRereferenceInfo *assetRereferenceInfo; // @synthesize assetRereferenceInfo=_assetRereferenceInfo;
@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) long long arrayIndex; // @synthesize arrayIndex=_arrayIndex;
@property(retain, nonatomic) CKAssetTransferOptions *assetTransferOptions; // @synthesize assetTransferOptions=_assetTransferOptions;
@property(nonatomic) BOOL shouldReadRawEncryptedData; // @synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData;
@property(nonatomic) BOOL downloaded; // @synthesize downloaded=_downloaded;
@property(nonatomic) BOOL uploaded; // @synthesize uploaded=_uploaded;
@property(nonatomic) BOOL hasSize; // @synthesize hasSize=_hasSize;
@property(nonatomic) BOOL wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic) long long storageGroupingPolicy; // @synthesize storageGroupingPolicy=_storageGroupingPolicy;
@property(nonatomic) double uploadReceiptExpiration; // @synthesize uploadReceiptExpiration=_uploadReceiptExpiration;
@property(copy, nonatomic) NSString *uploadReceipt; // @synthesize uploadReceipt=_uploadReceipt;
@property(retain, nonatomic) NSData *referenceSignature; // @synthesize referenceSignature=_referenceSignature;
@property(retain, nonatomic) NSData *clearAssetKey; // @synthesize clearAssetKey=_clearAssetKey;
@property(retain, nonatomic) NSData *wrappedAssetKey; // @synthesize wrappedAssetKey=_wrappedAssetKey;
@property(retain, nonatomic) NSData *assetKey; // @synthesize assetKey=_assetKey;
@property(retain, nonatomic) NSDate *downloadURLExpiration; // @synthesize downloadURLExpiration=_downloadURLExpiration;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) CKAssetCopyInfo *assetCopyInfo; // @synthesize assetCopyInfo=_assetCopyInfo;
@property(readonly, nonatomic) BOOL shouldReadAssetContentUsingClientProxy; // @synthesize shouldReadAssetContentUsingClientProxy=_shouldReadAssetContentUsingClientProxy;
@property(retain, nonatomic) NSString *itemTypeHint; // @synthesize itemTypeHint=_itemTypeHint;
@property(copy, nonatomic) NSData *assetContent; // @synthesize assetContent=_assetContent;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSNumber *generationCountToSave; // @synthesize generationCountToSave=_generationCountToSave;
@property(readonly, nonatomic) NSNumber *fileID; // @synthesize fileID=_fileID;
@property(readonly, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(nonatomic) unsigned long long paddedFileSize; // @synthesize paddedFileSize=_paddedFileSize;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(copy, nonatomic) NSURL *realPathURL; // @synthesize realPathURL=_realPathURL;
@property(nonatomic) unsigned long long constructedAssetEstimatedSize; // @synthesize constructedAssetEstimatedSize=_constructedAssetEstimatedSize;
@property(retain, nonatomic) NSString *constructedAssetDownloadURLTemplate; // @synthesize constructedAssetDownloadURLTemplate=_constructedAssetDownloadURLTemplate;
@property(retain, nonatomic) NSURL *constructedAssetDownloadURL; // @synthesize constructedAssetDownloadURL=_constructedAssetDownloadURL;
@property(retain, nonatomic) NSFileHandle *clientOpenedFileHandle; // @synthesize clientOpenedFileHandle=_clientOpenedFileHandle;
@property(copy, nonatomic) NSData *boundaryKey; // @synthesize boundaryKey=_boundaryKey;
@property(nonatomic) unsigned long long downloadTokenExpiration; // @synthesize downloadTokenExpiration=_downloadTokenExpiration;
@property(retain, nonatomic) NSString *downloadBaseURL; // @synthesize downloadBaseURL=_downloadBaseURL;
@property(retain, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization; // @synthesize downloadPreauthorization=_downloadPreauthorization;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *requestor; // @synthesize requestor=_requestor;
@property(retain, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(retain, nonatomic) NSURL *contentBaseURL; // @synthesize contentBaseURL=_contentBaseURL;
@property(copy, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(nonatomic) __weak CKRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) NSString *downloadURLTemplate; // @synthesize downloadURLTemplate=_downloadURLTemplate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) NSURL *nullableFileURL;
@property(readonly, nonatomic) NSURL *downloadURL;
- (id)downloadURLWithFileName:(id)arg1;
- (id)openWithError:(id *)arg1;
@property(readonly, copy) NSString *description;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
@property(readonly, nonatomic) BOOL isConstructedAsset;
@property(readonly, nonatomic) BOOL isRereferencedAssetUpload;
@property(readonly, nonatomic) NSString *assetHandleUUID;
- (id)initWithAssetContent:(id)arg1 itemTypeHint:(id)arg2;
- (id)initWithCopyInfo:(id)arg1 fileURL:(id)arg2;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (id)initWithAssetReference:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2;
- (id)_initBare;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

