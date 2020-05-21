//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface _DASPriorityQueue : NSObject
{
    unsigned long long _count;
    NSMutableDictionary *_objects;
    NSNumber *_lowestPriority;
    NSNumber *_highestPriority;
}

+ (id)priorityQueue;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *highestPriority; // @synthesize highestPriority=_highestPriority;
@property(retain, nonatomic) NSNumber *lowestPriority; // @synthesize lowestPriority=_lowestPriority;
@property(retain, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)description;
- (id)allObjects;
- (void)removeObject:(id)arg1 atPriority:(unsigned long long)arg2;
- (id)popLast;
- (id)popFirst;
- (void)addObject:(id)arg1 withPriority:(unsigned long long)arg2;
- (id)init;

@end

