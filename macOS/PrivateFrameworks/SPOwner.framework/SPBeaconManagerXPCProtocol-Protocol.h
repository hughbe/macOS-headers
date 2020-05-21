//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPOwner/NSObject-Protocol.h>
#import <SPOwner/SPLocalBeaconManagerXPCProtocol-Protocol.h>

@class NSDateInterval, NSString, NSUUID;

@protocol SPBeaconManagerXPCProtocol <NSObject, SPLocalBeaconManagerXPCProtocol>
- (oneway void)setServiceState:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (oneway void)primaryAccountModified;
- (oneway void)removeLocalAccountDataWithCompletion:(void (^)(BOOL))arg1;
- (oneway void)beaconingKeysForUUID:(NSUUID *)arg1 dateInterval:(NSDateInterval *)arg2 completion:(void (^)(NSArray *))arg3;
- (oneway void)unacceptedBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)allBeaconsOfType:(unsigned long long)arg1 completion:(void (^)(NSSet *))arg2;
- (oneway void)allBeaconsWithCompletion:(void (^)(NSSet *))arg1;
- (oneway void)notificationBeaconForSubscriptionId:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
- (oneway void)beaconForUUID:(NSUUID *)arg1 completion:(void (^)(SPBeacon *))arg2;
@end

