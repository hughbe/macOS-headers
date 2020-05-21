//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Mail/MFAccount.h>

#import <Mail/EDReceivingAccount-Protocol.h>
#import <Mail/MCActivityTarget-Protocol.h>
#import <Mail/MCMailAccount-Protocol.h>
#import <Mail/MFMessageDelivererDelegate-Protocol.h>
#import <Mail/NSFileManagerDelegate-Protocol.h>

@class ACAccount, ECAuthScheme, MCTaskManager, MFDeliveryAccount, MFMailbox, NSArray, NSDate, NSError, NSNumber, NSObject, NSOperationQueue, NSString, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MFMailAccount : MFAccount <EDReceivingAccount, MCActivityTarget, MCMailAccount, MFMessageDelivererDelegate, NSFileManagerDelegate>
{
    id _mailAccountLock;
    id _mailboxLock;
    MFMailbox *_inboxMailbox;
    MFMailbox *_rootMailbox;
    MFMailbox *_draftsMailbox;
    MFMailbox *_sentMessagesMailbox;
    MFMailbox *_trashMailbox;
    MFMailbox *_junkMailbox;
    MFMailbox *_notesMailbox;
    MFMailbox *_todosMailbox;
    MFMailbox *_outboxMailbox;
    MFMailbox *_archiveMailbox;
    NSError *_connectionError;
    id _cacheChangeLock;
    NSObject<OS_dispatch_queue> *_cacheWriteQueue;
    NSObject<OS_dispatch_source> *_cacheWriteTimer;
    id _backgroundActivityFlagsLock;
    BOOL _cacheHasBeenRead;
    BOOL _mailboxListInitializationInProgress;
    BOOL _needsChecking;
    BOOL _isInitializingmailboxList;
    BOOL _usesMailboxCache;
    NSURL *_accountDirectory;
    MCTaskManager *_taskManager;
    NSOperationQueue *_backgroundWorkQueue;
}

