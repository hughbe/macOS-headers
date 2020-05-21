//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface PKApplePayTrustKey : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSData *_signedEnrollmentData;
    NSData *_publicKeyHash;
    NSData *_certificate;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *certificate; // @synthesize certificate=_certificate;
@property(readonly, copy, nonatomic) NSData *publicKeyHash; // @synthesize publicKeyHash=_publicKeyHash;
@property(readonly, copy, nonatomic) NSData *signedEnrollmentData; // @synthesize signedEnrollmentData=_signedEnrollmentData;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

