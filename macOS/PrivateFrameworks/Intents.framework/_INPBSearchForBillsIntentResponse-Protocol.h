//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBBillDetailsValue;

@protocol _INPBSearchForBillsIntentResponse <NSObject>
+ (Class)billsType;
@property(readonly, nonatomic) unsigned long long billsCount;
@property(copy, nonatomic) NSArray *bills;
- (_INPBBillDetailsValue *)billsAtIndex:(unsigned long long)arg1;
- (void)addBills:(_INPBBillDetailsValue *)arg1;
- (void)clearBills;
@end

