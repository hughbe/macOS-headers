//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class PLEntryNotificationOperatorComposition, PLSemaphore;

@interface PLScheduledWakeAgent : PLAgent
{
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    PLSemaphore *_canSleepSemaphore;
}

+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (id)defaults;
+ (void)load;
- (void).cxx_destruct;
@property(retain) PLSemaphore *canSleepSemaphore; // @synthesize canSleepSemaphore=_canSleepSemaphore;
@property(retain) PLEntryNotificationOperatorComposition *canSleepNotification; // @synthesize canSleepNotification=_canSleepNotification;
- (id)humanReadableScheduledWakeString:(id)arg1;
- (void)logEventForwardScheduledEvent;
- (void)log;
- (void)initOperatorDependancies;
- (id)init;

@end

