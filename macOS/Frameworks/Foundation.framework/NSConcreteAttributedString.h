//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@class NSRLEArray, NSString;

@interface NSConcreteAttributedString : NSAttributedString
{
    NSString *string;
    NSRLEArray *attributes;
}

- (id)_runArrayHoldingAttributes;
- (id)string;
- (unsigned long long)length;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithString:(id)arg1;

@end

