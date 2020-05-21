//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSMutableDataObjcTypeSerialization)
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
+ (id)dataWithLength:(unsigned long long)arg1;
+ (id)dataWithCapacity:(unsigned long long)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)serializeDataAt:(const void *)arg1 ofObjCType:(const char *)arg2 context:(id)arg3;
- (id)initWithLength:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)setData:(id)arg1;
- (void)resetBytesInRange:(struct _NSRange)arg1;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;
- (void)increaseLengthBy:(unsigned long long)arg1;
- (void)appendData:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;
- (BOOL)_isCompact;
- (Class)classForCoder;
- (void)setLength:(unsigned long long)arg1;
- (void *)mutableBytes;
- (BOOL)decompressUsingAlgorithm:(long long)arg1 error:(id *)arg2;
- (BOOL)compressUsingAlgorithm:(long long)arg1 error:(id *)arg2;
- (void)serializeAlignedBytes:(void *)arg1 length:(unsigned int)arg2;
- (void)serializeAlignedBytesLength:(unsigned int)arg1;
- (void)serializeInts:(int *)arg1 count:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (void)serializeInt:(int)arg1 atIndex:(unsigned int)arg2;
- (void)serializeInts:(int *)arg1 count:(unsigned int)arg2;
- (void)serializeInt:(int)arg1;
@end

