//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

__attribute__((visibility("hidden")))
@interface CBAnalyticsManager : NSObject
{
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_reportTimer;
    NSMutableDictionary *_timestamps;
    NSMutableDictionary *samples;
}

+ (void)stopReporting:(unsigned long long)arg1;
+ (void)sendEventOnceADayLazy:(id)arg1 andDict:(id)arg2;
+ (BOOL)handleColorSample:(id)arg1;
+ (id)sharedInstance;
- (id)stringForType:(unsigned long long)arg1;
- (BOOL)isSameDay:(id)arg1 asDay:(id)arg2;
- (BOOL)isFirstEventToday:(id)arg1;
- (void)stopReportingInternal:(unsigned long long)arg1;
- (void)startReporting;
- (void)sendEventLazy:(id)arg1 andDict:(id)arg2;
- (void)sendEventOnceADayLazyInternal:(id)arg1 andDict:(id)arg2;
- (void)logColorSample:(id)arg1 withType:(id)arg2;
- (void)logAllColorSamples;
- (_Bool)handleColorSampleInternal:(id)arg1;
- (void)storeTimestamp:(id)arg1 forEventName:(id)arg2;
- (void)dealloc;
- (id)init;

@end

