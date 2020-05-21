//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString, NSURL, PKPaymentRemoteCredential;

@interface PKAccountWebServicePassDetailsResponse : PKAccountWebServiceResponse
{
    NSString *_provisioningIdentifier;
    long long _cardType;
    long long _status;
    NSURL *_passURL;
    NSString *_passTypeIdentifier;
    NSString *_passSerialNumber;
    NSString *_ownershipTokenIdentifier;
    NSArray *_postProvisioningContent;
    PKPaymentRemoteCredential *_remoteCredential;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PKPaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;
@property(readonly, nonatomic) NSArray *postProvisioningContent; // @synthesize postProvisioningContent=_postProvisioningContent;
@property(readonly, copy, nonatomic) NSString *ownershipTokenIdentifier; // @synthesize ownershipTokenIdentifier=_ownershipTokenIdentifier;
@property(readonly, copy, nonatomic) NSString *passSerialNumber; // @synthesize passSerialNumber=_passSerialNumber;
@property(readonly, copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(readonly, copy, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(readonly, copy, nonatomic) NSString *provisioningIdentifier; // @synthesize provisioningIdentifier=_provisioningIdentifier;
- (id)initWithData:(id)arg1;

@end

