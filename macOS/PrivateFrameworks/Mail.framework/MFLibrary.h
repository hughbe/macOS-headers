//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mail/EDSearchableIndexReasonProvider-Protocol.h>
#import <Mail/MCActivityTarget-Protocol.h>

@class EDConversationPersistence, EDPersistence, EDPersistenceDatabase, EFLazyCache, MFMailbox, MFMessageChangeManager_macOS, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSTimer;

@interface MFLibrary : NSObject <EDSearchableIndexReasonProvider, MCActivityTarget>
{
    _Atomic _Bool _libraryInitialized;
    id _libraryLock;
    NSMapTable *_mailboxRowIDToURLCache;
    NSMapTable *_mailboxURLToRowIDCache;
    MFMailbox *_currentMailbox;
    id _commitTimerLock;
    NSTimer *_commitTimer;
    NSMutableSet *_messagesToCommit;
    NSMutableDictionary *_lastViewedDateForMessageToCommit;
    id _updateEmlxLock;
    NSMutableSet *_messagesUpdatingEmlx;
    NSMutableSet *_messagesToUpdateEmlx;
    NSMutableDictionary *_mailboxDataDirectoryCache;
    NSArray *_messageLibraryIDsToUpdateEmlx;
    BOOL _restoredFromBackingStoreUpdateJournal;
    BOOL _updateEmlxInProgress;
    BOOL _logSQLitePerformance;
    BOOL _logSQLiteBlockPerformance;
    BOOL _logLibraryMainThreadAccess;
    BOOL _logBackingStoreJournalUpdates;
    BOOL _logSearchCriterion;
    BOOL _libraryIsImporting;
    unsigned long long _runningIndexOfCurrentMessage;
    unsigned long long _totalNumberOfMessages;
    NSMutableSet *_onlineAccounts;
    BOOL _didTagVersion;
    NSMutableDictionary *_importAddressRowids;
    NSMutableDictionary *_importSubjectRowids;
    NSMutableDictionary *_importMailboxRowids;
    NSOperationQueue *_writeQueue;
    NSOperationQueue *_messageNotificationSerializationQueue;
    NSHashTable *_registeredStores;
    id _activeMailboxesCacheLock;
    BOOL _activeAccountFilterOff;
    NSSet *_activeMailboxesCache;
    NSSet *_oldActiveMailboxesCache;
    BOOL _activeMailboxesCacheIsInvalid;
    id _activeMailboxesClauseLock;
    NSString *_activeMailboxesClause;
    id _databaseUUIDStringLock;
    NSString *_databaseUUIDString;
    id _myAddressIDsLock;
    NSString *_myAddressIDsString;
    NSSet *_myEmailAddresses;
    EDPersistence *_libraryPersistence;
    EDPersistenceDatabase *_libraryDatabase;
    MFMessageChangeManager_macOS *_messageChangeManager;
    EDConversationPersistence *_conversationPersistence;
    NSMutableArray *_mostRecentSpotlightQueries;
    EFLazyCache *_selectClauseCache;
}

