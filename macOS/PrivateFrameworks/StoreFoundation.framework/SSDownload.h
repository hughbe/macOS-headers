//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL, SSDownloadMetadata, SSDownloadStatus;

@interface SSDownload : NSObject <NSSecureCoding>
{
    BOOL _needsPreInstallValidation;
    BOOL _installAfterLogout;
    BOOL _didAutoUpdate;
    BOOL _skipAssetDownloadIfNotAlreadyOnDisk;
    BOOL _needsDisplayInDock;
    BOOL _isInServerQueue;
    NSArray *_assets;
    SSDownloadMetadata *_metadata;
    SSDownloadStatus *_status;
    unsigned long long _downloadType;
    NSNumber *_accountDSID;
    NSString *_cancelURLString;
    NSString *_installPath;
    NSURL *_relaunchAppWithBundleURL;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL isInServerQueue; // @synthesize isInServerQueue=_isInServerQueue;
@property BOOL needsDisplayInDock; // @synthesize needsDisplayInDock=_needsDisplayInDock;
@property BOOL skipAssetDownloadIfNotAlreadyOnDisk; // @synthesize skipAssetDownloadIfNotAlreadyOnDisk=_skipAssetDownloadIfNotAlreadyOnDisk;
@property(copy) NSURL *relaunchAppWithBundleURL; // @synthesize relaunchAppWithBundleURL=_relaunchAppWithBundleURL;
@property(copy) NSString *installPath; // @synthesize installPath=_installPath;
@property BOOL didAutoUpdate; // @synthesize didAutoUpdate=_didAutoUpdate;
@property(copy) NSString *cancelURLString; // @synthesize cancelURLString=_cancelURLString;
@property(copy) NSNumber *accountDSID; // @synthesize accountDSID=_accountDSID;
@property BOOL installAfterLogout; // @synthesize installAfterLogout=_installAfterLogout;
@property unsigned long long downloadType; // @synthesize downloadType=_downloadType;
@property(retain, nonatomic) SSDownloadStatus *status; // @synthesize status=_status;
@property(copy, nonatomic) SSDownloadMetadata *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property BOOL skipInstallPhase;
- (void)setUseUniqueDownloadFolder:(BOOL)arg1;
@property(copy) NSString *customDownloadPath;
- (id)primaryAsset;
- (void)cancelWithPrompt:(BOOL)arg1 storeClient:(id)arg2;
- (void)cancelWithStoreClient:(id)arg1;
- (void)cancelWithPrompt:(BOOL)arg1;
- (void)resumeWithStoreClient:(id)arg1;
- (void)pauseWithStoreClient:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithAssets:(id)arg1 metadata:(id)arg2;
- (id)init;
- (void)resume;
- (void)pause;
- (void)cancel;

@end

