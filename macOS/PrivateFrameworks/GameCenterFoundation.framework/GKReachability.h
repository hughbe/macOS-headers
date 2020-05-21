//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKReachability : NSObject
{
    BOOL localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)_gkReachabilityForLocalWiFi;
+ (id)_gkReachabilityForInternetConnection;
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)_gkReachabilityWithHostName:(id)arg1;
- (int)_gkCurrentReachabilityStatus;
- (BOOL)_gkConnectionRequired;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)_gkStopNotifier;
- (BOOL)_gkStartNotifier;

@end

