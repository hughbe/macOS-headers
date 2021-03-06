/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
 */

@interface HKMCAnalysis : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    NSNumber * _anchor;
    NSArray * _cycles;
    NSArray * _fertileWindowProjections;
    NSNumber * _lastLoggedDayIndex;
    NSNumber * _lastMenstrualFlowDayIndex;
    NSArray * _menstruationProjections;
    NSArray * _ongoingCycleFactors;
    HKQuantity * _recentBasalBodyTemperature;
    unsigned long long  _recentSymptoms;
    HKMCStatistics * _statistics;
}

@property (nonatomic, copy) NSNumber *anchor;
@property (nonatomic, readonly) NSArray *cycles;
@property (nonatomic, readonly) NSArray *fertileWindowProjections;
@property (nonatomic, readonly, copy) HDMCNotification *hdmc_afterPeriodEndNotification;
@property (nonatomic, readonly, copy) HDMCNotification *hdmc_afterPeriodStartNotification;
@property (nonatomic, readonly, copy) HDMCNotification *hdmc_beforeFertileWindowStartNotification;
@property (nonatomic, readonly, copy) HDMCNotification *hdmc_beforePeriodStartNotification;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly, copy) NSNumber *lastLoggedDayIndex;
@property (nonatomic, readonly, copy) NSNumber *lastMenstrualFlowDayIndex;
@property (nonatomic, readonly) NSArray *menstruationProjections;
@property (nonatomic, readonly) NSArray *ongoingCycleFactors;
@property (nonatomic, readonly) HKQuantity *recentBasalBodyTemperature;
@property (nonatomic, readonly) unsigned long long recentSymptoms;
@property (nonatomic, readonly) HKMCStatistics *statistics;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cycles;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fertileWindowProjections;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatistics:(id)arg1 menstruationProjections:(id)arg2 fertileWindowProjections:(id)arg3 cycles:(id)arg4 recentSymptoms:(unsigned long long)arg5 recentBasalBodyTemperature:(id)arg6 lastLoggedDayIndex:(id)arg7 lastMenstrualFlowDayIndex:(id)arg8;
- (id)initWithStatistics:(id)arg1 menstruationProjections:(id)arg2 fertileWindowProjections:(id)arg3 cycles:(id)arg4 recentSymptoms:(unsigned long long)arg5 recentBasalBodyTemperature:(id)arg6 lastLoggedDayIndex:(id)arg7 lastMenstrualFlowDayIndex:(id)arg8 ongoingCycleFactors:(id)arg9;
- (bool)isEqual:(id)arg1;
- (id)lastLoggedDayIndex;
- (id)lastMenstrualFlowDayIndex;
- (id)menstruationProjections;
- (id)ongoingCycleFactors;
- (id)recentBasalBodyTemperature;
- (unsigned long long)recentSymptoms;
- (void)setAnchor:(id)arg1;
- (id)statistics;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

- (id)_hdmc_firstPeriodStartProjection;
- (id)hdmc_afterPeriodEndNotification;
- (id)hdmc_afterPeriodStartNotification;
- (id)hdmc_beforeFertileWindowStartNotification;
- (id)hdmc_beforePeriodStartNotification;
- (bool)isEarliestNotificationScheduledOnOrAfterDate:(id)arg1;

@end
