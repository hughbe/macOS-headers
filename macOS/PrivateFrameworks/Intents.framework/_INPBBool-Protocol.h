//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBBoolValue;

@protocol _INPBBool <NSObject>
+ (Class)valueType;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(copy, nonatomic) NSArray *values;
- (_INPBBoolValue *)valueAtIndex:(unsigned long long)arg1;
- (void)addValue:(_INPBBoolValue *)arg1;
- (void)clearValues;
@end

