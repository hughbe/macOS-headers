//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSData, NSString, PKPaymentApplication, PKPaymentPass, PKWrappedPayment;

@interface PKPaymentRewrapRequestBase : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    PKWrappedPayment *_wrappedPayment;
    NSData *_applicationData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) PKWrappedPayment *wrappedPayment; // @synthesize wrappedPayment=_wrappedPayment;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (id)bodyDictionary;
@property(readonly, nonatomic) NSString *endpointName;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 rewrapData:(id)arg3 appleAccountInformation:(id)arg4;

@end

