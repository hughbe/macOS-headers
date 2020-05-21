//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/NSObject-Protocol.h>

@class EFQuery, EMContentRequestOptions, EMMailboxScope, EMMessageChangeAction, EMMessageObjectID, EMObjectID, NSArray, NSProgress, NSString;
@protocol EMContentItemRequestDelegate, EMMessageListItemQueryResultsObserver, EMMessageRepositoryCountQueryObserver_xpc, EMMessageRepositoryMailboxPredictionObserver_xpc;

@protocol EMMessageRepositoryInterface <NSObject>
- (void)loadOlderMessagesForMailboxes:(NSArray *)arg1;
- (void)predictMailboxForMovingMessages:(NSArray *)arg1 withObserver:(id <EMMessageRepositoryMailboxPredictionObserver_xpc>)arg2 completionHandler:(void (^)(id <EFCancelable>))arg3;
- (void)getCachedMetadataJSONForKey:(NSString *)arg1 messageID:(EMMessageObjectID *)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)setCachedMetadataJSON:(NSString *)arg1 forKey:(NSString *)arg2 messageID:(EMMessageObjectID *)arg3;
- (void)resetPrecomputedThreadScopesForMailboxScope:(EMMailboxScope *)arg1;
- (NSProgress *)requestRepresentationForMessageWithID:(EMMessageObjectID *)arg1 requestID:(unsigned long long)arg2 options:(EMContentRequestOptions *)arg3 delegate:(id <EMContentItemRequestDelegate>)arg4 completionHandler:(void (^)(id <_EMDistantContentRepresentation>, EMContentRepresentation *, NSError *))arg5;
- (void)performMessageChangeAction:(EMMessageChangeAction *)arg1 requestID:(unsigned long long)arg2 returnUndoAction:(BOOL)arg3 completionHandler:(void (^)(EMUndoMessageAction *))arg4;
- (void)messageListItemsForObjectIDs:(NSArray *)arg1 requestID:(unsigned long long)arg2 observationIdentifier:(EMObjectID *)arg3 loadSummaryForAdditionalObjectIDs:(NSArray *)arg4 completionHandler:(void (^)(NSArray *, NSDictionary *))arg5;
- (void)startCountingQuery:(EFQuery *)arg1 includingServerCountsForMailboxScope:(EMMailboxScope *)arg2 withObserver:(id <EMMessageRepositoryCountQueryObserver_xpc>)arg3 completionHandler:(void (^)(id <EFCancelable>))arg4;
- (void)performQuery:(EFQuery *)arg1 withObserver:(id <EMMessageListItemQueryResultsObserver>)arg2 observationIdentifier:(EMObjectID *)arg3 completionHandler:(void (^)(id <EFCancelable>))arg4;
- (void)performCountQuery:(EFQuery *)arg1 completionHandler:(void (^)(NSNumber *, NSError *))arg2;
- (void)performQuery:(EFQuery *)arg1 limit:(long long)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
@end

