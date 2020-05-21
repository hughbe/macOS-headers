//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCService.h>

#import <PassKitCore/PDDeviceRegistrationServiceExportedInterface-Protocol.h>

@class NSString, PDDeviceRegistrationServiceCoordinator, PKEntitlementWhitelist;

@interface PDDeviceRegistrationService : PDXPCService <PDDeviceRegistrationServiceExportedInterface>
{
    PKEntitlementWhitelist *_whitelist;
    PDDeviceRegistrationServiceCoordinator *_deviceRegistrationServiceCoordinator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PDDeviceRegistrationServiceCoordinator *deviceRegistrationServiceCoordinator; // @synthesize deviceRegistrationServiceCoordinator=_deviceRegistrationServiceCoordinator;
- (void)performDeviceRegistrationForReason:(id)arg1 actionType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

