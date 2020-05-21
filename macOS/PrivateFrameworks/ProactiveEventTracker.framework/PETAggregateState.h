//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETAggregateStateStorage;

@interface PETAggregateState : NSObject
{
    PETAggregateStateStorage *_storage;
    CDStruct_9981aeec _rng;
}

+ (unsigned char)hashForString:(id)arg1;
- (void).cxx_destruct;
- (BOOL)checkIntegrity;
- (id)description;
- (void)enumerateAndResetCounters:(CDUnknownBlockType)arg1 distributions:(CDUnknownBlockType)arg2;
- (void)reset;
- (void)enumerateCounters:(CDUnknownBlockType)arg1 distributions:(CDUnknownBlockType)arg2;
- (void)updateDistributionWithValue:(double)arg1 forKey:(id)arg2 maxSampleSize:(unsigned short)arg3;
- (void)incrementCounterBy:(double)arg1 forKey:(id)arg2;
- (void)updateDistributionWithValue:(double)arg1 forKey:(const void *)arg2 keyLength:(unsigned short)arg3 maxSampleSize:(unsigned short)arg4;
- (void)incrementCounterBy:(double)arg1 forKey:(const void *)arg2 keyLength:(unsigned short)arg3;
- (id)initWithPath:(id)arg1;
- (id)initInMemory;
- (id)initWithStorage:(id)arg1;
- (id)init;

@end

