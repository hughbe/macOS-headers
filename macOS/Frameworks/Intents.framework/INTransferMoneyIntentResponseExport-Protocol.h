//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INCurrencyAmount, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@protocol INTransferMoneyIntentResponseExport <NSObject, JSExport>
@property(copy) INCurrencyAmount *transferFee;
@property(copy) NSString *transactionNote;
@property(copy) INDateComponentsRange *transactionScheduledDate;
@property(copy) INPaymentAmount *transactionAmount;
@property(copy) INPaymentAccount *toAccount;
@property(copy) INPaymentAccount *fromAccount;
@property(readonly) long long code;
@end

