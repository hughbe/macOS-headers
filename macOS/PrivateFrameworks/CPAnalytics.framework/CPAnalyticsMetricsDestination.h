//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CPAnalytics/CPAnalyticsDestination-Protocol.h>

@class CPAnalyticsEventMatcherSet, NSDictionary;

@interface CPAnalyticsMetricsDestination : NSObject <CPAnalyticsDestination>
{
    NSDictionary *_eventRoutes;
    CPAnalyticsEventMatcherSet *_matcherSet;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CPAnalyticsEventMatcherSet *matcherSet; // @synthesize matcherSet=_matcherSet;
@property(retain, nonatomic) NSDictionary *eventRoutes; // @synthesize eventRoutes=_eventRoutes;
- (void)_sendCoreAnalyticsEvent:(id)arg1 eventPayload:(id)arg2;
- (id)_buildCustomCoreAnalyticsPayloadForEvent:(id)arg1 withPropertiesToInclude:(id)arg2;
- (void)_sendCoreAnalyticsEventWithCustomConfig:(id)arg1;
- (BOOL)_hasCustomConfigForEvent:(id)arg1;
- (void)processEvent:(id)arg1;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;

@end

