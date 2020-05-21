//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/BRNotificationReceiverDelegate-Protocol.h>

@class BRNotificationReceiver, NSArray, NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface BRQuery : NSObject <BRNotificationReceiverDelegate>
{
    NSMutableArray *_results;
    NSMutableDictionary *_resultsByRowID;
    BRNotificationReceiver *_receiver;
    NSMetadataQuery *_query;
    NSPredicate *_predicate;
    NSString *_bundleIdentifier;
    NSMutableDictionary *_toBeRemovedByFileObjectID;
    NSMutableDictionary *_toBeReplacedByFileObjectID;
    NSMutableDictionary *_toBeInsertedByFileObjectID;
    int _queryState;
    BOOL _ubiquitousGatherComplete;
    BOOL _needsCrashMarking;
    BOOL _needsCrashEvicting;
    BOOL _sendHasUpdateNotification;
    NSArray *_values;
    NSArray *_sortingAttributes;
    CDStruct_37e85dac _batchingParameters;
    CDUnknownFunctionPointerType _create_result_fn;
    void *_create_result_context;
    CDUnknownFunctionPointerType _create_result_callbacks_equal;
    CDUnknownFunctionPointerType _create_result_callbacks_release;
    CDUnknownFunctionPointerType _create_value_fn;
    void *_create_value_context;
    CDUnknownFunctionPointerType _create_value_callbacks_equal;
    CDUnknownFunctionPointerType _create_value_callbacks_release;
    NSArray *_searchScopes;
    unsigned int _scopeOptions;
    CDUnknownFunctionPointerType _sort_fn;
    void *_sort_context;
    struct __CFRunLoop *_runLoop;
    NSOperationQueue *_queryQueue;
    _Atomic int _disableCount;
    int _receiverDisableCount;
}

+ (void)initialize;
+ (void)didEndPossibleFileOperation:(id)arg1;
+ (id)willBeginPossibleDeletionOfItemAtURL:(id)arg1;
+ (id)willBeginPossibleMoveOfItemAtURL:(id)arg1 toURL:(id)arg2;
+ (id)willBeginPossibleCreationOfItemAtURL:(id)arg1;
- (void).cxx_destruct;
@property(retain) BRNotificationReceiver *receiver; // @synthesize receiver=_receiver;
@property __weak NSMetadataQuery *query; // @synthesize query=_query;
- (void)notificationReceiverDidReceiveNotifications:(id)arg1;
- (void)notificationsReceiverDidReceiveNotificationsBatch:(id)arg1;
- (void)notificationsReceiverDidFinishGathering:(id)arg1;
- (void)notificationsReceiverDidInvalidate:(id)arg1;
- (void)setSendHasUpdateNotification:(BOOL)arg1;
- (void)_sendHasUpdateNotificationIfNeeded;
- (void)processUpdates;
- (void)_processChanges:(id)arg1;
- (void)_processUpdates;
- (BOOL)_collectUpdates:(id)arg1;
- (void)_postNote:(const struct __CFString *)arg1 userInfo:(id)arg2;
- (void)_postNote:(const struct __CFString *)arg1;
- (id)queryQueue;
- (void)setQueryQueue:(id)arg1;
- (void)setSortComparator:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;
- (void)setSearchScope:(id)arg1 withOptions:(unsigned int)arg2;
- (void)setCreateValueFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 callbacks:(const CDStruct_70d275a4 *)arg3;
- (void)setCreateResultFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2 callbacks:(const CDStruct_70d275a4 *)arg3;
- (void)setExternalDocumentsBundleIdentifier:(id)arg1;
- (void)setBatchingParameters:(CDStruct_37e85dac)arg1;
- (unsigned long long)resultCount;
- (const void *)resultAtIndex:(long long)arg1;
- (id)_replacementObjectsForArrayOfQueryItem:(id)arg1;
- (id)_replacementObjectForQueryItem:(id)arg1;
- (long long)indexOfResult:(const void *)arg1;
- (unsigned long long)countOfResultsForAttributeName:(id)arg1 value:(id)arg2;
- (id)attributeValueForName:(id)arg1 forResultAtIndex:(long long)arg2;
- (unsigned char)executeWithOptions:(unsigned long long)arg1;
- (void)_runQuery;
- (void)_watchScopes;
- (void)stop;
- (void)_performBlockAsync:(CDUnknownBlockType)arg1;
- (void)enableUpdates;
- (void)disableUpdates;
- (void)_setQueryState:(int)arg1;
- (id)valuesOfAttribute:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 values:(id)arg2 sortingAttributes:(id)arg3 items:(id)arg4;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

