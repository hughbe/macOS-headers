//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INCurrencyAmount, INPerson, NSString;

@protocol INRequestPaymentIntentExport <NSObject, JSExport>
@property(copy) NSString *note;
@property(copy) INCurrencyAmount *currencyAmount;
@property(copy) INPerson *payer;
- (id)init;
@end

