//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class CNContact, NSError, PKAccountServicePaymentMethod, PKApplePayTrustSignature, PKAuthorizedPeerPaymentQuote, PKDisbursementVoucher, PKPayment, PKPaymentMethod, PKServiceProviderPurchase, PKShippingMethod;

@protocol PKPaymentAuthorizationHostProtocol <NSObject>
- (void)authorizationDidSelectPaymentMethod:(PKPaymentMethod *)arg1;
- (void)authorizationDidSelectShippingAddress:(CNContact *)arg1;
- (void)authorizationDidSelectShippingMethod:(PKShippingMethod *)arg1;
- (void)authorizationDidUpdateAccountServicePaymentMethod:(PKAccountServicePaymentMethod *)arg1;
- (void)authorizationDidAuthorizeApplePayTrustSignature:(PKApplePayTrustSignature *)arg1;
- (void)authorizationDidAuthorizeDisbursement:(PKDisbursementVoucher *)arg1;
- (void)authorizationDidAuthorizePeerPaymentQuote:(PKAuthorizedPeerPaymentQuote *)arg1;
- (void)authorizationDidAuthorizePurchase:(PKServiceProviderPurchase *)arg1;
- (void)authorizationDidAuthorizePayment:(PKPayment *)arg1;
- (void)authorizationDidAuthorizeContext;
- (void)authorizationDidFinishWithError:(NSError *)arg1;
- (void)authorizationDidRequestMerchantSession;
- (void)authorizationWillStart;

@optional
- (void)didEncounterAuthorizationEvent:(unsigned long long)arg1;
- (void)connectionDidOpen;
- (void)authorizationDidPresent;
@end

