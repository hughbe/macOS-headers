//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKPropertyCoding-Protocol.h>

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDServerConfiguration : NSObject <CKPropertyCoding>
{
    NSDate *_expiry;
    NSMutableDictionary *_values;
    NSMutableDictionary *_allowedAppVersionsCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *allowedAppVersionsCache; // @synthesize allowedAppVersionsCache=_allowedAppVersionsCache;
@property(retain, nonatomic) NSMutableDictionary *values; // @synthesize values=_values;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
- (id)dictionaryPropertyEncoding;
- (id)initWithPropertyDictionary:(id)arg1;
- (id)iCloudHostnames;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2AllOperationGroupMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2AllOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientApplicationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2ClientOperationMetricsReportFrequency:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequencyBase:(id)arg1;
- (unsigned long long)c2NetworkMetricsReportFrequency:(id)arg1;
- (BOOL)allowExpiredDNSBehavior:(id)arg1;
- (double)publicIdentitiesExpirationTimeoutForContainer:(id)arg1;
- (unsigned long long)maxBatchSizeForContainer:(id)arg1;
- (id)flowControlMaximumThrottleTime:(id)arg1;
- (id)flowControlRegenerationForContainer:(id)arg1;
- (id)flowControlBudgetForContainer:(id)arg1;
- (id)transcodeServerPublicKeyURLsForContainer:(id)arg1;
- (long long)tokenRegisterDaysForContainer:(id)arg1;
- (BOOL)applicationWithBundleID:(id)arg1 canSyncUsingVersion:(id)arg2 forContainer:(id)arg3;
- (id)valueForKeyPath:(id)arg1 forContainer:(id)arg2;
- (BOOL)isExpired;
@property(readonly, copy) NSString *description;
- (id)initWithValues:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

