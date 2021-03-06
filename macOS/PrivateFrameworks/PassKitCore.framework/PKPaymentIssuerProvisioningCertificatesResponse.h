//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSData;

@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse
{
    NSArray *_certificates;
    NSData *_nonce;
    NSData *_publicKeyHash;
    NSData *_nonceSignature;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *nonceSignature; // @synthesize nonceSignature=_nonceSignature;
@property(copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(readonly, copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(readonly, copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (id)initWithData:(id)arg1;

@end

