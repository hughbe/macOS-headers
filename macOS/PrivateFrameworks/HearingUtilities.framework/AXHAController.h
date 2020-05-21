//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingUtilities/AXIDCControllerBrowserDelegateProtocol-Protocol.h>

@class HCXPCMessage, NSDictionary, NSString;
@protocol OS_os_transaction;

@interface AXHAController : NSObject <AXIDCControllerBrowserDelegateProtocol>
{
    BOOL _isListening;
    NSString *_pairedDeviceUUID;
    NSObject<OS_os_transaction> *_transaction;
    NSDictionary *_availableDevicesDescription;
    HCXPCMessage *_liveListenMessage;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(retain, nonatomic) HCXPCMessage *liveListenMessage; // @synthesize liveListenMessage=_liveListenMessage;
@property(retain, nonatomic) NSDictionary *availableDevicesDescription; // @synthesize availableDevicesDescription=_availableDevicesDescription;
@property(retain, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) NSString *pairedDeviceUUID; // @synthesize pairedDeviceUUID=_pairedDeviceUUID;
- (id)disconnectAndForceSlave:(id)arg1;
- (id)connectToControllerWithID:(id)arg1;
- (id)readAvailableControllers:(id)arg1;
- (id)readAvailableDevices:(id)arg1;
- (void)updateNearbyDeviceAvailability;
- (id)writeDeviceProperty:(id)arg1;
- (void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2;
- (id)readDeviceProperty:(id)arg1;
- (id)registerForDeviceUpdates:(id)arg1;
- (id)registerForAvailableDevicesUpdates:(id)arg1;
- (void)availableRemoteControllersDidChange;
- (void)passConnectionToController:(id)arg1 withReason:(long long)arg2;
- (void)connectToPairedDevice;
- (void)trustChainAvailabilityDidChange:(id)arg1;
- (void)startSearchCycle;
- (void)setPairedHearingAid:(id)arg1;
- (void)setListenForAvailableDeviceUpdates:(BOOL)arg1;
- (BOOL)hearingAidsPaired;
- (id)currentDeviceController;
- (void)willSwitchUser;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

