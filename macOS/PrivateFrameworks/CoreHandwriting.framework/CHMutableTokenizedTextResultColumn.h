//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHTokenizedTextResultColumn.h>

@class NSArray;

@interface CHMutableTokenizedTextResultColumn : CHTokenizedTextResultColumn
{
}

- (id)_mutableTokenRows;
- (void)sortTokenRows;
- (void)removeTokenRowAtIndex:(long long)arg1;
- (long long)addTokenRowWithTokens:(id)arg1;
@property(copy, nonatomic) NSArray *tokenRows; // @dynamic tokenRows;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTokenRows:(id)arg1;

@end

