//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSString, NSURL, PKAccountPaymentFundingSource, PKAccountWebServiceCertificatesResponse;

@interface PKAccountWebServiceAddFundingSourceRequest : PKAccountWebServiceRequest
{
    NSString *_accountIdentifier;
    NSURL *_baseURL;
    PKAccountPaymentFundingSource *_fundingSource;
    NSString *_fundingSourceTermsIdentifier;
    PKAccountWebServiceCertificatesResponse *_certificatesResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse; // @synthesize certificatesResponse=_certificatesResponse;
@property(retain, nonatomic) NSString *fundingSourceTermsIdentifier; // @synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier;
@property(retain, nonatomic) PKAccountPaymentFundingSource *fundingSource; // @synthesize fundingSource=_fundingSource;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

