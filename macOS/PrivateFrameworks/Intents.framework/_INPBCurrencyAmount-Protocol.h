//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBCurrencyAmountValue;

@protocol _INPBCurrencyAmount <NSObject>
+ (Class)valueType;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(copy, nonatomic) NSArray *values;
- (_INPBCurrencyAmountValue *)valueAtIndex:(unsigned long long)arg1;
- (void)addValue:(_INPBCurrencyAmountValue *)arg1;
- (void)clearValues;
@end

