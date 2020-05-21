//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDSTransactionLogTaskHandler, NSArray, NSSet;
@protocol NSSecureCoding;

@protocol IDSTransactionLogTaskHandlerDelegate
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 accountInfoForAliases:(NSSet *)arg2 completion:(void (^)(IDSTransactionLogTaskHandlerAccountInfo *, NSError *))arg3;
- (void)persistedTokenForTaskHandler:(IDSTransactionLogTaskHandler *)arg1 completion:(void (^)(id <NSSecureCoding>, NSError *))arg2;
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 persistToken:(id <NSSecureCoding>)arg2 completion:(void (^)(NSError *))arg3;
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 messagesFromToken:(id <NSSecureCoding>)arg2 completion:(void (^)(NSArray *, id <NSSecureCoding>, BOOL, NSError *))arg3;
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 participantsWithDestinations:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)taskHandler:(IDSTransactionLogTaskHandler *)arg1 groupsWithGroupIDs:(NSArray *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
@end

