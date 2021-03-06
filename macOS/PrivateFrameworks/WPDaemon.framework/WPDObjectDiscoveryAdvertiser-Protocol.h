//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WPDaemon/NSObject-Protocol.h>

@class NSError, NSUUID, WPAdvertisingRequest;

@protocol WPDObjectDiscoveryAdvertiser <NSObject>
- (void)removeAdvertisingRequestsForClient:(NSUUID *)arg1;
- (NSError *)removeAdvertisingRequest:(WPAdvertisingRequest *)arg1 forClient:(NSUUID *)arg2;
- (NSError *)addAdvertisingRequest:(WPAdvertisingRequest *)arg1 forClient:(NSUUID *)arg2;
@end

