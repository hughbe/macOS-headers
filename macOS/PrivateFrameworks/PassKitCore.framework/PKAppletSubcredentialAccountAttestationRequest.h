//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountAttestationRequest.h>

@class NSData;

@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest
{
    NSData *_subCASEResidencyAttestation;
    NSData *_sharingToken;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *sharingToken; // @synthesize sharingToken=_sharingToken;
@property(copy, nonatomic) NSData *subCASEResidencyAttestation; // @synthesize subCASEResidencyAttestation=_subCASEResidencyAttestation;
- (id)initWithRequestData:(id)arg1;

@end

