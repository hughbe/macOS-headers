//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDecimalNumber, NSString;

@interface INBalanceAmount : NSObject <NSCopying, NSSecureCoding>
{
    NSDecimalNumber *_amount;
    long long _balanceType;
    NSString *_currencyCode;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(readonly) long long balanceType; // @synthesize balanceType=_balanceType;
@property(readonly, copy) NSDecimalNumber *amount; // @synthesize amount=_amount;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAmount:(id)arg1 balanceType:(long long)arg2 currencyCode:(id)arg3;
- (id)initWithAmount:(id)arg1 currencyCode:(id)arg2;
- (id)initWithAmount:(id)arg1 balanceType:(long long)arg2;

@end

