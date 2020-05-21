//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SARemoteDevice.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSDictionary, NSString;

@interface SARemotePlaybackDevice : SARemoteDevice <SABackgroundContextObject>
{
}

+ (id)remotePlaybackDeviceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)remotePlaybackDevice;
@property(copy, nonatomic) NSDictionary *utsRequiredRequestKeyValuePairs;
@property(copy, nonatomic) NSString *userToken;
@property(copy, nonatomic) NSString *storefront;
@property(copy, nonatomic) NSString *hashedRouteId;
@property(copy, nonatomic) NSString *entitlementKey;
@property(copy, nonatomic) NSString *airPlayRouteId;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

