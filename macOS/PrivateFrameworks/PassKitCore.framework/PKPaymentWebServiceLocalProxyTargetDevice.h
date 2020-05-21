//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceArchiver-Protocol.h>
#import <PassKitCore/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PKPaymentWebServiceLocalProxyTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol, PKPaymentWebServiceArchiver>
{
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSXPCConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)archiveBackgroundContext:(id)arg1;
- (void)archiveContext:(id)arg1;
- (void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3;
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;
- (BOOL)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (id)supportedFeatureIdentifiersForAccountProvisioningWithPaymentWebService:(id)arg1;
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;
- (BOOL)paymentWebServiceSupportsAccounts:(id)arg1;
- (BOOL)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)claimSecureElementForCurrentUser;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (BOOL)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (BOOL)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg2;
- (void)endRequiringUpgradedPasscodeIfNecessary;
- (void)startRequiringUpgradedPasscodeWithPasscodeMeetsPolicy:(BOOL)arg1;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;
- (void)notePasscodeUpgradeFlowDidEnd;
- (void)notePasscodeUpgradeFlowWillBeginWithCompletion:(CDUnknownBlockType)arg1;
- (id)secureElementIdentifiers;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningDidBegin;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (BOOL)supportsAutomaticPassPresentation;
- (id)deviceRegion;
- (id)osVersion;
- (id)deviceVersion;
- (id)deviceClass;
- (id)bridgedClientInfo;
- (id)deviceName;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (int)registrationSupportedInCurrentRegionForWebService:(id)arg1;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (id)appleAccountInformation;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (void)contextWithCompletion:(CDUnknownBlockType)arg1;
- (id)context;
- (id)_synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_synchronousProxy;
- (id)_proxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_proxy;
- (void)_invalidateConnection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

