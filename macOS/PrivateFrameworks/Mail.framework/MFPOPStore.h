//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFMessageStore.h>

#import <Mail/MFPOPConnectionDelegate-Protocol.h>
#import <Mail/MFRouterStore-Protocol.h>

@class MFPOPAccount, NSMutableIndexSet, NSMutableSet, NSProgress, NSString;

@interface MFPOPStore : MFMessageStore <MFPOPConnectionDelegate, MFRouterStore>
{
    NSMutableSet *_skippedMessageIds;
    NSMutableIndexSet *_messageNumbersToDelete;
    BOOL _lastConnectionFailed;
    BOOL _performingUserInitiatedFetch;
    BOOL _routerCancelled;
    NSProgress *_checkProgress;
}

+ (id)_log;
- (void).cxx_destruct;
@property(retain, nonatomic) NSProgress *checkProgress; // @synthesize checkProgress=_checkProgress;
@property BOOL routerCancelled; // @synthesize routerCancelled=_routerCancelled;
@property(nonatomic) BOOL performingUserInitiatedFetch; // @synthesize performingUserInitiatedFetch=_performingUserInitiatedFetch;
- (void)_finishCheckingForMailProgress;
- (void)_setFoundNewUnreadMessageInInbox;
- (void)_incrementFoundMessages:(unsigned long long)arg1;
- (void)_beginCheckingForMailProgress;
- (void)messagesWereRouted:(id)arg1;
- (void)messagesWillBeRouted:(id)arg1;
- (id)_defaultRouterDestination;
- (void)cancel;
- (void)connection:(id)arg1 didRetrieveData:(id)arg2 forMessageNumber:(unsigned long long)arg3;
- (long long)connection:(id)arg1 willRetrieveMessageNumber:(unsigned long long)arg2 header:(id)arg3 size:(unsigned long long)arg4;
- (void)connection:(id)arg1 receivedNumberOfBytes:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL connectionShouldPrefetchMessages;
- (void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2;
- (id)moveMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(BOOL)arg3;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (void)_cancelAutosave;
- (void)_setNeedsAutosave;
- (void)writeUpdatedMessageDataToDisk;
- (id)messageForMessageID:(id)arg1;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)displayName;
- (BOOL)isOpened;
- (id)mailbox;
- (id)_copyMessageNumbersToDelete;
- (void)_clearMessageNumbersToDelete;
- (void)_addMessageNumberToDelete:(unsigned long long)arg1;
- (BOOL)_closeConnection:(id)arg1;
- (void)_deleteMessagesMarkedForDeletionUsingManager:(id)arg1;
- (void)_removeDeletedMessagesWithNumbers:(id)arg1 fromSeenMessageManager:(id)arg2 connection:(id)arg3;
- (BOOL)_shouldDeleteSeenMessage:(id)arg1 messageID:(id)arg2 deletionPolicy:(long long)arg3 cutoffDate:(id)arg4 url:(id)arg5 inbox:(id)arg6;
- (id)_messageIDForNumber:(unsigned long long)arg1 serverIdsByNumber:(id)arg2 connection:(id)arg3;
- (BOOL)_firstAndLast:(unsigned long long)arg1 onConnection:(id)arg2 alreadySeen:(id)arg3;
- (void)_backgroundFetchFailed:(id)arg1;
- (id)_authenticatedConnection;
- (BOOL)_createDirectoryIfNeeded;
- (void)fetchSynchronously;
- (void)deleteMessages:(id)arg1;
@property(readonly, nonatomic) MFPOPAccount *account;
- (id)initWithMailbox:(id)arg1 readOnly:(BOOL)arg2 createEmptyStore:(BOOL)arg3;
- (id)init;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

