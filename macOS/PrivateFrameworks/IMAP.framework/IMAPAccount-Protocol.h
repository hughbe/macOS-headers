//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/MCRemoteStoreAccount-Protocol.h>

@class IMAPConnection, IMAPMailbox, IMAPQuotaRoot, IMAPResponse, IMAPServerInterface, IMAPTaskManager, NSArray, NSDictionary, NSError, NSString, NSURL;
@protocol ECGmailLabel, IMAPMessageDataSource, MCMailbox;

@protocol IMAPAccount <MCRemoteStoreAccount>
@property(copy) NSString *serverPathPrefix;
@property(readonly, nonatomic) BOOL supportsMove;
@property BOOL supportsQuickResynchronization;
@property(readonly, copy, nonatomic) NSArray *allBackgroundMailboxNames;
@property(readonly) BOOL compactWhenClosingMailboxes;
@property(readonly) BOOL shouldMoveDeletedMessagesToTrash;
@property(readonly) BOOL allowsPartialDownloads;
@property(copy) NSDictionary *serverID;
@property(retain) NSError *connectionError;
@property(readonly, nonatomic) IMAPTaskManager *taskManager;
- (NSArray *)messageActionsAfterActionID:(long long)arg1;
- (void)setSupportsModificationSequences:(BOOL)arg1 forMailboxName:(NSString *)arg2;
- (id <MCMailbox>)mailboxForName:(NSString *)arg1;
- (id <IMAPMessageDataSource>)dataSourceForMailboxURL:(NSURL *)arg1 createIfNeeded:(BOOL)arg2;
- (id <IMAPMessageDataSource>)dataSourceForMailbox:(id <MCMailbox>)arg1 createIfNeeded:(BOOL)arg2;
- (id <IMAPMessageDataSource>)dataSourceForMailboxName:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (void)didConnectToServerWithServerInterface:(IMAPServerInterface *)arg1;
- (IMAPQuotaRoot *)quotaRootForName:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (BOOL)handleResponseCodeFromResponse:(IMAPResponse *)arg1;
- (IMAPMailbox *)IMAPMailboxForMailboxName:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (void)setSeparatorChar:(NSString *)arg1;
- (NSString *)separatorCharFetchIfNeeded:(BOOL)arg1;

@optional
- (void)detectAllMailMailboxWithConnection:(IMAPConnection *)arg1;
- (id <ECGmailLabel>)gmailLabelWithName:(NSString *)arg1;
@end

