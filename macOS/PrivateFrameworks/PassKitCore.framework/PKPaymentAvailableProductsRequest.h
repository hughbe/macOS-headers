//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest
{
    BOOL _ignoreCache;
    NSString *_type;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3;
- (id)initWithType:(id)arg1;

@end

