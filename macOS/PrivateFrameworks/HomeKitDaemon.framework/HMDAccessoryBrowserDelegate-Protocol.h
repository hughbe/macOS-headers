//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPAccessoryServer, HMDAccessoryAdvertisement, HMDAccessoryBrowser, HMDMediaEndpoint, HMFOSTransaction, NSArray, NSError, NSNumber, NSString;

@protocol HMDAccessoryBrowserDelegate <NSObject>
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didUpdateEndpoint:(HMDMediaEndpoint *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 discoveryFailedWithError:(NSError *)arg2 accessoryServer:(NSString *)arg3 linkType:(long long)arg4;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateName:(NSString *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateCategory:(NSNumber *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateHasPairings:(BOOL)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateValuesForCharacteristics:(NSArray *)arg3 stateNumber:(NSNumber *)arg4 broadcast:(BOOL)arg5;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 identifier:(NSString *)arg2 reachable:(BOOL)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 setupID:(NSString *)arg2 serverIdentifier:(NSString *)arg3 isPairedWithCompletionHandler:(void (^)(BOOL))arg4;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 isBlockedWithCompletionHandler:(void (^)(BOOL))arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didDiscoverAccessories:(NSArray *)arg3 transaction:(HMFOSTransaction *)arg4 error:(NSError *)arg5;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didStopPairingWithError:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didUpdateReachability:(BOOL)arg2 forBTLEAccessoriesWithServerIdentifier:(NSString *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didFinishWACForAccessoryWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didFindAccessoryServerNeedingReprovisioning:(HAPAccessoryServer *)arg2 error:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didRemoveAccessoryServer:(HAPAccessoryServer *)arg2 error:(NSError *)arg3;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didTombstoneAccessoryServer:(HAPAccessoryServer *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didFindAccessoryServer:(HAPAccessoryServer *)arg2 stateChanged:(BOOL)arg3 stateNumber:(NSNumber *)arg4 completion:(void (^)(BOOL))arg5;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didRemoveAccessoryAdvertisement:(HMDAccessoryAdvertisement *)arg2;
- (void)accessoryBrowser:(HMDAccessoryBrowser *)arg1 didAddAccessoryAdvertisement:(HMDAccessoryAdvertisement *)arg2;
@end

