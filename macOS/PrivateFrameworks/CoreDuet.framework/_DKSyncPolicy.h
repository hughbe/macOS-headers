//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _DKSyncPolicy : NSObject
{
    BOOL _syncDisabled;
    BOOL _alwaysSyncUpAndDown;
    BOOL _pushTriggersSync;
    BOOL _forceSync;
    unsigned long long _assetThresholdInBytes;
    unsigned long long _firstSyncPeriodInDays;
    unsigned long long _maxSyncDownIntervalInDays;
    unsigned long long _minSyncIntervalInSeconds;
    unsigned long long _minSyncsPerDay;
    unsigned long long _maxSyncsPerDay;
    unsigned long long _numChangesTriggeringSync;
    unsigned long long _singleDeviceSyncIntervalInDays;
    NSArray *_streamNamesWithAdditionsTriggeringSync;
    NSArray *_streamNamesWithDeletionsTriggeringSync;
    unsigned long long _syncTimeoutInSeconds;
    unsigned long long _triggeredSyncDelayInSeconds;
    unsigned long long _policyDownloadIntervalInDays;
}

+ (id)configurationPlist;
+ (id)syncPolicyConfigPath;
+ (void)handleDownloadSyncPolicyResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
+ (void)possiblyDownloadSyncPolicyWithPolicyDownloadIntervalInDays:(unsigned long long)arg1;
+ (id)policyFromDictionary:(id)arg1;
+ (id)forceSyncPolicy;
+ (id)policy;
+ (id)userDefaults;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long policyDownloadIntervalInDays; // @synthesize policyDownloadIntervalInDays=_policyDownloadIntervalInDays;
@property(nonatomic) BOOL forceSync; // @synthesize forceSync=_forceSync;
@property(nonatomic) unsigned long long triggeredSyncDelayInSeconds; // @synthesize triggeredSyncDelayInSeconds=_triggeredSyncDelayInSeconds;
@property(nonatomic) unsigned long long syncTimeoutInSeconds; // @synthesize syncTimeoutInSeconds=_syncTimeoutInSeconds;
@property(retain, nonatomic) NSArray *streamNamesWithDeletionsTriggeringSync; // @synthesize streamNamesWithDeletionsTriggeringSync=_streamNamesWithDeletionsTriggeringSync;
@property(retain, nonatomic) NSArray *streamNamesWithAdditionsTriggeringSync; // @synthesize streamNamesWithAdditionsTriggeringSync=_streamNamesWithAdditionsTriggeringSync;
@property(nonatomic) unsigned long long singleDeviceSyncIntervalInDays; // @synthesize singleDeviceSyncIntervalInDays=_singleDeviceSyncIntervalInDays;
@property(nonatomic) BOOL pushTriggersSync; // @synthesize pushTriggersSync=_pushTriggersSync;
@property(nonatomic) unsigned long long numChangesTriggeringSync; // @synthesize numChangesTriggeringSync=_numChangesTriggeringSync;
@property(nonatomic) unsigned long long maxSyncsPerDay; // @synthesize maxSyncsPerDay=_maxSyncsPerDay;
@property(nonatomic) unsigned long long minSyncsPerDay; // @synthesize minSyncsPerDay=_minSyncsPerDay;
@property(nonatomic) unsigned long long minSyncIntervalInSeconds; // @synthesize minSyncIntervalInSeconds=_minSyncIntervalInSeconds;
@property(nonatomic) unsigned long long maxSyncDownIntervalInDays; // @synthesize maxSyncDownIntervalInDays=_maxSyncDownIntervalInDays;
@property(nonatomic) unsigned long long firstSyncPeriodInDays; // @synthesize firstSyncPeriodInDays=_firstSyncPeriodInDays;
@property(nonatomic) unsigned long long assetThresholdInBytes; // @synthesize assetThresholdInBytes=_assetThresholdInBytes;
@property(nonatomic) BOOL alwaysSyncUpAndDown; // @synthesize alwaysSyncUpAndDown=_alwaysSyncUpAndDown;
@property(nonatomic) BOOL syncDisabled; // @synthesize syncDisabled=_syncDisabled;
- (id)description;
- (double)hoursBetweenSyncsWhenIsSingleDevice:(BOOL)arg1;
- (id)queryStartDateFromLastDaySyncDates:(id)arg1 lastSyncDate:(id)arg2 isSingleDevice:(BOOL)arg3 isTriggeredSync:(BOOL)arg4;
- (id)initWithSyncDisabled:(id)arg1 alwaysSyncUpAndDown:(id)arg2 assetThresholdInBytes:(id)arg3 firstSyncPeriodInDays:(id)arg4 maxSyncDownIntervalInDays:(id)arg5 minSyncIntervalInSeconds:(id)arg6 minSyncsPerDay:(id)arg7 maxSyncsPerDay:(id)arg8 numChangesTriggeringSync:(id)arg9 policyDownloadIntervalInDays:(id)arg10 pushTriggersSync:(id)arg11 singleDeviceSyncIntervalInDays:(id)arg12 streamNamesWithAdditionsTriggeringSync:(id)arg13 streamNamesWithDeletionsTriggeringSync:(id)arg14 syncTimeoutInSeconds:(id)arg15 triggeredSyncDelayInSeconds:(id)arg16;

@end

