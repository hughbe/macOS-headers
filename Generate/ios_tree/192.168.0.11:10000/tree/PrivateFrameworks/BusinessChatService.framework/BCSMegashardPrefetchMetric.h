/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSMegashardPrefetchMetric : BCSMetric <BCSCoreAnalyticsEventDescribing, BCSPrefetchMetricProtocol> {
    long long  hoursSinceLastSuccessfulPrefetch;
    bool  successful;
}

@property (nonatomic, readonly) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) NSDictionary *coreAnalyticsPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hoursSinceLastSuccessfulPrefetch;
@property (nonatomic) bool successful;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (id)metricForMegashardType:(long long)arg1 postProcessingMetricHandlers:(id)arg2;

- (id)coreAnalyticsEventName;
- (id)coreAnalyticsPayload;
- (long long)hoursSinceLastSuccessfulPrefetch;
- (void)setHoursSinceLastSuccessfulPrefetch:(long long)arg1;
- (void)setSuccessful:(bool)arg1;
- (bool)successful;
- (long long)type;

@end
