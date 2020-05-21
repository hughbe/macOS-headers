//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreUtils/NSObject-Protocol.h>

@class HMAddAccessoryRequest, HMHome, HMHomeManager;

@protocol HMHomeManagerDelegate <NSObject>

@optional
- (void)homeManager:(HMHomeManager *)arg1 didReceiveAddAccessoryRequest:(HMAddAccessoryRequest *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didRemoveHome:(HMHome *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didAddHome:(HMHome *)arg2;
- (void)homeManagerDidUpdatePrimaryHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateHomes:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAuthorizationStatus:(unsigned long long)arg2;
@end

