//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface AMSMediaTokenServiceThrottler : NSObject
{
    double _baseSleepInterval;
    double _maxSleepInterval;
    unsigned long long _attemptNumber;
    NSDate *_throttleDate;
}

- (void).cxx_destruct;
@property(retain) NSDate *throttleDate; // @synthesize throttleDate=_throttleDate;
@property unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property double maxSleepInterval; // @synthesize maxSleepInterval=_maxSleepInterval;
@property double baseSleepInterval; // @synthesize baseSleepInterval=_baseSleepInterval;
- (double)_calculateThrottleInterval;
- (void)throttle;
- (BOOL)shouldThrottle;
- (void)reset;
- (id)initWithBaseSleepInterval:(double)arg1 maxSleepInterval:(double)arg2;

@end

