//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData;

@protocol CUByteCodable
+ (id)createWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (NSData *)encodedDataAndReturnError:(id *)arg1;
- (const char *)encodedBytesAndReturnLength:(unsigned long long *)arg1 error:(id *)arg2;
@end

