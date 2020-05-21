//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, NSString;

@interface HMDPredicateUtilities : HMFObject <HMFLogging>
{
    unsigned long long _cameraSignificantEvent;
    HMDHome *_home;
    NSString *_logString;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *logString; // @synthesize logString=_logString;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property unsigned long long cameraSignificantEvent; // @synthesize cameraSignificantEvent=_cameraSignificantEvent;
- (void)fillMetric:(id)arg1 forPredicate:(id)arg2;
- (id)metricFor:(id)arg1;
- (BOOL)containsPresenceEvents:(id)arg1;
- (id)rewritePredicate:(id)arg1 forDaemon:(BOOL)arg2 message:(id)arg3;
- (id)rewritePredicateForDaemon:(id)arg1 message:(id)arg2;
- (id)rewritePredicateForClient:(id)arg1;
- (id)dateTodayMatchingComponents:(id)arg1;
- (id)addDeltaToNow:(id)arg1;
- (id)rewriteNowAdjustedForHomeTimeZone:(id)arg1;
- (id)updatePredicate:(id)arg1 removedUser:(id)arg2 conditionModified:(char *)arg3;
- (id)updatePredicate:(id)arg1 currentCharacteristicInPredicate:(id *)arg2 conditionModified:(char *)arg3 removedCharacteristic:(id)arg4 underService:(id)arg5 underAccessory:(id)arg6;
- (id)comparePresence:(id)arg1 operatorType:(id)arg2 homePresence:(id)arg3;
- (id)compareValueOfCharacteristic:(id)arg1 againstValue:(id)arg2 operatorType:(id)arg3;
- (id)rewritePredicate:(id)arg1 currentCharacteristicInPredicate:(id *)arg2 characteristicsToRead:(id)arg3 homePresence:(id)arg4;
- (id)sunset;
- (id)sunrise;
- (id)logIdentifier;
- (id)initWithHome:(id)arg1 logIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

