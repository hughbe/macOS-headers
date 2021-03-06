//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/PKExtensionBaseContext.h>

#import <PassKit/PKExtensionHostContextProtocol-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_group, PKPaymentAuthorizationHostProtocol;

@interface PKExtensionHostContext : PKExtensionBaseContext <PKExtensionHostContextProtocol>
{
    id <PKPaymentAuthorizationHostProtocol> _delegate;
    NSObject<OS_dispatch_group> *_delayCallbacksGroup;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *delayCallbacksGroup; // @synthesize delayCallbacksGroup=_delayCallbacksGroup;
@property(nonatomic) __weak id <PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(id)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(id)arg1;
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)authorizationDidPresent;
- (void)authorizationDidSelectPaymentMethod:(id)arg1;
- (void)authorizationDidSelectShippingAddress:(id)arg1;
- (void)authorizationDidSelectShippingMethod:(id)arg1;
- (void)authorizationDidAuthorizeDisbursement:(id)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(id)arg1;
- (void)authorizationDidAuthorizePurchase:(id)arg1;
- (void)authorizationDidAuthorizePayment:(id)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationDidFinishWithError:(id)arg1;
- (void)authorizationWillStart;
- (void)endDelayingCallbacks;
- (void)beginDelayingCallbacks;
- (id)vendorContextWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)vendorContext;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