+ (unsigned long long)cleanOldDatabases;
+ (long long)libraryStatusAsReader;
+ (long long)libraryStatusAsWriter:(id *)arg1;
+ (long long)_libraryStatusCanWrite:(BOOL)arg1 library:(id *)arg2;
+ (BOOL)_fileExists;
+ (long long)threadPriority;
+ (id)propertyMapper;
+ (BOOL)isSearchableIndexEnabled;
+ (id)defaultLibrary;
+ (void)loadSearchSettings;
+ (void)initialize;
+ (id)spotlightLog;
+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) EFLazyCache *selectClauseCache; // @synthesize selectClauseCache=_selectClauseCache;
@property(readonly, nonatomic) NSMutableArray *mostRecentSpotlightQueries; // @synthesize mostRecentSpotlightQueries=_mostRecentSpotlightQueries;
@property(readonly, nonatomic) EDConversationPersistence *conversationPersistence; // @synthesize conversationPersistence=_conversationPersistence;
@property(readonly, nonatomic) MFMessageChangeManager_macOS *messageChangeManager; // @synthesize messageChangeManager=_messageChangeManager;
@property(readonly, nonatomic) EDPersistenceDatabase *libraryDatabase; // @synthesize libraryDatabase=_libraryDatabase;
@property(readonly, nonatomic) EDPersistence *libraryPersistence; // @synthesize libraryPersistence=_libraryPersistence;
@property(readonly, copy, nonatomic) NSSet *currentReasons;
@property(readonly, copy, nonatomic) NSSet *exclusionReasons;
@property(readonly, copy, nonatomic) NSSet *purgeReasons;
@property(readonly, copy, nonatomic) NSSet *dataSourceRefreshReasons;
- (id)_messageForStatement:(id)arg1 loadOptions:(unsigned int)arg2 uniquer:(id)arg3 row:(id)arg4;
- (id)_messageForStatement:(id)arg1 loadOptions:(unsigned int)arg2 uniquer:(id)arg3;
- (unsigned long long)numberOfMessagesForAccount:(id)arg1;
- (void)performBlockDeferringMessageNotifications:(CDUnknownBlockType)arg1;
- (void)queueConversationFlagsChangedNotification:(id)arg1;
- (void)queueStoreFinishedFirstTimeSyncWithBlock:(CDUnknownBlockType)arg1;
- (void)queueMessagesDeletedBackupManagerNotification:(id)arg1;
- (void)queueMessagesCompactedNotification:(id)arg1;
- (void)queueMessageGmailLabelsChangedNotificationForMessages:(id)arg1;
- (void)_queueMessagesChangedNotificationForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 updateEmlx:(BOOL)arg4;
- (void)queueMessagesUpdatedNotification:(id)arg1;
- (void)queueMessagesAddedNotification:(id)arg1;
- (void)queueMessagesNotification:(id)arg1 withUserInfo:(id)arg2;
- (void)registerStoreForUpdates:(id)arg1;
- (void)_didCommit:(struct sqlite3 *)arg1;
- (id)newUnsignedForQuery:(id)arg1 db:(struct sqlite3 *)arg2;
- (void)tagDatabaseVersionIfNeeded:(id)arg1;
- (void)flushCachedDatabases;
- (id)sqlListWithArray:(id)arg1;
- (id)_mailboxForMailboxID:(long long)arg1 forceCreation:(BOOL)arg2;
- (long long)mailboxIDForMailboxURLString:(id)arg1 loadIfNotPresent:(BOOL)arg2;
- (long long)mailboxIDForMailbox:(id)arg1 loadIfNotPresent:(BOOL)arg2;
- (BOOL)addCalendarEvent:(id)arg1 toMessage:(id)arg2;
- (id)calendarEventForMessageID:(long long)arg1;
- (void)prepareToReImportMessages;
- (void)setTotalNumberOfMessages:(unsigned long long)arg1;
- (unsigned long long)totalNumberOfMessages;
- (unsigned long long)runningIndexOfCurrentMessage;
- (void)incrementRunningIndexOfCurrentMessage;
- (void)_setCurrentMailbox:(id)arg1;
- (id)currentMailbox;
@property(getter=isInitialized) BOOL initialized;
- (void)dispose;
- (void)takeAccountsOnlineAllAccounts:(BOOL)arg1;
- (void)upgradeMessageDirectoriesIfNeeded;
- (void)_upgradeMessageDirectoriesSynchronously;
- (id)_messagesDirectoryPathsFromDataPath:(id)arg1;
- (id)_versionedMessagesDirectoryPathsForMailboxPath:(id)arg1 uuidDirectoryPaths:(id *)arg2;
- (id)importMailboxRowIDs;
- (id)importSubjectRowIDs;
- (id)importAddressRowIDs;
- (BOOL)importMessagesFromEnabledAccounts;
- (void)setLibraryIsImporting:(BOOL)arg1;
- (BOOL)libraryIsImporting;
- (BOOL)_importMessageBatch:(id)arg1 fromMailbox:(id)arg2 store:(id)arg3 dataDirectory:(id)arg4 seenRemoteIDs:(id)arg5;
- (BOOL)_importMailbox:(id)arg1;
- (BOOL)rebuildMailbox:(id)arg1;
- (id)_mailboxPredictionQueryWithWhereClause:(id)arg1 limitedToRecents:(BOOL)arg2;
- (id)groupedMessagesCountByMailboxMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (void)setLastSpotlightCheckDate:(id)arg1 forMessageIDs:(id)arg2;
- (id)messagesInMailbox:(id)arg1 sinceLastSpotlightCheck:(id)arg2;
- (id)_searchableItemWithUpdateForLibraryID:(long long)arg1 messageIDHashString:(id)arg2;
- (id)messageIDHashStringForLegacyMessageIDHashString:(id)arg1;
- (id)updateMessageIDHashFormatIfNecessaryForLibraryIDsToMessageIDs:(id)arg1;
- (id)criterionExpressionStringForStartLibraryID:(long long)arg1 count:(unsigned long long)arg2;
- (BOOL)boolForCriterion:(id)arg1;
- (unsigned long long)countForCriterion:(id)arg1;
- (id)_queryForCountCriterion:(id)arg1;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 searchType:(long long)arg3;
- (id)_spotlightCallbackDispatchQueue;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 searchType:(long long)arg4 queryLabel:(id)arg5 async:(BOOL)arg6;
- (id)copyMostRecentSpotlightQueries;
- (void)_logQuery:(struct __MDQuery *)arg1 allowPII:(BOOL)arg2;
- (id)allMailboxesSearchableIndexQueryWithExpression:(id)arg1 builder:(CDUnknownBlockType)arg2 forUnreadCount:(BOOL)arg3 withMailboxExclusions:(BOOL)arg4 includeAttachmentCriterion:(BOOL)arg5;
- (id)allMailboxesSearchableIndexQueryExpressionWithExpression:(id)arg1 forUnreadCount:(BOOL)arg2 withMailboxExclusions:(BOOL)arg3 includeAttachmentCriterion:(BOOL)arg4;
- (struct __MDQuery *)createAllMailboxesSpotlightQueryWithQueryString:(id)arg1 queryLabel:(id)arg2 forUnreadCount:(BOOL)arg3 withMailboxExclusions:(BOOL)arg4 includeWhereFromsCriterion:(BOOL)arg5;
- (id)_mailboxURLStringsForCriterion:(id)arg1;
- (id)_mailboxURLStringForMailboxCriterion:(id)arg1;
- (id)_activeAccountIdentifiers;
- (id)_copyScopeDirectories:(id)arg1;
- (id)_copyScopeDirectoriesForCriterion:(id)arg1 allCriteriaAreMailbox:(char *)arg2;
- (id)_scopeIdentifiersForCriterion:(id)arg1 criterionIdentifierMapper:(CDUnknownBlockType)arg2 allCriteriaAreMailbox:(char *)arg3;
- (id)_scopeDirectoryForMailboxCriterion:(id)arg1;
- (id)relatedMessagesForWhereFromItems:(id)arg1 excludedMailboxes:(id)arg2;
- (id)queryForCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)queryForCriterion:(id)arg1 options:(unsigned int)arg2 baseTable:(unsigned long long)arg3 isSubquery:(BOOL)arg4 fixUpCriterion:(BOOL)arg5;
- (void)markMessageAsViewed:(id)arg1 viewedDate:(id)arg2;
- (id)attachmentURLForMessage:(id)arg1 partNumber:(id)arg2 attachmentFilename:(id)arg3 isMailDropImageArchive:(BOOL)arg4 isMailDropImageThumbnail:(BOOL)arg5;
- (BOOL)hasCacheFileForMessage:(id)arg1 part:(id)arg2;
- (BOOL)hasCacheFileForMessage:(id)arg1;
- (id)incompleteMessagesForMailbox:(id)arg1 sinceDate:(id)arg2;
- (id)_messageDataAtPath:(id)arg1;
- (BOOL)isMessageContentLocallyAvailable:(id)arg1;
- (id)fullMessageDataForMessage:(id)arg1;
- (id)messageDataForMessage:(id)arg1;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)headerDataForMessageWithPath:(id)arg1;
- (id)headerDataForLibraryID:(long long)arg1 mailboxID:(long long)arg2;
- (id)_bodyDataAtPath:(id)arg1 headerData:(id *)arg2;
- (id)mimeMessageDataSnippingPartsData:(id)arg1 mimePartBlock:(CDUnknownBlockType)arg2;
- (void)writeAttachmentsIfNeededForMessage:(id)arg1;
- (void)appendMimeData:(id)arg1 forMessage:(id)arg2 partNumber:(id)arg3;
- (BOOL)_writeAttachmentWithDecodedData:(id)arg1 forMessage:(id)arg2 mimePart:(id)arg3 headers:(id)arg4;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3 hasCompleteText:(BOOL)arg4;
- (id)snipAttachmentMimeForFileIfNeeded:(id)arg1 originalMessageData:(id)arg2 forMessage:(id)arg3;
- (id)existingDataFileForMessage:(id)arg1;
- (id)messageWithDataPath:(id)arg1;
- (id)_dataPathForMessageWithLibraryID:(long long)arg1 mailboxID:(long long)arg2 type:(long long)arg3;
- (id)_dataPathForMessage:(id)arg1 type:(long long)arg2;
- (id)dataURLForMessage:(id)arg1 partNumber:(id)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)_dataPathForMessageWithLibraryID:(long long)arg1 mailboxID:(long long)arg2 withFilename:(id)arg3;
- (id)dataPathForLibraryID:(long long)arg1 pathToMailbox:(id)arg2 type:(long long)arg3;
- (id)dataPathForLibraryID:(long long)arg1 pathToMailbox:(id)arg2 fileExists:(char *)arg3;
- (void)fileURLForAttachmentID:(id)arg1 messageID:(id)arg2 name:(id)arg3 result:(CDUnknownBlockType)arg4;
- (id)attachmentsDirectoryForMessage:(id)arg1 partNumber:(id)arg2;
- (id)attachmentsDirectoryForMessage:(id)arg1;
- (id)filenameForLibraryID:(long long)arg1 type:(long long)arg2;
- (id)filenameForLibraryID:(long long)arg1 part:(id)arg2;
- (id)intermediateDirectoryForLibraryID:(long long)arg1 forAttachments:(BOOL)arg2;
- (id)versionedIntermediateDirectoryForLibraryID:(long long)arg1 forAttachments:(BOOL)arg2;
- (id)dataDirectoryForMailbox:(id)arg1;
- (void)_invalidateDirectoryForMailboxes:(id)arg1;
- (id)databaseUUIDString;
- (void)_setDatabaseUUIDString:(id)arg1;
- (void)loadDatabaseUUIDStringIfNeeded:(id)arg1;
- (void)updateEWSOfflineIdsToRealIds:(id)arg1;
- (id)EWSSyncStateForMailbox:(id)arg1;
- (void)setEWSSyncState:(id)arg1 forMailbox:(id)arg2;
- (id)EWSFolderIdsByURLForMailboxes:(id)arg1;
- (id)EWSFolderIdForMailbox:(id)arg1;
- (void)setEWSFolderId:(id)arg1 forMailbox:(id)arg2;
- (id)_EWSProperty:(char *)arg1 forMailbox:(id)arg2 errorString:(id)arg3;
- (void)_addEWSProperty:(char *)arg1 value:(id)arg2 forMailbox:(id)arg3 errorString:(id)arg4;
- (BOOL)_EWSFolderExistsForMailbox:(id)arg1 errorString:(id)arg2;
- (BOOL)getTopLevelMimePart:(id *)arg1 headers:(id *)arg2 body:(id *)arg3 forMessage:(id)arg4 skipSignatureVerification:(BOOL)arg5;
- (id)draftWithDocumentID:(id)arg1 mailbox:(id)arg2;
- (id)lastMessageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (id)messagesWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (void)deleteMailboxes:(id)arg1 forRebuild:(BOOL)arg2;
- (BOOL)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)compactMailbox:(id)arg1;
- (void)cleanUpAfterRemovingMessageBatch:(id)arg1;
- (BOOL)removeMessageBatch:(id)arg1 connection:(id)arg2;
- (void)removeMessages:(id)arg1 cleanUpAfter:(BOOL)arg2;
- (void)removeMessages:(id)arg1;
- (void)deleteFilesForMessageWithLibraryID:(long long)arg1 emlxDirectory:(id)arg2 attachmentsDirectory:(id)arg3 cachedDirectoryContents:(id)arg4;
- (void)deleteFilesForMessage:(id)arg1 cachedDirectoryContents:(id)arg2;
- (BOOL)shouldCancel;
- (void)updateFileForMessage:(id)arg1;
- (void)reloadMessage:(id)arg1;
- (void)resetConversationsForExistingMessagesWithRowIDs:(id)arg1 connection:(id)arg2;
- (id)snippetsForMessages:(id)arg1;
- (void)loadSecondaryMetadataForMessage:(id)arg1;
- (id)mailboxNameForMessage:(id)arg1;
- (id)accountForMessage:(id)arg1;
- (id)_remoteStoreForMessage:(id)arg1;
- (id)_mailboxForMailboxID:(long long)arg1;
- (id)mailboxForMessage:(id)arg1;
- (id)urlForMailboxID:(long long)arg1;
- (void)mailboxesDidChange;
- (void)_discardMailboxCache;
- (void)reloadMailboxCacheUsingConnection:(id)arg1 forceReload:(BOOL)arg2;
- (id)copyMailboxURLToRowIDMap;
- (id)referencesForLibraryID:(long long)arg1;
- (BOOL)boolForQuery:(id)arg1;
- (unsigned long long)unsignedCountForQuery:(id)arg1 monitor:(id)arg2;
- (BOOL)messageHasRelatedNonJunkMessages:(id)arg1;
- (id)firstReplyToMessage:(id)arg1;
- (id)messagesWithLibraryIDs:(id)arg1 options:(unsigned int)arg2;
- (id)messageWithLibraryID:(long long)arg1;
- (id)_messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2 uniquer:(id)arg3;
- (id)messageWithLibraryID:(long long)arg1 options:(unsigned int)arg2;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messageWithMessageID:(id)arg1;
- (void)setStoreForMessage:(id)arg1 fromMailbox:(id)arg2 knownStores:(id)arg3;
- (void)_setStoreForMessage:(id)arg1 knownStores:(id)arg2;
- (void)setStoresForMessages:(id)arg1;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2 options:(unsigned int)arg3;
- (id)messagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2 options:(unsigned int)arg3;
- (unsigned long long)unreadCountForMessageType:(BOOL)arg1;
- (unsigned long long)totalCountForMailbox:(id)arg1 unseenCount:(unsigned long long *)arg2 adjustedUnreadCount:(unsigned long long *)arg3;
- (void)gatherCountsForMailbox:(id)arg1 totalCount:(unsigned long long *)arg2 unreadCount:(unsigned long long *)arg3 deletedCount:(unsigned long long *)arg4 totalSize:(unsigned long long *)arg5;
- (long long)_addMessageToCountContext:(CDStruct_33dcf794 *)arg1 statement:(id)arg2;
- (id)unreadMessagesForMailbox:(id)arg1;
- (id)duplicateRemoteIDsForMailboxWithURLString:(id)arg1;
- (id)messagesForGmailLabel:(id)arg1 inAllMailMailbox:(id)arg2 olderThanNumberOfDays:(long long)arg3;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(long long)arg2;
- (id)messagesForMailbox:(id)arg1 where:(id)arg2 sortedBy:(id)arg3 ascending:(BOOL)arg4 options:(unsigned int)arg5;
- (id)_queryForMailbox:(id)arg1 where:(id)arg2 sortedBy:(id)arg3 ascending:(BOOL)arg4 options:(unsigned int)arg5;
- (id)messagesWhere:(id)arg1 sortedBy:(id)arg2 options:(unsigned int)arg3;
- (id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3 options:(unsigned int)arg4;
- (id)messagesMatchingQuery:(id)arg1 options:(unsigned int)arg2;
- (id)messagesMatchingQuery:(id)arg1 limit:(long long)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingQuery:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingQuery:(id)arg1 to:(id)arg2 limit:(long long)arg3 options:(unsigned int)arg4;
- (void)_sendMessagesToTargetNow:(id)arg1;
- (void)_handleMessageRowWithContext:(id)arg1 statement:(id)arg2 uniquer:(id)arg3 row:(id)arg4;
- (void)setRecipientTypeForMessages:(id)arg1;
- (id)_activeMailboxesClauseRebuildIfNecessary;
- (BOOL)_isActiveMailboxID:(long long)arg1;
- (id)_copyActiveMailboxesCache;
- (void)_rebuildActiveMailboxesCacheIfNecessary;
- (void)_rebuildActiveMailboxesCache;
- (void)_getActiveAccountURLs:(id)arg1 andActiveMailboxURLs:(id)arg2;
- (void)disableActiveMailboxFiltering;
- (void)clearActiveMailboxesCache;
- (id)myAddressIDsString;
- (void)invalidateMyEmailAddressesIfContains:(id)arg1;
- (void)invalidateMyEmailAddresses;
- (id)_selectClauseForOptions:(unsigned int)arg1;
- (void)setAttachmentMetadata:(id)arg1 forMessage:(id)arg2;
- (void)updateDatabaseValuesIfNeeded;
- (CDStruct_f4b747e6)messageColorForLibraryMessageColor:(char *)arg1;
- (char *)libraryMessageColorForMessageColor:(CDStruct_f4b747e6)arg1;
- (id)referenceHashesFromMessageHeaders:(id)arg1;
- (void)addGmailLabelsToEmlx;
- (void)hideMailboxesNotInLibraryFromSpotlight;
- (void)backfillDateLastViewedAttribute;
- (void)_updateDateLastViewed:(int)arg1 forLibraryID:(long long)arg2;
- (void)deleteDataDirectoriesForMailbox:(id)arg1;
- (void)triggerFullSpotlightImportOfMailbox:(id)arg1;
- (void)removeExtendedAttributePlistFromEmlxFile:(id)arg1;
- (id)propertyListForMessage:(id)arg1 dateReceived:(id)arg2 dateLastViewed:(id)arg3 remoteID:(id)arg4 gmailLabels:(id)arg5 flags:(long long)arg6 mergeWithDictionary:(id)arg7;
- (id)_coreSpotlightIndexQueue;
- (void)_deleteMailboxFromCoreSpotlight:(id)arg1 databaseID:(long long)arg2;
- (void)_deleteMessageFromCoreSpotlight:(id)arg1;
- (void)sendSearchableItemsToCoreSpotlight:(id)arg1;
- (void)sendAttributesToCoreSpotlightForMessage:(id)arg1 includeBody:(BOOL)arg2 update:(BOOL)arg3;
- (id)createAddresseeStringFromDisplayName:(id)arg1 address:(id)arg2 stringUniquer:(id)arg3 addressIndex:(long long)arg4;
- (long long)rowidForMailboxURL:(id)arg1 connection:(id)arg2 cache:(id)arg3;
- (void)updateNormalizedSubjectsIfNeededWithConnection:(id)arg1;
- (void)_conversationFlagsChanged:(id)arg1;
- (void)_mailAccountsDidChange:(id)arg1;
- (void)_mailboxWasRenamed:(id)arg1;
- (void)_mailboxWillBeInvalidated:(id)arg1;
- (BOOL)setupLibrary;
- (void)removeCurrentTemporaryDatabaseFiles;
- (id)writeQueue;
- (BOOL)initializeDatabase:(id)arg1;
- (id)contentsOfDatabaseDefinition;
- (void)updateSize:(id)arg1 forMessage:(id)arg2;
- (void)setFlagsAndColorForMessages:(id)arg1;
- (void)setBackgroundColorForMessages:(id)arg1 textColorForMessages:(id)arg2;
- (void)_commitFlagsForMessage:(id)arg1 oldFlags:(id)arg2;
- (void)setConversationFlags:(unsigned long long)arg1 forMessages:(id)arg2 reason:(long long)arg3;
- (void)addGmailLabels:(id)arg1 removeGmailLabels:(id)arg2 forMessages:(id)arg3;
- (id)_mailboxIDsStringForMailboxes:(id)arg1;
- (void)removeSourceMailbox:(id)arg1;
- (void)setSourceMailbox:(id)arg1 forMailboxes:(id)arg2;
- (void)recalculateMessageCountsForMailboxIDs:(id)arg1;
- (void)loadMessageCountsForMailboxes;
- (void)commitFlagsForMessage:(id)arg1 oldFlags:(long long)arg2;
- (void)setSnippetsForMessages:(id)arg1;
- (void)_removeGmailLabelsFromMessages:(id)arg1 libraryIDs:(id)arg2 labels:(id)arg3;
- (void)addGmailLabelsToMessagesWithConnection:(id)arg1 libraryIDs:(id)arg2 labels:(id)arg3;
- (void)setFlagsForMessages:(id)arg1 messages:(id)arg2;
- (void)_updateMessageFilesInBackground;
- (void)_commitMessagesInBackground:(id)arg1;
- (void)commitSynchronouslyPostingMessages:(id)arg1 postFlags:(id)arg2 postingOldFlagsByMessage:(id)arg3;
- (void)commitSynchronously;
- (void)_synchronouslyUpdateMessageFiles;
- (void)unScheduleMessageFileUpdate;
- (void)scheduleMessageFileUpdate;
- (void)unScheduleCommit;
- (void)scheduleCommit;
- (void)_setCommitTimer:(id)arg1;
- (void)_addMessagesNeedingEmlxUpdate:(id)arg1;
- (void)setDateReceivedInterval:(double)arg1 forMessage:(id)arg2;
- (void)updateJunkMessagesForIndexing;
- (void)updateConversationFlagsForMessages:(id)arg1 flags:(unsigned long long)arg2 reason:(long long)arg3;
- (void)unmuteConversationForMessages:(id)arg1;
- (void)muteConversationForMessages:(id)arg1;
- (void)flagsChangedForMessages:(id)arg1;
- (void)restoreBackingStoreUpdateJournalIfNeeded;
- (void)_mergeRestoreMessageLibraryIDsToUpdate:(id)arg1;
- (BOOL)updateBackingStoreUpdateJournal;
- (BOOL)removeBackingStoreUpdateJournal;
- (id)_backingStoreJournalFile;
- (id)_backingStoreJournalDirectory;
- (void)commitMessage:(id)arg1 immediately:(BOOL)arg2;
- (BOOL)logSQLitePerformance;
- (id)init;
- (void)imap_recoverLocalItemsForMailboxURL:(id)arg1 path:(id)arg2 accountDisplayName:(id)arg3;
- (void)imap_deleteMailboxAction:(long long)arg1;
- (id)imap_nextMailboxActionForAccountID:(id)arg1;
- (void)imap_saveMailboxActionForAccountID:(id)arg1 action:(id)arg2;
- (id)_imap_uidsParameterForUIDs:(id)arg1 isContiguous:(BOOL)arg2;
- (id)_imap_nextBatchForUIDs:(id)arg1 limit:(unsigned long long)arg2 isContiguous:(char *)arg3;
- (void)imap_setComputedHighestModificationSequence:(unsigned long long)arg1 forIMAPMailboxURL:(id)arg2;
- (unsigned long long)imap_computedHighestModificationSequenceforIMAPMailboxURL:(id)arg1;
- (void)imap_setAllegedHighestModificationSequence:(unsigned long long)arg1 forIMAPMailboxURL:(id)arg2;
- (unsigned long long)imap_allegedHighestModificationSequenceforIMAPMailboxURL:(id)arg1;
- (void)imap_compactMailbox:(id)arg1;
- (void)imap_resetIMAPMessagesForMailbox:(id)arg1 duplicateMessages:(id *)arg2 invalidMessages:(id *)arg3;
- (BOOL)_imap_hasLocalActionsForAccountURL:(id)arg1 connection:(id)arg2;
- (unsigned long long)_imap_countForQuery:(id)arg1 bindings:(id)arg2 connection:(id)arg3;
- (BOOL)imap_mailboxHasInconsistencies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

