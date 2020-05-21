//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBBillDetailsValue-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBCurrencyAmountValue, _INPBDateTime, _INPBValueMetadata;

@interface _INPBBillDetailsValue : PBCodable <_INPBBillDetailsValue, NSSecureCoding, NSCopying>
{
    CDStruct_c8e9def3 _has;
    BOOL __encodeLegacyGloryData;
    int _billType;
    int _status;
    _INPBCurrencyAmountValue *_amountDue;
    _INPBBillPayeeValue *_billPayee;
    _INPBDateTime *_dueDate;
    _INPBCurrencyAmountValue *_lateFee;
    _INPBCurrencyAmountValue *_minimumDue;
    _INPBDateTime *_paymentDate;
    _INPBValueMetadata *_valueMetadata;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(retain, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) _INPBDateTime *paymentDate; // @synthesize paymentDate=_paymentDate;
@property(retain, nonatomic) _INPBCurrencyAmountValue *minimumDue; // @synthesize minimumDue=_minimumDue;
@property(retain, nonatomic) _INPBCurrencyAmountValue *lateFee; // @synthesize lateFee=_lateFee;
@property(retain, nonatomic) _INPBDateTime *dueDate; // @synthesize dueDate=_dueDate;
@property(nonatomic) int billType; // @synthesize billType=_billType;
@property(retain, nonatomic) _INPBBillPayeeValue *billPayee; // @synthesize billPayee=_billPayee;
@property(retain, nonatomic) _INPBCurrencyAmountValue *amountDue; // @synthesize amountDue=_amountDue;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasValueMetadata;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(readonly, nonatomic) BOOL hasPaymentDate;
@property(readonly, nonatomic) BOOL hasMinimumDue;
@property(readonly, nonatomic) BOOL hasLateFee;
@property(readonly, nonatomic) BOOL hasDueDate;
- (int)StringAsBillType:(id)arg1;
- (id)billTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasBillType;
@property(readonly, nonatomic) BOOL hasBillPayee;
@property(readonly, nonatomic) BOOL hasAmountDue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

