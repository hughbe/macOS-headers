//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDBackingStoreTransactionBlock, HMDService, HMDServiceTransaction, NSString, NSUUID;

@protocol HMDServiceOwner
- (HMDBackingStoreTransactionBlock *)backingStoreTransactionWithName:(NSString *)arg1;
- (HMDServiceTransaction *)createUpdateServiceTransationWithServiceUUID:(NSUUID *)arg1;
- (void)makeServiceNameConsistent:(HMDService *)arg1 withName:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

