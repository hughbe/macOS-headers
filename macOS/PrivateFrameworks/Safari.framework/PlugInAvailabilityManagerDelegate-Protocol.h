//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ManagedPlugIn, PlugInAvailabilityManager;

@protocol PlugInAvailabilityManagerDelegate
- (void)plugInAvailabilityManagerDidDetectFlashInstallerDidTerminate:(PlugInAvailabilityManager *)arg1;
- (BOOL)plugInAvailabilityManager:(PlugInAvailabilityManager *)arg1 shouldPromptToManagePlugIn:(ManagedPlugIn *)arg2;
- (void)plugInAvailabilityManagerDidUpdatePlugInsState:(PlugInAvailabilityManager *)arg1;
@end

