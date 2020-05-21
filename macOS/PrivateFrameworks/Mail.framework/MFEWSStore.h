//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFRemoteStore.h>

#import <Mail/MFEWSErrorHandler-Protocol.h>

@class MFEWSAccount, NSLock, NSMutableSet, NSString;

@interface MFEWSStore : MFRemoteStore <MFEWSErrorHandler>
{
    NSString *_syncState;
    NSLock *_syncLock;
    NSMutableSet *_flagsToSetDuringSync;
    NSString *_folderIdString;
}

- (void).cxx_destruct;
@property(copy) NSString *folderIdString; // @synthesize folderIdString=_folderIdString;
- (void)handleEWSError:(id)arg1;
- (BOOL)_loadFolderId;
- (void)_setSyncState:(id)arg1 persistToLibrary:(BOOL)arg2;
@property(copy) NSString *syncState;
- (id)_gateway;
@property(readonly, nonatomic) MFEWSAccount *account;
- (void)_fetchChangesFromServer;
- (void)sendResponseType:(BOOL)arg1 forMeetingMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)undeleteMessagesWithEWSItemIdStrings:(id)arg1;
- (void)deleteMessageWithEWSItemIdString:(id)arg1;
- (id)updateWithSyncState:(id)arg1 newMessages:(id)arg2 updatedMessages:(id)arg3 updatedLibraryIdStrings:(id)arg4 deletedMessages:(id)arg5 flagsByMessages:(id)arg6 isFinalBatch:(BOOL)arg7;
- (void)forceResync;
- (id)lastSyncDate;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (void)fetchSynchronously;
- (void)openSynchronouslyIfWaitingToOpen;
- (void)openSynchronouslyUpdatingMetadata:(BOOL)arg1;
- (BOOL)allowsDeleteInPlace;
- (BOOL)allowsOverwrite;
- (BOOL)canRebuild;
- (id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

