//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <KeychainCircle/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface OTSponsorToApplicantRound2M2 : PBCodable <NSCopying>
{
    NSData *_voucher;
    NSData *_voucherSignature;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *voucherSignature; // @synthesize voucherSignature=_voucherSignature;
@property(retain, nonatomic) NSData *voucher; // @synthesize voucher=_voucher;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasVoucherSignature;
@property(readonly, nonatomic) BOOL hasVoucher;

@end

