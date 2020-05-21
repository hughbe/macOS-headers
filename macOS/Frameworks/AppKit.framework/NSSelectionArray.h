//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSSelectionArray : NSArray
{
    unsigned long long _count;
}

+ (id)arrayWithObjects:(id *)arg1 count:(unsigned long long)arg2;
+ (id)arrayWithArray:(id)arg1;
+ (id)arrayWithIndexes:(id)arg1;
+ (id)arrayWithRange:(struct _NSRange)arg1;
+ (id)arrayWithRanges:(const struct _NSRange *)arg1 count:(unsigned long long)arg2;
+ (id)newWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
+ (id)newWithArray:(id)arg1;
+ (id)newWithIndexes:(id)arg1;
+ (id)newWithRange:(struct _NSRange)arg1;
+ (id)newWithRanges:(const struct _NSRange *)arg1 count:(unsigned long long)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)enumerateRangesAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateRangesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateRangesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfFirstRangeContainingOrFollowing:(unsigned long long)arg1;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)maximumRange;
- (struct _NSRange)lastRange;
- (struct _NSRange)firstRange;
- (BOOL)isEqualToArray:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithArray:(id)arg1;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)initWithIndexes:(id)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithRanges:(const struct _NSRange *)arg1 count:(unsigned long long)arg2;

@end

