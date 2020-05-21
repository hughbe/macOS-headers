//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebDriver/RWIApplicationDelegate-Protocol.h>
#import <WebDriver/RWIDrivableDelegate-Protocol.h>
#import <WebDriver/RWIDriverSessionProvider-Protocol.h>
#import <WebDriver/RWIManagerDelegate-Protocol.h>
#import <WebDriver/RWITargetDelegate-Protocol.h>
#import <WebDriver/WDSessionHostDelegate-Protocol.h>

@class NSMutableSet, NSSet, NSString, RWIDriver, SimDeviceSet, SimServiceContext;
@protocol OS_dispatch_queue, WDServiceHost;

@interface WDRemoteSessionManager : NSObject <RWITargetDelegate, RWIApplicationDelegate, RWIDrivableDelegate, RWIDriverSessionProvider, WDSessionHostDelegate, RWIManagerDelegate>
{
    id <WDServiceHost> _serviceHost;
    NSMutableSet *_pendingSessions;
    NSMutableSet *_activeSessions;
    NSObject<OS_dispatch_queue> *_simulatorAccessQueue;
    SimServiceContext *_simulatorService;
    SimDeviceSet *_simulatorDeviceSet;
    RWIDriver *_driver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RWIDriver *driver; // @synthesize driver=_driver;
- (void)hostConnectionTerminated:(id)arg1;
- (id)forwardedCapabilitiesForSession:(id)arg1;
@property(readonly, nonatomic) id <WDServiceHost> serviceHost;
- (void)drivableDidChange:(id)arg1;
- (void)application:(id)arg1 didRemoveDrivable:(id)arg2;
- (void)application:(id)arg1 didAddDrivable:(id)arg2;
- (void)target:(id)arg1 didRemoveApplication:(id)arg2;
- (void)target:(id)arg1 didAddApplication:(id)arg2;
- (void)manager:(id)arg1 didRemoveTarget:(id)arg2;
- (void)manager:(id)arg1 didAddTarget:(id)arg2;
- (void)createSessionWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)findDeviceHostsMatchingCriteria:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_deviceHost:(id)arg1 matchesCriteria:(id)arg2;
- (void)findSimulatorHostsMatchingCriteria:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_simulatorHost:(id)arg1 matchesCriteria:(id)arg2;
- (id)_validateHostCriteria:(id)arg1;
- (void)findMachineHostsMatchingCriteria:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSSet *allSessions;
@property(readonly, copy, nonatomic) NSSet *remoteSessions;
- (id)pendingSessions;
@property(readonly, copy, nonatomic) NSSet *activeSessions;
- (void)_initializeSimulatorSupport;
- (id)initWithDriver:(id)arg1 serviceHost:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

