//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString, PKPeerPaymentDeviceRegistrationData;

@interface PKPeerPaymentServiceRegistrationRequest : PKPeerPaymentWebServiceRequest
{
    NSString *_pushToken;
    PKPeerPaymentDeviceRegistrationData *_deviceData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPeerPaymentDeviceRegistrationData *deviceData; // @synthesize deviceData=_deviceData;
@property(copy, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;

@end

