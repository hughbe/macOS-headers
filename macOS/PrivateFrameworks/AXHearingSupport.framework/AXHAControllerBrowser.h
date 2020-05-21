//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXHearingSupport/AXIDCManager.h>

#import <AXHearingSupport/AXHADeviceControllerProtocol-Protocol.h>
#import <AXHearingSupport/AXIDCRemoteControllerDelegate-Protocol.h>
#import <AXHearingSupport/NSNetServiceBrowserDelegate-Protocol.h>

@class AXHearingSlaveController, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol AXIDCManagerSecurityDelegate, OS_dispatch_queue;

@interface AXHAControllerBrowser : AXIDCManager <NSNetServiceBrowserDelegate, AXIDCRemoteControllerDelegate, AXHADeviceControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_deviceUpdatesQueue;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXHearingSlaveController *_slaveController;
    NSMutableArray *_updateDeviceBlocks;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *updateDeviceBlocks; // @synthesize updateDeviceBlocks=_updateDeviceBlocks;
@property(retain, nonatomic) AXHearingSlaveController *slaveController; // @synthesize slaveController=_slaveController;
- (void)writePayload:(id)arg1 toControllers:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forControllers:(id)arg3;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
- (void)stopPropertyUpdates;
- (void)registerForPropertyUpdates:(CDUnknownBlockType)arg1;
- (void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
- (void)controllerDidFinishConnecting:(id)arg1;
- (void)controller:(id)arg1 didFinishSendingData:(id)arg2;
- (void)controller:(id)arg1 didReceiveData:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (BOOL)shouldRelinquishConnectionForReason:(long long)arg1;
- (void)resolveMasterWithCompletion:(CDUnknownBlockType)arg1;
- (void)becomeMaster;
- (BOOL)shouldBecomeMaster;
- (void)repairSplitConnection;
- (void)logWifiName;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) id <AXIDCManagerSecurityDelegate> securityDelegate;
@property(readonly) Class superclass;

@end

