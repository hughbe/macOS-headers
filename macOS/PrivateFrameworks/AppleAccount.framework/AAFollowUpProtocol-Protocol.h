//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol AAFollowUpProtocol
- (void)dismissFollowUpWithIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)pendingFollowUpWithIdentifier:(NSString *)arg1 completion:(void (^)(FLFollowUpItem *, NSError *))arg2;
- (void)postFollowUpWithIdentifier:(NSString *)arg1 userInfo:(NSDictionary *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

