//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIdentity-Protocol.h>

@class NSString;
@protocol CRKCertificate, CRKPrivateKey;

@interface CRKInMemoryIdentity : NSObject <CRKIdentity>
{
    id <CRKCertificate> _certificate;
    id <CRKPrivateKey> _privateKey;
}

+ (id)identityWithConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CRKPrivateKey> privateKey; // @synthesize privateKey=_privateKey;
@property(readonly, nonatomic) id <CRKCertificate> certificate; // @synthesize certificate=_certificate;
@property(readonly, nonatomic) struct __SecIdentity *underlyingIdentity;
- (id)initWithCertificate:(id)arg1 privateKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

