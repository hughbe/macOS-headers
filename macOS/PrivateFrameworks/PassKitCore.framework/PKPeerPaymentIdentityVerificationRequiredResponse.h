//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString;

@interface PKPeerPaymentIdentityVerificationRequiredResponse : PKPeerPaymentWebServiceResponse
{
    NSString *_prerequisiteIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *prerequisiteIdentifier; // @synthesize prerequisiteIdentifier=_prerequisiteIdentifier;
- (id)initWithData:(id)arg1;

@end

