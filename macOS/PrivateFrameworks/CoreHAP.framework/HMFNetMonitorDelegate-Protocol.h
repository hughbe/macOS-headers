//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HMFNetMonitor;

@protocol HMFNetMonitorDelegate <NSObject>

@optional
- (void)networkMonitorIsUnreachable:(HMFNetMonitor *)arg1;
- (void)networkMonitorIsReachable:(HMFNetMonitor *)arg1;
@end

