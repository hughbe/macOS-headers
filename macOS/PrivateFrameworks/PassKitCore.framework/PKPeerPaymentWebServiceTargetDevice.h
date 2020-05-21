//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPeerPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NSString, PKPeerPaymentService;
@protocol PKPeerPaymentRegistrationDelegate;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol>
{
    PKPeerPaymentService *_peerPaymentService;
    id <PKPeerPaymentRegistrationDelegate> _registrationDelegate;
}

- (void).cxx_destruct;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)appleAccountInformation;
- (void)_handleAccountChangedNotification:(id)arg1;
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithHandler:(CDUnknownBlockType)arg1;
- (void)initalizeCloudStoreIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)arg1 credential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setUserHasDisabledPeerPayment:(BOOL)arg1;
- (BOOL)userHasDisabledPeerPayment;
- (id)secureElementIdentifiers;
- (id)bridgedClientInfo;
- (id)deviceRegion;
- (void)updateAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)account;
- (void)downloadPassIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)peerPaymentReRegisterWithURL:(id)arg1 pushToken:(id)arg2 peerPaymentWebService:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithRegistrationDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

