//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class PLNSNotificationOperatorComposition;

@interface PLLocaleAgent : PLAgent
{
    PLNSNotificationOperatorComposition *_timeNotification;
}

+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (void)load;
- (void).cxx_destruct;
@property(retain) PLNSNotificationOperatorComposition *timeNotification; // @synthesize timeNotification=_timeNotification;
- (void)logEventForwardTimeZoneWithTrigger:(id)arg1;
- (void)logEventForwardTimeZone;
- (void)log;
- (void)initOperatorDependancies;
- (id)init;

@end

