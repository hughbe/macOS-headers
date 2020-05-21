//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class ENGroup;

@protocol IDSGroupContextNotifyingObserverDelegate <NSObject>

@optional
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(void (^)(NSError *))arg1;
- (void)didReceiveDecryptionFailureForGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didUpdateGroup:(ENGroup *)arg1 withNewGroup:(ENGroup *)arg2 completion:(void (^)(NSError *))arg3;
- (void)didCacheGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
- (void)didCreateGroup:(ENGroup *)arg1 completion:(void (^)(NSError *))arg2;
@end

