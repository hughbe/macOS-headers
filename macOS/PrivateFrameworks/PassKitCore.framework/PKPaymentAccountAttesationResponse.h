//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentAccountAttesationResponse : PKPaymentWebServiceResponse
{
    NSData *_attestation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *attestation; // @synthesize attestation=_attestation;
- (id)initWithData:(id)arg1;

@end

