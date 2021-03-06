//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreWiFiManagerClient : NSObject
{
    long long _rssi;
    long long _snr;
}

- (void)registerOneShotEnabledHandler:(CDUnknownBlockType)arg1;
- (void)acquireWiFiAssertion:(long long)arg1;
- (void)releaseWiFiAssertion;
- (BOOL)isWifiEnabled;
- (BOOL)hasAssociatedNetworkWithRSSI:(long long *)arg1 andSNR:(long long *)arg2 andPhyMode:(id *)arg3 andChannelInfo:(id *)arg4 isCaptive:(char *)arg5;
- (void)dealloc;
- (id)init;

@end

