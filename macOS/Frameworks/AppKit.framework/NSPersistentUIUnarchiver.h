//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCoder.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSPersistentUIUnarchiver : NSCoder
{
    NSArray *_unarchivers;
}

@property(copy, setter=_setUnarchivers:) NSArray *_unarchivers; // @synthesize _unarchivers;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (BOOL)containsValueForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (BOOL)decodeBoolForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (void)finishDecoding;
- (void)dealloc;
- (id)_subcoderWithValueForKey:(id)arg1;
- (BOOL)allowsKeyedCoding;

@end

