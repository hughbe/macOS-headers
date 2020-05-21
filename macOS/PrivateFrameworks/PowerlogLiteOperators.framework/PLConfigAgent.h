//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PowerlogCore/PLAgent.h>

@interface PLConfigAgent : PLAgent
{
}

+ (id)entryEventNoneDefinitionPairedDeviceConfig;
+ (id)entryEventNoneDefinitionConfig;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (void)load;
- (void)logEntryToAggD:(id)arg1;
- (unsigned long long)getEnclosureMaterial;
- (void)logEventNonePairedDeviceConfig;
- (void)logEventNoneConfig;
- (void)log;
- (void)dealloc;
- (void)initOperatorDependancies;
- (id)hwBoardRevision;
- (id)hwConfig;
- (id)basebandFirmware;
- (id)baseband;
- (id)deviceName;
- (id)hardwareModelConfig;
- (id)getDeviceNameMacOS;
- (id)deviceShutdownReasons;
- (id)seedGroup;
- (id)logLastBackupTime;
- (double)logDeviceDiskSize;
- (id)logAndUpdateLastUpgradeTime:(id)arg1;
- (id)logAndUpdateLastBuild:(id)arg1;
- (id)logAutomatedDeviceGroup;
- (long long)autolockTime;
- (BOOL)disableCABlanking;
- (BOOL)noWatchdogs;
- (int)getDeviceType;
- (id)bootArgs;
- (id)crashReporterKey;
- (id)buildVersion;
- (id)init;

@end