+ (id)csAccountTypeString;
+ (id)keyPathsForValuesAffectingURLPersistenceHostname;
+ (id)_mailboxNameForPathComponent:(id)arg1;
+ (id)_pathComponentForMailboxName:(id)arg1;
+ (void)_postMailAccountsHaveChanged;
+ (id)_accountWithFileSystemPath:(id)arg1 relativePath:(id *)arg2;
+ (void)_enableMailboxListingNotifications:(BOOL)arg1;
+ (void)_disableMailboxListingNotifications;
+ (BOOL)_mailboxListingNotificationAreEnabled;
+ (BOOL)_mailAccountsAreInitialized;
+ (void)_normalizePathComponentsInMailboxesDictionary:(id)arg1 accountClass:(Class)arg2;
+ (void)normalizeMailboxPathComponentsInAllAccounts;
+ (void)resetCachedAccountPaths;
+ (id)mailboxForURL:(id)arg1 forceCreation:(BOOL)arg2 syncableURL:(BOOL)arg3;
+ (id)accountWithURLString:(id)arg1 includeInactiveAccounts:(BOOL)arg2;
+ (id)accountWithURLString:(id)arg1;
+ (id)URLForInfo:(id)arg1;
+ (id)infoForURL:(id)arg1;
+ (id)_accountForURL:(id)arg1;
+ (id)accountWithSyncableURLString:(id)arg1 includeInactiveAccounts:(BOOL)arg2;
+ (id)_accountForURL:(id)arg1 includeInactiveAccounts:(BOOL)arg2;
+ (void)_inferMissingCanonicalEmailAddressesForAccounts:(id)arg1 usingEmailAddresses:(id)arg2;
+ (void)inferMissingCanonicalEmailAddresses;
+ (id)mailboxForFileSystemPath:(id)arg1 create:(BOOL)arg2;
+ (void)resetAllSpecialMailboxes;
+ (void)synchronouslyEmptyMailboxType:(int)arg1 inAccounts:(id)arg2;
+ (BOOL)allAccountsDeleteInPlace;
+ (long long)numberOfDaysToKeepLocalTrash;
+ (id)accountsInitializingMailboxList;
+ (void)connectAllAccounts;
+ (void)disconnectAllAccounts;
+ (void)_setOnlineStateOfAllAccountsTo:(BOOL)arg1;
+ (BOOL)isAnyAccountOnline;
+ (BOOL)isAnyAccountOffline;
+ (void)refreshAllEmailAliases;
+ (id)defaultDeliveryAccount;
+ (id)accountDirectoryForSystemAccount:(id)arg1;
+ (id)newAccountWithSystemAccount:(id)arg1;
+ (id)accountWithPath:(id)arg1;
+ (id)allMailboxes;
+ (id)archiveMailboxes;
+ (id)junkMailboxes;
+ (id)draftMailboxes;
+ (id)sentMessagesMailboxes;
+ (id)outboxMailboxes;
+ (id)trashMailboxes;
+ (id)inboxMailboxes;
+ (id)_specialMailboxesUsingBlock:(CDUnknownBlockType)arg1;
+ (void)setOrderedActiveMailAccounts:(id)arg1;
+ (id)orderedActiveMailAccounts;
+ (id)specialMailboxes;
+ (id)outboxMessageStore:(BOOL)arg1;
+ (id)accountThatReceivedMessage:(id)arg1 matchingEmailAddress:(id *)arg2 fullUserName:(id *)arg3;
+ (id)preferredEmailAddressToReplyToMessage:(id)arg1;
+ (id)addressesThatReceivedMessage:(id)arg1;
+ (id)accountForHeaders:(id)arg1 message:(id)arg2;
+ (id)accountContainingEmailAddress:(id)arg1;
+ (id)_accountContainingEmailAddress:(id)arg1 matchingAddress:(id *)arg2 fullUserName:(id *)arg3;
+ (BOOL)isEmailAddressInAnyAccount:(id)arg1;
+ (id)allEmailAddressesIncludingDisplayName:(BOOL)arg1;
+ (id)accountWithParentIdentifier:(id)arg1;
+ (id)_accountFromArray:(id)arg1 withIdentifier:(id)arg2;
+ (id)accountWithIdentifier:(id)arg1;
+ (void)migrateUnreadCountInMailboxCache;
+ (void)saveAccountInfoToDefaults;
+ (id)remoteAccounts;
+ (BOOL)onlyGmailAccountsUsingAllMailAsArchiveAreActive;
+ (id)activeAccounts;
+ (id)_activeAccountsFromArray:(id)arg1;
+ (void)_removeAccountFromSortedPaths:(id)arg1;
+ (void)_setMailAccounts:(id)arg1 reloadingFromStorage:(BOOL)arg2;
+ (void)setMailAccounts:(id)arg1;
+ (id)mailAccounts;
+ (id)_systemAccountsWithTypeIdentifiers:(id)arg1 accountStore:(id)arg2;
+ (id)_newAccountsAndExistingAccounts:(id *)arg1 forAccountTypeIdentifiers:(id)arg2;
+ (void)reloadMailAccountsUsesMailboxCache:(BOOL)arg1;
+ (void)reloadMailAccounts;
+ (BOOL)discoverSettingsForIncompleteAccounts;
+ (void)_setupSortedPathsForAccounts:(id)arg1;
+ (void)_addAccountToSortedPaths:(id)arg1;
+ (void)completeDeferredAccountInitialization;
+ (BOOL)haveAccountsBeenConfigured;
+ (BOOL)accountsHaveBeenInitialized;
+ (void)initialize;
+ (id)accountFetchLog;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *backgroundWorkQueue; // @synthesize backgroundWorkQueue=_backgroundWorkQueue;
@property(nonatomic) BOOL usesMailboxCache; // @synthesize usesMailboxCache=_usesMailboxCache;
@property(readonly, nonatomic) MCTaskManager *taskManager; // @synthesize taskManager=_taskManager;
@property(readonly) BOOL isInitializingmailboxList; // @synthesize isInitializingmailboxList=_isInitializingmailboxList;
@property(readonly, nonatomic) NSURL *accountDirectory; // @synthesize accountDirectory=_accountDirectory;
@property(readonly) BOOL sourceIsManaged;
@property(readonly, nonatomic, getter=isManaged) BOOL managed;
@property(readonly) NSArray *emailAddresses;
- (id)uniqueID;
- (id)rootMailboxEvenIfInactive:(BOOL)arg1;
- (id)_mailboxPathPrefix:(BOOL)arg1;
- (id)_URLForInfo:(id)arg1;
@property(readonly, copy) NSString *URLPersistenceHostname;
@property(readonly, copy, nonatomic) NSString *URLPersistenceScheme;
- (id)_infoForMatchingURL:(id)arg1;
@property(readonly, nonatomic) BOOL shouldLogDeleteActivity;
- (BOOL)_canEmptyMessagesFromMailbox:(id)arg1;
- (id)_specialMailboxWithType:(int)arg1 create:(BOOL)arg2;
- (void)_setSpecialMailboxRelativePath:(id)arg1 forType:(int)arg2;
- (id)_specialMailboxRelativePathForType:(int)arg1;
- (void)_setSpecialMailbox:(id)arg1 forType:(int)arg2;
- (BOOL)_assignSpecialMailboxToAppropriateIvar:(id)arg1 forType:(int)arg2;
- (id)_defaultSpecialMailboxRelativePathForType:(int)arg1;
- (void)_clearAllPathBasedCachesAndDelete:(BOOL)arg1;
- (void)_emptySpecialMailboxesIfNeededForQuit:(BOOL)arg1;
- (void)_emptySpecialMailboxesIfNeeded;
- (BOOL)_deleteMailbox:(id)arg1 reflectToServer:(BOOL)arg2;
- (BOOL)_setChildren:(id)arg1 addedChild:(id)arg2 forMailbox:(id)arg3;
- (BOOL)_setChildren:(id)arg1 forMailbox:(id)arg2;
- (id)_insertMailbox:(id)arg1 intoParent:(id)arg2 withDisplayName:(id)arg3;
- (void)_writeMailboxCache;
- (id)_dictionaryForMailbox:(id)arg1;
- (void)_loadEntriesFromFileSystemPath:(id)arg1 parent:(id)arg2;
- (void)_synchronizeMailboxListWithFileSystemBeforeImport;
- (void)_synchronizeMailboxListWithFileSystem;
- (void)_synchronizeMailboxListWithFileSystemBeforeImport:(BOOL)arg1;
- (BOOL)_readMailboxCache;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2 names:(id)arg3;
- (void)_loadMailboxListingIntoCache:(id)arg1 parent:(id)arg2 addedMailboxes:(id)arg3 removedMailboxes:(id)arg4 hasAllMailMailbox:(char *)arg5;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (id)_copyMailboxWithParent:(id)arg1 name:(id)arg2 pathComponent:(id)arg3 attributes:(unsigned long long)arg4 existingMailbox:(id)arg5;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)_postMailAccountsHaveChangedIfNeeded;
- (void)setisEnabled:(BOOL)arg1;
- (void)_configureMailboxCacheEvenIfInactive:(BOOL)arg1;
- (void)messageDeliveryDidFinish:(id)arg1;
- (BOOL)discoverSettings;
@property(readonly) BOOL needsToDiscoverSettings;
- (void)respondToHostBecomingReachable;
@property(readonly, nonatomic) BOOL storesUnseenCount;
@property(readonly, nonatomic) BOOL supportsAppleScript;
@property(readonly, nonatomic) BOOL hasTrashMailbox;
@property(readonly, nonatomic) BOOL isRemoteAccount;
@property(readonly, nonatomic) BOOL isZeroConfiguration;
@property(readonly, nonatomic) BOOL providesAccountInformation;
@property(readonly, nonatomic) BOOL canParticipateInRules;
@property(readonly, nonatomic) BOOL isEditableByUser;
@property(readonly, nonatomic) BOOL synchronizesDataWithServer;
@property(readonly, copy, nonatomic) NSString *syncableURLString;
@property(readonly, copy, nonatomic) NSString *URLString;
- (id)objectSpecifier;
- (id)objectSpecifierForMailbox:(id)arg1;
- (id)objectSpecifierForMessageStore:(id)arg1;
- (id)valueInMailboxesWithName:(id)arg1;
- (id)mailboxForRelativePath:(id)arg1 isFilesystemPath:(BOOL)arg2 create:(BOOL)arg3;
- (id)storeForMailbox:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)storeForMailbox:(id)arg1;
@property(retain) NSError *connectionError;
- (void)accountInfoDidChange;
@property long long portNumber;
@property(copy) NSString *hostname;
- (void)setUsername:(id)arg1;
- (void)_resetAllMailboxURLs;
- (void)invalidateChildrenOfMailbox:(id)arg1;
- (BOOL)deleteMailbox:(id)arg1 reflectToServer:(BOOL)arg2;
- (BOOL)renameMailbox:(id)arg1 newDisplayName:(id)arg2 parent:(id)arg3;
- (id)createMailboxWithParent:(id)arg1 displayName:(id)arg2 localizedDisplayName:(id)arg3;
- (id)createMailboxWithParent:(id)arg1 name:(id)arg2;
@property(readonly, nonatomic) BOOL supportsNormalContainerOnlyMailboxes;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (BOOL)canMailboxBeRenamed:(id)arg1;
- (id)validNameForMailbox:(id)arg1 fromDisplayName:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) BOOL supportsSlashesInMailboxName;
@property(readonly, nonatomic) BOOL canMoveMailboxes;
@property(readonly, nonatomic) BOOL canCreateNewMailboxes;
@property(readonly, copy, nonatomic) NSString *mailboxPathExtension;
- (BOOL)resetSpecialMailboxes;
@property(readonly, nonatomic) BOOL containsMailboxes;
- (id)displayNameForMailbox:(id)arg1;
@property(readonly, copy, nonatomic) NSString *displayName;
- (void)emptySpecialMailboxesThatNeedToBeEmptiedAtQuit;
@property(readonly, nonatomic) BOOL canMoveDeletedMessagesToTrash;
@property BOOL shouldMoveDeletedMessagesToTrash;
@property(nonatomic) long long emptyTrashFrequency;
@property(nonatomic) long long emptyJunkFrequency;
- (void)setEmptySentMessagesFrequency:(long long)arg1;
- (long long)emptySentMessagesFrequency;
- (long long)_emptyFrequencyForMailDataclassProperty:(id)arg1 defaultValue:(long long)arg2;
- (void)deleteMessagesFromMailbox:(id)arg1 olderThanNumberOfDays:(long long)arg2;
- (void)setToDosMailbox:(id)arg1;
- (void)setArchiveMailbox:(id)arg1;
@property(retain, nonatomic) MFMailbox *notesMailbox;
- (void)setSentMessagesMailbox:(id)arg1;
- (void)setJunkMailbox:(id)arg1;
- (void)setTrashMailbox:(id)arg1;
- (void)setDraftsMailbox:(id)arg1;
- (id)allMailboxesEvenIfInactive:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSArray *allMailboxes;
- (BOOL)containsMailboxWithURL:(id)arg1;
- (id)mailboxForType:(long long)arg1;
- (id)_outboxMailboxCreateIfNeeded:(BOOL)arg1;
- (id)archiveMailboxCreateIfNeeded:(BOOL)arg1;
- (id)trashMailboxCreateIfNeeded:(BOOL)arg1;
- (id)sentMessagesMailboxCreateIfNeeded:(BOOL)arg1;
- (id)junkMailboxCreateIfNeeded:(BOOL)arg1;
- (id)draftsMailboxCreateIfNeeded:(BOOL)arg1;
- (id)inboxMailboxCreateIfNeeded:(BOOL)arg1;
@property(readonly) BOOL shouldArchiveByDefault;
@property(readonly) BOOL isLocalAccount;
@property(readonly, nonatomic) BOOL rootChildrenCanBePromoted;
@property(readonly) BOOL rootMailboxExists;
- (BOOL)mailboxIsRootMailbox:(id)arg1;
@property(readonly, copy) MFMailbox *rootMailbox;
@property(readonly) MFMailbox *primaryMailbox;
@property(readonly, nonatomic) BOOL hasSyncActivity;
@property(readonly, nonatomic) BOOL isFetching;
- (void)stopAccountActivity;
- (void)fetchAsynchronouslyIsAuto:(BOOL)arg1;
- (BOOL)shouldFetchIsAuto:(BOOL)arg1;
@property BOOL needsChecking;
- (void)didInitializeMailboxList;
- (void)willInitializeMailboxList;
- (BOOL)isInitializingMailboxList;
- (BOOL)_supportsMailboxListInitialization;
@property(readonly, nonatomic) BOOL canBeSynchronized;
@property(readonly, nonatomic) BOOL canAppendMessages;
- (void)synchronizeWithFilesystem;
@property(readonly, nonatomic) NSOperationQueue *remoteFetchQueue;
@property(readonly, nonatomic) NSOperationQueue *remoteTaskQueue;
@property(readonly, nonatomic) BOOL canFetch;
- (void)setIsWillingToGoOnline:(BOOL)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (void)invalidateAllStores;
- (void)doRoutineCleanup;
- (void)_scheduleCacheWriteIfNeeded;
- (void)_cancelCacheWriteTimer;
- (void)saveCacheImmediately:(BOOL)arg1;
- (void)deleteAccount;
- (void)_synchronouslyInvalidateAndDelete:(BOOL)arg1;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtURL:(id)arg3;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (void)promptUserForDeletionInWindow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShouldAutoFetch:(BOOL)arg1;
- (BOOL)shouldAutoFetch;
- (void)setParentAccountDefaultAlias:(id)arg1;
- (BOOL)getDefaultEmailAliasDisplayName:(id *)arg1 emailAddress:(id *)arg2;
@property(readonly) NSURL *emailAliasesEditingURL;
@property(copy) NSArray *emailAliases;
- (void)setApplescriptEmailAddresses:(id)arg1;
- (id)applescriptEmailAddresses;
@property(copy) NSArray *emailAddressStrings;
@property(readonly, copy) NSArray *rawEmailAddresses;
@property(readonly, copy) NSString *firstEmailAddress;
@property BOOL deliveryAccountIsLocked;
- (void)_mailboxUserInfoDidChange:(id)arg1;
@property(retain, nonatomic) NSNumber *useMailDrop;
- (void)_deliveryAccountWillBeRemoved:(id)arg1;
@property(readonly, nonatomic) MFDeliveryAccount *dynamicDeliveryAccount;
@property(retain, nonatomic) MFDeliveryAccount *deliveryAccount;
@property(copy) NSString *smtpIdentifier;
@property(copy) NSString *fullUserName;
- (void)setApplescriptFullUserName:(id)arg1;
- (id)applescriptFullUserName;
- (id)path;
@property(readonly, copy, nonatomic) NSString *statisticsKind;
- (BOOL)_performBlock:(CDUnknownBlockType)arg1 forMessagesFetchedWithBlock:(CDUnknownBlockType)arg2 withBatchSize:(unsigned long long)arg3;
- (void)completeDeferredInitialization;
- (void)dealloc;
- (id)initWithSystemAccount:(id)arg1;
- (id)_newTaskManager;
@property(readonly) MFMailbox *allMailMailbox;
@property(readonly, nonatomic) MFMailbox *todosMailbox;
- (BOOL)mailboxIsEmpty:(id)arg1;
- (BOOL)hasEmailAddress:(id)arg1;
@property(readonly, copy) NSString *backupID;
- (void)setEmptyJunkOnQuit:(BOOL)arg1;
- (BOOL)emptyJunkOnQuit;
- (void)setEmptySentMessagesOnQuit:(BOOL)arg1;
- (BOOL)emptySentMessagesOnQuit;
- (void)setEmptyTrashOnQuit:(BOOL)arg1;
- (BOOL)emptyTrashOnQuit;
- (void)insertInMailboxes:(id)arg1;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *mailboxes;
- (id)indicesOfObjectsByEvaluatingObjectSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *accountTypeString;
@property BOOL allowInsecureAuthentication;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(copy) NSString *authenticationScheme;
@property(copy) NSString *canonicalEmailAddress;
@property(readonly, copy) NSString *clientInfo;
@property BOOL configureDynamically;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDate *expiryDate;
@property(copy) NSString *externalHostname;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *identifier;
@property(readonly, nonatomic) BOOL isGmailAccount;
@property(readonly) BOOL isManaged;
@property(readonly) BOOL isYahooAccount;
@property(readonly, copy) NSString *machineID;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *oneTimePassword;
@property(copy) NSString *password;
@property(retain) ECAuthScheme *preferredAuthScheme;
@property(readonly) BOOL primaryiCloudAccount;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property long long securityLayerType;
@property BOOL shouldUseAuthentication;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly) Class superclass;
@property(readonly, copy) ACAccount *systemAccount;
@property(readonly, copy) NSString *username;
@property BOOL usesSSL;

@end

