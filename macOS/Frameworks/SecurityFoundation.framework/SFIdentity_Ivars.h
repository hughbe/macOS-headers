//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFIdentityAttributes, _SFCertificate, _SFKeyPair, _SFPublicKey;

__attribute__((visibility("hidden")))
@interface SFIdentity_Ivars : NSObject
{
    _SFPublicKey *publicKey;
    _SFKeyPair *keyPair;
    _SFCertificate *certificate;
    SFIdentityAttributes *attributes;
}

- (void).cxx_destruct;

@end

