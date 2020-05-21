//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReader/NSCopying-Protocol.h>
#import <ScreenReader/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface SCROffsetMappedString : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableAttributedString *__mutableAttributedString;
    NSMutableArray *__offsetMapArray;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=_setOffsetMapArray:) NSMutableArray *_offsetMapArray; // @synthesize _offsetMapArray=__offsetMapArray;
@property(retain, nonatomic, setter=_setMutableAttributedString:) NSMutableAttributedString *_mutableAttributedString; // @synthesize _mutableAttributedString=__mutableAttributedString;
- (void)_replaceRange:(struct _NSRange)arg1 withLength:(long long)arg2;
- (id)_initWithSCROffsetMappedString:(id)arg1;
- (void)setOriginalAttributedString:(id)arg1;
- (void)setOriginalString:(id)arg1;
- (long long)originalOffsetForCharacterIndex:(long long)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)substringWithRange:(struct _NSRange)arg1;
- (int)character32AtIndex:(unsigned long long)arg1 returningNumberOfComposedChars:(unsigned long long *)arg2;
- (id)composedCharacterAtIndex:(unsigned int)arg1;
- (unsigned long long)length;
- (id)attributedString;
- (id)string;
- (void)appendOffsetMappedString:(id)arg1;
- (void)appendAttributedString:(id)arg1;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendString:(id)arg1;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)addAttributes:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)description;
- (BOOL)replaceRegex:(struct URegularExpression *)arg1 withString:(id)arg2 withAttributes:(id)arg3;

@end

