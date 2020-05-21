//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreFoundation/ISServiceRemoteObject-Protocol.h>

@class ISAuthenticationContext, ISURLRequest, NSArray, NSData, NSDictionary, NSHTTPURLResponse, NSNumber, NSString, NSURL, SSPurchase;

@protocol ISTransactionService <ISServiceRemoteObject>
- (void)processAskToBuyPermissionRequestWithURL:(NSURL *)arg1;
- (void)performInAppPurchaseWithBuyRequestDictionary:(NSDictionary *)arg1 urlBagKey:(NSString *)arg2 replyBlock:(void (^)(BOOL, NSDictionary *, NSError *))arg3;
- (void)itemLookup:(NSDictionary *)arg1 replyBlock:(void (^)(BOOL, NSDictionary *, NSError *))arg2;
- (void)explicitBookContentRestrictedNumberWithReplyBlock:(void (^)(NSNumber *))arg1;
- (void)purchaseInProgressForProductID:(NSNumber *)arg1 replyBlock:(void (^)(SSPurchase *))arg2;
- (void)performPurchases:(NSArray *)arg1 withBundleIDsToAdopt:(NSArray *)arg2 legacyAppsToGrant:(NSArray *)arg3 withOptions:(unsigned long long)arg4 replyBlock:(void (^)(NSDictionary *, BOOL, NSError *))arg5;
- (void)performPurchase:(SSPurchase *)arg1 withBundleIDsToAdopt:(NSArray *)arg2 legacyAppsToGrant:(NSArray *)arg3 withOptions:(unsigned long long)arg4 replyBlock:(void (^)(SSPurchase *, BOOL, NSError *, SSPurchaseResponse *))arg5;
- (void)signedBodyWithURLResponse:(NSHTTPURLResponse *)arg1 service:(NSString *)arg2 data:(NSData *)arg3 usingSAPSessionID:(NSString *)arg4 withReplyBlock:(void (^)(NSData *))arg5;
- (void)signURLRequest:(ISURLRequest *)arg1 service:(NSString *)arg2 usingSAPSessionID:(NSString *)arg3 withReplyBlock:(void (^)(ISURLRequest *))arg4;
- (void)signedHeadersForURLRequest:(ISURLRequest *)arg1 service:(NSString *)arg2 usingSAPSessionID:(NSString *)arg3 withReplyBlock:(void (^)(NSDictionary *))arg4;
- (void)setNeedsSilentMachineAuthorization:(BOOL)arg1;
- (void)needsSilentMachineAuthorizationWithReplyBlock:(void (^)(BOOL))arg1;
- (void)dsidByAuthenticatingWithContext:(ISAuthenticationContext *)arg1 replyBlock:(void (^)(BOOL, NSNumber *, NSError *))arg2;
@end

