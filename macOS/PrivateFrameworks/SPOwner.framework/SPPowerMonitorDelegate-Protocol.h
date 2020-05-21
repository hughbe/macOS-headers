//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPOwner/NSObject-Protocol.h>

@class NSDate;
@protocol SPPowerStateMonitor;

@protocol SPPowerMonitorDelegate <NSObject>
- (void)powerMonitor:(id <SPPowerStateMonitor>)arg1 didChangeState:(unsigned long long)arg2;

@optional
- (NSDate *)nextWakeTimeForState:(unsigned long long)arg1;
@end

