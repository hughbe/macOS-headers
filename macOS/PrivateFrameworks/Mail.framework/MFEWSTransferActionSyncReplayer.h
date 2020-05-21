//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECTransferActionReplayer.h>

#import <Mail/ECTransferActionReplayerSubclassMethods-Protocol.h>

@class MFEWSConnection, NSString;

@interface MFEWSTransferActionSyncReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods>
{
    MFEWSConnection *_connection;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MFEWSConnection *connection; // @synthesize connection=_connection;
- (id)_folderIDStringForMailboxURLString:(id)arg1;
- (id)_folderIDStringForMailbox:(id)arg1;
- (id)_bodyRequestShape;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (BOOL)isRecoverableError:(id)arg1;
- (BOOL)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (BOOL)deleteSourceMessagesFromTransferItems:(id)arg1;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (id)replayActionUsingEWSConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

