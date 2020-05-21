//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSDictionary, NSMutableSet, PLEntryNotificationOperatorComposition, PLMonotonicTimer, PLNSNotificationOperatorComposition;

@interface PLProcessMonitorAgent : PLAgent
{
    BOOL _firstBoot;
    BOOL _launchServiceStatsEnabled;
    NSDate *_currentCachedDate;
    NSDate *_previousCacheDate;
    double _currentCachedTotalCPUTime;
    PLMonotonicTimer *_logTimer;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLNSNotificationOperatorComposition *_asertionNotifications;
    NSMutableSet *_processes;
    NSDictionary *_lastThreadIdToKTMonitorEntryDict;
    NSDate *_lastEntryDate;
    long long _processExitSummaryCount;
}

+ (unsigned long long)PIDToCoalitionID:(int)arg1;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardProcessExitHistogram;
+ (id)entryEventIntervalDefinitionKernelTaskMonitor;
+ (id)entryEventIntervalDefinitionProcessMonitorDiff;
+ (id)entryEventBackwardDefinitionProcessPeakMemory;
+ (id)entryEventBackwardDefinitionProcessMonitor;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardProcessID;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointProcessExit;
+ (id)entryEventPointProcessSnapshot;
+ (id)entryEventPointMemoryTracking;
+ (id)entryEventPointDefinitions;
+ (void)load;
- (void).cxx_destruct;
@property long long processExitSummaryCount; // @synthesize processExitSummaryCount=_processExitSummaryCount;
@property BOOL launchServiceStatsEnabled; // @synthesize launchServiceStatsEnabled=_launchServiceStatsEnabled;
@property(retain) NSDate *lastEntryDate; // @synthesize lastEntryDate=_lastEntryDate;
@property(retain) NSDictionary *lastThreadIdToKTMonitorEntryDict; // @synthesize lastThreadIdToKTMonitorEntryDict=_lastThreadIdToKTMonitorEntryDict;
@property(retain) NSMutableSet *processes; // @synthesize processes=_processes;
@property(retain) PLNSNotificationOperatorComposition *asertionNotifications; // @synthesize asertionNotifications=_asertionNotifications;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // @synthesize batteryLevelChanged=_batteryLevelChanged;
@property(retain) PLMonotonicTimer *logTimer; // @synthesize logTimer=_logTimer;
@property BOOL firstBoot; // @synthesize firstBoot=_firstBoot;
@property double currentCachedTotalCPUTime; // @synthesize currentCachedTotalCPUTime=_currentCachedTotalCPUTime;
@property(retain) NSDate *previousCacheDate; // @synthesize previousCacheDate=_previousCacheDate;
@property(retain) NSDate *currentCachedDate; // @synthesize currentCachedDate=_currentCachedDate;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (void)logEventIntervalKernelTaskMonitor;
- (int)get_kthread_list:(unsigned long long **)arg1;
- (void)logEventIntervalProcessMonitorIntervalUsingCache;
- (void)logEventIntervalProcessMonitorInterval;
- (void)logEventBackwardProcessPeakMemoryUsingCache;
- (void)logEventBackwardProcessMonitorUsingCache;
- (void)logEventBackwardProcessMonitor;
- (void)logEventBackwardProcessExitHistogram:(id)arg1 withStats:(CDStruct_d790cdc7 *)arg2 withDate:(id)arg3;
- (void)logEventPointProcessExit:(id)arg1 withLabelCount:(id)arg2 withStats:(CDStruct_d790cdc7 *)arg3 withDate:(id)arg4 withNowInSec:(unsigned long long)arg5;
- (void)logProcessExit;
- (void)logEventPointProcessSnapshot;
- (void)logEventPointMemoryTracking;
- (void)log;
- (id)processMonitorMultiKeyFromProcessID:(id)arg1;
- (void)updateProcessMonitorCache;
- (void)getCpuUsageAndMemoryForPid:(int)arg1 withBuffer:(void *)arg2 withNewProcessArray:(id)arg3 withTotalCpu:(double *)arg4 withActiveProcesses:(id)arg5;
- (id)eventForwardProcessIDForPID:(int)arg1;
- (BOOL)isCachedForProcessID:(int)arg1;
- (BOOL)isCachedForProcessID:(int)arg1 andName:(id)arg2;
- (void)disableProcessExitLogging;
- (void)enableProcessExitLogging;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)processesOfInterest:(id)arg1;
- (id)init;

@end

