//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult
{
    NSRegularExpression *_regularExpression;
    struct _NSRange _ranges[3];
}

- (id)rangeArray;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfRanges;
- (BOOL)_adjustRangesWithOffset:(long long)arg1;
- (struct _NSRange)range;
- (id)regularExpression;
- (void)dealloc;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;

@end

