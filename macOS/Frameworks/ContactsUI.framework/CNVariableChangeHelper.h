//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNVariableChangeHelper : NSObject
{
    id _value;
    CDUnknownBlockType _test;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType test; // @synthesize test=_test;
@property(copy, nonatomic) id value; // @synthesize value=_value;
- (void)setValue:(id)arg1 andPerformBlockIfChanged:(CDUnknownBlockType)arg2;
- (id)initWithValue:(id)arg1 test:(CDUnknownBlockType)arg2;
- (id)initWithValue:(id)arg1;
- (id)init;

@end

