//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EMMailboxObjectID, EMMessageObjectID, EMObjectID, EMOutgoingMessage, NSString;

@protocol EMOutgoingMessageRepositoryInterface <NSObject>
- (void)numberOfPendingMessagesWithCompletion:(void (^)(unsigned long long))arg1;
- (void)isProcessingWithCompletion:(void (^)(BOOL))arg1;
- (void)processAllQueuedMessages;
- (void)resumeDeliveryQueue;
- (void)suspendDeliveryQueue;
- (void)outboxContainsMessageFromAccountObjectID:(EMObjectID *)arg1 completion:(void (^)(BOOL))arg2;
- (void)deliverMessage:(EMOutgoingMessage *)arg1 usingMailDrop:(BOOL)arg2 completion:(void (^)(EMMessageDeliveryResult *))arg3;
- (void)deleteDraftsInMailboxID:(EMMailboxObjectID *)arg1 documentID:(NSString *)arg2 previousDraftObjectID:(EMMessageObjectID *)arg3;
- (void)saveDraftMessage:(EMOutgoingMessage *)arg1 mailboxID:(EMMailboxObjectID *)arg2 previousDraftObjectID:(EMMessageObjectID *)arg3 completion:(void (^)(EMMessage *))arg4;
@end

