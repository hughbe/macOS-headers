//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray;

@interface PKAccountWebServiceSchedulePaymentResponse : PKAccountWebServiceResponse
{
    NSArray *_payments;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *payments; // @synthesize payments=_payments;
- (id)initWithData:(id)arg1 account:(id)arg2;

@end

