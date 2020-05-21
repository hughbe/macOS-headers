//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TPVoucher : NSObject
{
    unsigned long long _reason;
    NSString *_beneficiaryID;
    NSString *_sponsorID;
    NSData *_data;
    NSData *_sig;
}

+ (id)voucherInfoWithData:(id)arg1 sig:(id)arg2;
+ (id)voucherWithReason:(unsigned long long)arg1 beneficiaryID:(id)arg2 sponsorID:(id)arg3 signingKeyPair:(id)arg4 error:(id *)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *sig; // @synthesize sig=_sig;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *sponsorID; // @synthesize sponsorID=_sponsorID;
@property(retain, nonatomic) NSString *beneficiaryID; // @synthesize beneficiaryID=_beneficiaryID;
@property(nonatomic) unsigned long long reason; // @synthesize reason=_reason;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToVoucher:(id)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)createRecoveryECPublicKey:(id)arg1;
- (BOOL)checkSignatureWithKey:(id)arg1;
- (id)initWithObj:(id)arg1 data:(id)arg2 sig:(id)arg3;

@end

