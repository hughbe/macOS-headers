//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKSubcredentialProvisioningConfiguration.h>

@class PKCredentialRegistrationMetadata, PKPaymentWebService;

@interface PKSubcredentialProvisioningLocalDeviceConfiguration : PKSubcredentialProvisioningConfiguration
{
    PKPaymentWebService *_webService;
    PKCredentialRegistrationMetadata *_registrationMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKCredentialRegistrationMetadata *registrationMetadata; // @synthesize registrationMetadata=_registrationMetadata;
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
- (id)initWithWebService:(id)arg1 registrationMetadata:(id)arg2 configurationType:(long long)arg3;

@end

