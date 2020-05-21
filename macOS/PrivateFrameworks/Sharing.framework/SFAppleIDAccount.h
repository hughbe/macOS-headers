//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString, SFAppleIDContactInfo, SFAppleIDIdentity, SFAppleIDValidationRecord;

@interface SFAppleIDAccount : NSObject <NSSecureCoding>
{
    NSString *_altDSID;
    NSString *_appleID;
    NSString *_certificateToken;
    NSDate *_certificateTokenCreationDate;
    SFAppleIDContactInfo *_contactInfo;
    NSDate *_creationDate;
    SFAppleIDIdentity *_identity;
    NSData *_privateKeyPersistentReference;
    SFAppleIDValidationRecord *_validationRecord;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) SFAppleIDValidationRecord *validationRecord; // @synthesize validationRecord=_validationRecord;
@property(retain, nonatomic) NSData *privateKeyPersistentReference; // @synthesize privateKeyPersistentReference=_privateKeyPersistentReference;
@property(retain, nonatomic) SFAppleIDIdentity *identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) SFAppleIDContactInfo *contactInfo; // @synthesize contactInfo=_contactInfo;
@property(retain, nonatomic) NSDate *certificateTokenCreationDate; // @synthesize certificateTokenCreationDate=_certificateTokenCreationDate;
@property(retain, nonatomic) NSString *certificateToken; // @synthesize certificateToken=_certificateToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithAppleID:(id)arg1;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

