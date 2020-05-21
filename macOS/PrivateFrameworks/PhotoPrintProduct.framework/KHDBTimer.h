//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface KHDBTimer : NSObject
{
    unsigned long long _start;
    unsigned long long _stop;
    CDUnknownFunctionPointerType _timeFN;
    NSMutableDictionary *_measurements;
}

+ (id)cpuTimer;
+ (id)timer;
- (void)dealloc;
- (id)init;
- (double)absoluteTicksPerNanosecond;
- (unsigned long long)nanoseconds;
- (unsigned long long)absoluteTicks;
- (double)microseconds;
- (double)milliseconds;
- (double)seconds;
- (void)reset;
- (void)stop;
- (BOOL)isRunning;
- (void)start;
- (id)initForCPUTime:(BOOL)arg1;

@end

