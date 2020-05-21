//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFMailAccount.h>

#import <Mail/MFPOPAccount-Protocol.h>

@class ACAccount, ECAuthScheme, ECPOPAccount, MCActivityMonitor, MFPOPStore, NSArray, NSDate, NSLock, NSOperationQueue, NSString;

@interface MFPOPAccount : MFMailAccount <MFPOPAccount>
{
    NSLock *_connectionActivityLock;
    id _seenMessagesManagerLock;
    id _backgroundActivityFlagsLock;
    BOOL _backgroundFetchInProgress;
    BOOL _deletingMessages;
    BOOL _fetcherNeedsReset;
    BOOL _hasDoneBackgroundSynchronization;
    MFPOPStore *_fetcher;
    MCActivityMonitor *_fetchMonitor;
}

+ (id)standardSSLPorts;
+ (id)standardPorts;
+ (id)csAccountTypeString;
+ (id)accountTypeString;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasDoneBackgroundSynchronization; // @synthesize hasDoneBackgroundSynchronization=_hasDoneBackgroundSynchronization;
@property(nonatomic) BOOL fetcherNeedsReset; // @synthesize fetcherNeedsReset=_fetcherNeedsReset;
@property(retain, nonatomic) MCActivityMonitor *fetchMonitor; // @synthesize fetchMonitor=_fetchMonitor;
@property(retain, nonatomic) MFPOPStore *fetcher; // @synthesize fetcher=_fetcher;
@property(nonatomic) BOOL deletingMessages; // @synthesize deletingMessages=_deletingMessages;
- (void)_sendMailboxDidEndSyncTaskNotification;
- (void)_sendMailboxDidStartSyncTaskNotification;
- (id)storeForMailbox:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)URLPersistenceScheme;
- (void)_addAccountAndSeenMessagesToMessageManager;
- (id)newSeenMessagesManager;
- (BOOL)canAuthenticateWithScheme:(id)arg1;
- (id)archiveMailboxCreateIfNeeded:(BOOL)arg1;
- (void)relinquishConnectionActivityLock;
- (void)acquireConnectionActivityLock;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)deleteSeenMessagesNow;
- (void)deleteMessagesNow:(id)arg1;
@property long long delayedMessageDeletionInterval;
@property long long messageDeletionPolicy;
@property long long bigMessageWarningSize;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (BOOL)canCreateNewMailboxes;
- (BOOL)containsMailboxes;
- (id)primaryMailbox;
- (id)mailboxPathExtension;
- (BOOL)_setChildren:(id)arg1 forMailbox:(id)arg2;
- (Class)storeClassForMailbox:(id)arg1;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (BOOL)canGoOffline;
- (void)releaseAllConnections;
@property BOOL isFirstTimeSync;
- (void)resetFetcher;
- (BOOL)isFetching;
- (void)_backgroundFetchCompleted;
- (BOOL)shouldFetchIsAuto:(BOOL)arg1;
- (void)fetchAsynchronouslyIsAuto:(BOOL)arg1;
- (BOOL)_configureFetcherObject;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (id)init;
- (id)initWithSystemAccount:(id)arg1;
- (id)valueInMailboxesWithName:(id)arg1;
- (id)objectSpecifierForMailbox:(id)arg1;
- (id)mailboxes;
- (void)setDeleteMessagesOnServer:(BOOL)arg1;
- (BOOL)deleteMessagesOnServer;
- (void)setDeleteMessagesWhenMovedFromInbox:(BOOL)arg1;
- (BOOL)deleteMessagesWhenMovedFromInbox;

// Remaining properties
@property(readonly, copy) NSString *accountTypeString;
@property BOOL allowInsecureAuthentication;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(copy) NSString *authenticationScheme;
@property(readonly) ECPOPAccount *baseAccount; // @dynamic baseAccount;
@property(copy) NSString *canonicalEmailAddress;
@property(readonly, copy) NSString *clientInfo;
@property BOOL configureDynamically;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSString *displayName;
@property(readonly, copy) NSArray *emailAddressStrings;
@property(readonly, copy, nonatomic) NSDate *expiryDate;
@property(copy) NSString *externalHostname;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *hostname;
@property(readonly, copy) NSString *identifier;
@property(readonly, nonatomic) BOOL isGmailAccount;
@property(readonly) BOOL isYahooAccount;
@property(readonly, copy) NSString *machineID;
@property(readonly, nonatomic, getter=isManaged) BOOL managed;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *oneTimePassword;
@property(readonly, copy) NSString *password;
@property long long portNumber;
@property(retain) ECAuthScheme *preferredAuthScheme;
@property(readonly) BOOL primaryiCloudAccount;
@property(readonly, nonatomic) NSOperationQueue *remoteFetchQueue;
@property(readonly, nonatomic) NSOperationQueue *remoteTaskQueue;
@property long long securityLayerType;
@property BOOL shouldUseAuthentication;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly, copy, nonatomic) NSString *statisticsKind;
@property(readonly) Class superclass;
@property(readonly, copy) ACAccount *systemAccount;
@property(readonly, copy) NSString *username;
@property BOOL usesSSL;

@end

