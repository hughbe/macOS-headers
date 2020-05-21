//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableDictionary, NSString;

@interface PBTextReader : NSObject
{
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_tagNameCharacterSet;
    NSCharacterSet *_nonHexDigitCharacterSet;
    unsigned long long _pos;
    unsigned long long _length;
    NSString *_string;
    NSMutableDictionary *_objects;
    NSMutableDictionary *_cachedObjectTypes;
}

- (id)_readString;
- (id)_parseNumber:(id)arg1 maxValue:(unsigned long long)arg2 isSigned:(BOOL)arg3;
- (id)_readStruct:(id)arg1;
- (id)_readObject:(Class)arg1;
- (id)_readValue;
- (void)_readTag:(id *)arg1 andType:(unsigned long long *)arg2;
- (struct _NSRange)_rangeOfCharactersInSetAtCurrentPosition:(id)arg1;
- (id)_stringAtCurrentPositionWithPadding:(unsigned long long)arg1;
- (id)readMessageType:(Class)arg1 fromString:(id)arg2;
- (BOOL)_hasMore;
- (void)dealloc;
- (id)init;

@end

