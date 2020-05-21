//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableData.h>

@interface IOBufferMutableData : NSMutableData
{
    void *_bytes;
    unsigned long long _length;
    CDUnknownBlockType _deallocator;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType deallocator; // @synthesize deallocator=_deallocator;
- (void *)mutableBytes;
- (const void *)bytes;
- (void)setLength:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocator:(CDUnknownBlockType)arg3;

@end

