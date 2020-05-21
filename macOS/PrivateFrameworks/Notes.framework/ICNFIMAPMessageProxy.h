//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICNFMCManagedObjectProxy.h>

#import <Notes/ICNFIMAPMessage-Protocol.h>
#import <Notes/ICNFIMAPPersistedMessage-Protocol.h>

@class NSDate, NSManagedObjectID, NSString;

@interface ICNFIMAPMessageProxy : ICNFMCManagedObjectProxy <ICNFIMAPMessage, ICNFIMAPPersistedMessage>
{
    CDStruct_07ba05d6 _remoteFlags;
}

- (void)appendData:(id)arg1 part:(id)arg2;
- (void)setData:(id)arg1 isPartial:(BOOL)arg2;
@property(copy) NSString *remoteID;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) BOOL persistentIDType;
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property(readonly, copy) NSDate *dateReceived;
@property(readonly, copy) NSString *subject;
@property(readonly) unsigned long long messageSize;
@property(readonly) CDStruct_07ba05d6 remoteFlags;
@property BOOL hasTemporaryUid;
@property BOOL partsHaveBeenCached;
@property BOOL isPartial;
@property(readonly, copy, nonatomic) NSString *messageID;
@property(nonatomic) unsigned int uid;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long libraryID;
@property(readonly) Class superclass;

@end

