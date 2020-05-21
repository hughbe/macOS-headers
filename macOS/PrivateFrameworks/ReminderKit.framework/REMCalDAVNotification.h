//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSCopying-Protocol.h>
#import <ReminderKit/NSSecureCoding-Protocol.h>
#import <ReminderKit/REMDAChangeTrackableModel-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataProviding-Protocol.h>
#import <ReminderKit/REMExternalSyncMetadataWritableProviding-Protocol.h>
#import <ReminderKit/REMObjectIDProviding-Protocol.h>
#import <ReminderKit/_REMDAChangeTrackableModel-Protocol.h>

@class NSString, NSURL, REMObjectID;

@interface REMCalDAVNotification : NSObject <REMDAChangeTrackableModel, _REMDAChangeTrackableModel, REMExternalSyncMetadataWritableProviding, NSSecureCoding, NSCopying, REMObjectIDProviding, REMExternalSyncMetadataProviding>
{
    NSString *externalIdentifier;
    NSString *externalModificationTag;
    NSString *daPushKey;
    NSString *daSyncToken;
    NSString *_uuidString;
    NSURL *_hostURL;
    REMObjectID *_objectID;
    REMObjectID *_accountID;
    REMObjectID *_listID;
}

+ (id)cdEntityName;
+ (id)objectIDWithUUID:(id)arg1;
+ (id)newObjectID;
+ (BOOL)supportsSecureCoding;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromLazyDeletedModelObjectBlock;
+ (CDUnknownBlockType)rem_DA_deletedKeyFromTombstoneBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDsBlock;
+ (CDUnknownBlockType)rem_DA_fetchByObjectIDBlock;
+ (BOOL)rem_DA_supportsLazyDelete;
+ (BOOL)rem_DA_supportsFetching;
- (void).cxx_destruct;
@property(readonly, nonatomic) REMObjectID *listID; // @synthesize listID=_listID;
@property(readonly, nonatomic) REMObjectID *accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) REMObjectID *objectID; // @synthesize objectID=_objectID;
@property(retain, nonatomic) NSURL *hostURL; // @synthesize hostURL=_hostURL;
@property(retain, nonatomic) NSString *uuidString; // @synthesize uuidString=_uuidString;
@property(copy, nonatomic) NSString *daSyncToken; // @synthesize daSyncToken;
@property(copy, nonatomic) NSString *daPushKey; // @synthesize daPushKey;
@property(copy, nonatomic) NSString *externalModificationTag; // @synthesize externalModificationTag;
@property(copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier;
@property(readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property(readonly, nonatomic) REMObjectID *remObjectID;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initCalDAVNotificationWithObjectID:(id)arg1 accountID:(id)arg2 listID:(id)arg3 uuidString:(id)arg4 hostURL:(id)arg5 externalIdentifier:(id)arg6 externalModificationTag:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

