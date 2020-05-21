//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextureIO/NSObject-Protocol.h>

@protocol TXRBuffer;

@protocol TXRBufferAllocator <NSObject>
- (id <TXRBuffer>)newBufferWithLength:(unsigned long long)arg1;

@optional
- (id <TXRBuffer>)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 deallocNotification:(void (^)(void *, unsigned long long))arg3 error:(id *)arg4;
@end

