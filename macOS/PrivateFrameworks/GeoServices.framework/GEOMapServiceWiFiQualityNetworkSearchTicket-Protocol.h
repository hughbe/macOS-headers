//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapServiceThrottlableTicket-Protocol.h>

@class NSObject;
@protocol OS_dispatch_queue;

@protocol GEOMapServiceWiFiQualityNetworkSearchTicket <GEOMapServiceThrottlableTicket>
- (void)cancelNetworkSearch;
- (void)submitNetworkSearchWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

