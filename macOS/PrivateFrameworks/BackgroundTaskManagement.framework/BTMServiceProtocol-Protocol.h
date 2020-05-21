//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BTMLoginItem, NSArray, NSURL, NSUUID;

@protocol BTMServiceProtocol
- (void)openLoginItemsWithReply:(void (^)(NSError *))arg1;
- (void)canLoadServiceLoginItemWithURLs:(NSArray *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
- (void)setUserElection:(long long)arg1 forBackgroundItemIdentifier:(NSUUID *)arg2 reply:(void (^)(NSError *))arg3;
- (void)setUserElection:(long long)arg1 forURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)getBackgroundItemsWithReply:(void (^)(NSArray *, NSError *))arg1;
- (void)removeLoginItem:(BTMLoginItem *)arg1 reply:(void (^)(NSError *))arg2;
- (void)addLoginItem:(BTMLoginItem *)arg1 reply:(void (^)(NSError *))arg2;
- (void)getLoginItemsWithTypeMask:(unsigned long long)arg1 reply:(void (^)(NSArray *, NSError *))arg2;
@end

