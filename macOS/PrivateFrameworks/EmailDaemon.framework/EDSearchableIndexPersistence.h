//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDPersistenceDatabaseSchemaProvider-Protocol.h>
#import <EmailDaemon/EDSearchableIndexDataSource-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>
#import <EmailDaemon/EFSignpostable-Protocol.h>

@class EDPersistenceDatabase, NSString;
@protocol EDSearchableIndexHookResponder;

@interface EDSearchableIndexPersistence : NSObject <EFLoggable, EFSignpostable, EDPersistenceDatabaseSchemaProvider, EDSearchableIndexDataSource>
{
    struct os_unfair_lock_s _lastProcessedAttachmentIDLock;
    long long _lastProcessedAttachmentID;
    EDPersistenceDatabase *_database;
    id <EDSearchableIndexHookResponder> _hookResponder;
}

+ (id)searchableAttachmentsTableSchema;
+ (id)searchableMessageTombstonesTableSchema;
+ (id)searchableMessagesTableSchema;
+ (id)tablesAndForeignKeysToResolve:(id *)arg1 associationsToResolve:(id *)arg2;
+ (id)searchableMessagesTableName;
+ (id)signpostLog;
+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) struct os_unfair_lock_s lastProcessedAttachmentIDLock; // @synthesize lastProcessedAttachmentIDLock=_lastProcessedAttachmentIDLock;
@property(readonly, nonatomic) __weak id <EDSearchableIndexHookResponder> hookResponder; // @synthesize hookResponder=_hookResponder;
@property(readonly, nonatomic) EDPersistenceDatabase *database; // @synthesize database=_database;
- (id)_assignIndexedAttachmentItems:(id)arg1 transaction:(long long)arg2 connection:(id)arg3;
- (id)_identifiersForAttachmentsWithQuery:(id)arg1 usingConnection:(id)arg2;
- (id)_identifiersForAttachmentsInTransactions:(id)arg1 usingConnection:(id)arg2;
- (id)_identifiersForDeletedAttachmentsUsingConnection:(id)arg1;
- (id)_attachmentItemsFromAttachmentData:(id)arg1 limit:(unsigned long long)arg2 cancelationToken:(id)arg3;
- (id)_attachmentDataForItemsRequiringIndexingExcludingIdentifiers:(id)arg1 limit:(unsigned long long)arg2 cancelationToken:(id)arg3 connection:(id)arg4;
- (id)_messageIDTransactionIDDictionaryToVerifyUsingConnection:(id)arg1 count:(unsigned long long)arg2;
- (id)_identifiersForDeletedMessagesUsingConnection:(id)arg1;
- (id)_identifiersForRemovedItemsUsingConnection:(id)arg1;
- (void)_removeIndexedIdentifiers:(id)arg1 connection:(id)arg2;
- (id)_identifiersForTombstonesOfType:(long long)arg1 connection:(id)arg2;
- (void)_purgeSpotlightTombstonesBeforeTransaction:(long long)arg1 connection:(id)arg2;
- (void)_assignTombstonesForIdentifiers:(id)arg1 type:(long long)arg2 transaction:(long long)arg3 connection:(id)arg4;
- (void)_addTombstonesForIdentifiers:(id)arg1 type:(long long)arg2 connection:(id)arg3;
- (id)_assignIndexedItems:(id)arg1 transaction:(long long)arg2 connection:(id)arg3;
- (id)_assignIndexedItems:(id)arg1 connection:(id)arg2 query:(id)arg3 indexedBindingsGenerator:(CDUnknownBlockType)arg4;
- (id)_searchableIndexMessageIndexingTypes;
- (id)verificationDataSamplesForSearchableIndex:(id)arg1 count:(unsigned long long)arg2;
- (void)searchableIndex:(id)arg1 prepareToIndexAttachmentsForMessageWithIdentifier:(id)arg2;
- (id)searchableIndex:(id)arg1 invalidateItemsInTransactions:(id)arg2;
- (void)searchableIndex:(id)arg1 invalidateItemsGreaterThanTransaction:(long long)arg2;
- (id)searchableIndex:(id)arg1 assignTransaction:(long long)arg2 updates:(id)arg3;
- (id)childIdentifiersToRemoveFromSearchableIndex:(id)arg1 whenRemovingParentIdentifiers:(id)arg2;
- (void)searchableIndex:(id)arg1 willRemoveIdentifiers:(id)arg2 type:(long long)arg3;
- (void)searchableIndex:(id)arg1 assignIndexingType:(long long)arg2 forIdentifiers:(id)arg3;
- (BOOL)_canPerformIncrementalIndexForIdentifier:(id)arg1 indexingType:(long long)arg2;
- (long long)indexingTypeForSearchableIndex:(id)arg1 item:(id)arg2;
- (id)_messagesRequiringIndexingForType:(long long)arg1 excludingIdentifiers:(id)arg2 limit:(long long)arg3;
- (id)updatesForSearchableIndex:(id)arg1 excludingIdentifiers:(id)arg2 count:(unsigned long long)arg3 cancelationToken:(id)arg4;
@property(readonly, nonatomic) NSString *additionalFilterClause;
- (id)verificationDataSamplesFromMessageIDTransactionIDDictionary:(id)arg1;
- (void)attachmentItemMetadataForAttachmentID:(id)arg1 messagePersistentID:(id)arg2 name:(id)arg3 result:(CDUnknownBlockType)arg4;
- (id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2;
- (id)messagesWhere:(id)arg1 sortedBy:(id)arg2 limit:(long long)arg3;
@property long long lastProcessedAttachmentID; // @synthesize lastProcessedAttachmentID=_lastProcessedAttachmentID;
- (id)initWithDatabase:(id)arg1 hookResponder:(id)arg2;
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

