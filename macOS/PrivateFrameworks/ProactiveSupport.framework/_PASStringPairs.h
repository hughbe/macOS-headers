//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _PASStringPairs : NSObject
{
    NSArray *_keys;
    NSArray *_values;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithKeys:(id)arg1 values:(id)arg2;

@end

