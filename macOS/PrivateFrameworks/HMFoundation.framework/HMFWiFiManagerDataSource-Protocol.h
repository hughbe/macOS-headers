//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/NSObject-Protocol.h>

@class NSString;
@protocol HMFWiFiManagerDataSourceDelegate;

@protocol HMFWiFiManagerDataSource <NSObject>
+ (NSString *)MACAddressString;
@property(readonly, copy, nonatomic) NSString *currentNetworkSSID;
@property(nonatomic, getter=isWoWAsserted, setter=setWoWAsserted:) BOOL wowAsserted;
@property(nonatomic) __weak id <HMFWiFiManagerDataSourceDelegate> delegate;
- (void)performBlockAfterWoWReassertionDelay:(void (^)(void))arg1;
@end

