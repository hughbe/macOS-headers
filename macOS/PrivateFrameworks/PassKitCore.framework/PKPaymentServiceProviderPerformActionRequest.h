//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionRequest : PKPaymentWebServiceRequest
{
    NSString *_action;
    PKServiceProviderPurchase *_purchase;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;
- (id)initWithAction:(id)arg1 purchase:(id)arg2;

@end

