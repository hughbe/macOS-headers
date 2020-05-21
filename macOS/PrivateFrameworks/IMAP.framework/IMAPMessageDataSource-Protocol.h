//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/MCMessageDataSource-Protocol.h>

@class ECMessageFlagChange, ECMessageFlags, EDMessageChangeManager, EDServerMessagePersistence, IMAPCommandPipeline, IMAPDownloadCache, IMAPMessage, IMAPServerInterface, NSArray, NSDate, NSSet, NSString;
@protocol IMAPAccount, IMAPPersistedMessage;

@protocol IMAPMessageDataSource <MCMessageDataSource>
@property(readonly, copy, nonatomic) NSArray *duplicateRemoteIDs;
@property(nonatomic) unsigned int uidValidityStatus;
@property(readonly) EDMessageChangeManager *messageChangeManager;
@property(readonly) EDServerMessagePersistence *serverMessagePersistence;
@property(retain) NSDate *lastSyncDate;
@property BOOL supportsModificationSequences;
@property(nonatomic) unsigned long long allegedHighestModificationSequence;
@property(nonatomic) unsigned int uidNextStatus;
@property(readonly, nonatomic) unsigned int maximumUID;
@property(readonly, nonatomic) IMAPDownloadCache *downloadCache;
@property(readonly, nonatomic) IMAPCommandPipeline *fetchPipeline;
@property(readonly, nonatomic) unsigned long long serverMessageCount;
@property(readonly, nonatomic) unsigned long long totalCountOfMessages;
@property(readonly, nonatomic) unsigned int permanentFlags;
@property(readonly, nonatomic) BOOL isTrash;
@property(readonly, nonatomic) BOOL isAllMailMailbox;
@property(readonly, nonatomic) BOOL isInbox;
@property(readonly, nonatomic) long long mailboxID;
@property(readonly, copy) NSString *mailboxName;
@property(readonly, nonatomic) id <IMAPAccount> account;
- (void)fixMessagesAndResetIMAPMessages;
- (BOOL)mailboxHasInconsistencies;
- (void)moveMessagesToRecoveredMail:(NSArray *)arg1;
- (NSArray *)messagesWithRemoteIDs:(NSArray *)arg1;
- (NSArray *)messagesWithRowIDs:(NSArray *)arg1;
- (id <IMAPPersistedMessage>)messageWithDefaultLoadOptionsAndRowID:(long long)arg1;
- (void)setUidNextStatusIfNeeded:(unsigned int)arg1;
- (void)setComputedHighestModificationSequence:(unsigned long long)arg1;
- (ECMessageFlagChange *)flagChangeFromLocalFlags:(ECMessageFlags *)arg1 toServerFlags:(ECMessageFlags *)arg2;
- (void)undeleteMessagesWithDetails:(NSArray *)arg1;
- (BOOL)messageHasBeenDeleted:(id <IMAPPersistedMessage>)arg1;
- (NSSet *)fetchAndCacheBodyDataForMessages:(NSSet *)arg1 withServerInterface:(IMAPServerInterface *)arg2;
- (BOOL)hasValidCacheFileForMessage:(IMAPMessage *)arg1;
- (BOOL)hasCacheFileForMessage:(id <IMAPPersistedMessage>)arg1;
- (NSArray *)copyIncompleteMessages;
- (unsigned long long)totalCountAndUnseenCount:(unsigned long long *)arg1 adjustedUnreadCount:(unsigned long long *)arg2;
@end

