//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSFileProviderItem-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSFileProviderItemVersion, NSNumber, NSPersonNameComponents, NSString;
@protocol NSFileProviderItemFlags;

__attribute__((visibility("hidden")))
@interface FPNSFileProviderItemHelper : NSObject <NSFileProviderItem>
{
    NSString *itemIdentifier;
    NSString *parentItemIdentifier;
    NSString *filename;
    NSString *typeIdentifier;
    unsigned long long capabilities;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long capabilities; // @synthesize capabilities;
@property(readonly, copy, nonatomic) NSString *typeIdentifier; // @synthesize typeIdentifier;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename;
@property(readonly, copy, nonatomic) NSString *parentItemIdentifier; // @synthesize parentItemIdentifier;
@property(readonly, copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier;
- (id)fp_sharingCurrentUserPermissions;
- (id)fp_sharingCurrentUserRole;
- (BOOL)fp_isWritable;
- (BOOL)fp_isReadable;
- (id)fp_downloadingStatus;

// Remaining properties
@property(readonly, copy, nonatomic) NSNumber *childItemCount;
@property(readonly, copy, nonatomic) NSDate *contentModificationDate;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSNumber *documentSize;
@property(readonly, nonatomic, getter=isDownloaded) BOOL downloaded;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, copy, nonatomic) NSError *downloadingError;
@property(readonly, nonatomic, getter=isExcludedFromSync) BOOL excludedFromSync;
@property(readonly, nonatomic) NSDictionary *extendedAttributes;
@property(readonly, copy, nonatomic) NSNumber *favoriteRank;
@property(readonly, nonatomic) id <NSFileProviderItemFlags> flags;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSFileProviderItemVersion *itemVersion;
@property(readonly, copy, nonatomic) NSDate *lastUsedDate;
@property(readonly, nonatomic) NSPersonNameComponents *mostRecentEditorNameComponents;
@property(readonly, nonatomic, getter=isMostRecentVersionDownloaded) BOOL mostRecentVersionDownloaded;
@property(readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;
@property(readonly, nonatomic, getter=isShared) BOOL shared;
@property(readonly, nonatomic, getter=isSharedByCurrentUser) BOOL sharedByCurrentUser;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *symlinkTargetPath;
@property(readonly, copy, nonatomic) NSData *tagData;
@property(readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property(readonly, nonatomic, getter=isUploaded) BOOL uploaded;
@property(readonly, nonatomic, getter=isUploading) BOOL uploading;
@property(readonly, copy, nonatomic) NSError *uploadingError;
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSData *versionIdentifier;

@end

