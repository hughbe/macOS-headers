//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDUser, HMFPairingIdentity;

@protocol HMDAccessoryUserManagement <NSObject>
@property(readonly, copy) HMFPairingIdentity *pairingIdentity;
@property(readonly) BOOL supportsUserManagement;
- (void)pairingsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)removeUser:(HMDUser *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)addUser:(HMDUser *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

