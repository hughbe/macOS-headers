//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBContact, _INPBCurrencyAmount, _INPBIntentMetadata, _INPBString;

@protocol _INPBSendPaymentIntent <NSObject>
@property(readonly, nonatomic) BOOL hasPayee;
@property(retain, nonatomic) _INPBContact *payee;
@property(readonly, nonatomic) BOOL hasNote;
@property(retain, nonatomic) _INPBString *note;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasCurrencyAmount;
@property(retain, nonatomic) _INPBCurrencyAmount *currencyAmount;
@end

