//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSData;

@interface PKPaymentNonceResponse : PKPaymentWebServiceResponse
{
    NSData *_nonceData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
- (id)initWithData:(id)arg1;

@end

