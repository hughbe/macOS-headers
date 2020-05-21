//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator;
@protocol OS_dispatch_queue;

@interface PDDeviceRegistrationServiceCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_registrationTasks;
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PDPeerPaymentWebServiceCoordinator *peerPaymentWebServiceCoordinator; // @synthesize peerPaymentWebServiceCoordinator=_peerPaymentWebServiceCoordinator;
@property(readonly, nonatomic) PDPaymentWebServiceCoordinator *paymentWebServiceCoordinator; // @synthesize paymentWebServiceCoordinator=_paymentWebServiceCoordinator;
- (BOOL)_shouldAttemptBackgroundPeerPaymentRegistration;
- (void)_handlePaymentWebServiceContextChanged:(id)arg1;
- (void)_canAutomaticallyRegisterWithWebService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_peerPaymentRegisterWithURL:(id)arg1 paymentWebService:(id)arg2 forceRegister:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleDeviceRegistrationCompletedWithResult:(unsigned long long)arg1;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceApplePayRegister:(BOOL)arg2 forcePeerPaymentRegister:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_performDeviceRegistrationWithReason:(id)arg1 forceApplePayRegister:(BOOL)arg2 forcePeerPaymentRegister:(BOOL)arg3;
- (void)performDeviceRegistrationForReason:(id)arg1 action:(long long)arg2 forceApplePayRegister:(BOOL)arg3 forcePeerPaymentRegister:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)notePasscodeChanged;
- (void)dealloc;
- (id)initWithPaymentWebServiceCoordinator:(id)arg1 peerPaymentWebServiceCoordinator:(id)arg2;
- (id)init;

@end

