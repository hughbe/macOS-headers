//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class PKAppletSubcredential, PKPaymentPass;

@interface PKPaymentLocalAppletSubcredentialPassCredential : PKPaymentCredential
{
    PKPaymentPass *_paymentPass;
    PKAppletSubcredential *_credentialToShare;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKAppletSubcredential *credentialToShare; // @synthesize credentialToShare=_credentialToShare;
@property(readonly, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
- (id)initWithPaymentPass:(id)arg1 credentialToShare:(id)arg2;

@end

