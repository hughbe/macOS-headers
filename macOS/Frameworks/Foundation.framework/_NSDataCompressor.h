//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSDataCompressor : NSObject
{
    struct {
        char *dst_ptr;
        unsigned long long dst_size;
        char *src_ptr;
        unsigned long long src_size;
        void *state;
    } _stream;
    int _operation;
    int _status;
    void *_originalDstBuffer;
    CDUnknownBlockType _dataHandler;
}

- (BOOL)processBytes:(char *)arg1 size:(unsigned long long)arg2 flags:(int)arg3;
- (BOOL)finishProcessing;
- (BOOL)processBytes:(char *)arg1 size:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithAlgorithm:(long long)arg1 operation:(int)arg2 dataHandler:(CDUnknownBlockType)arg3;

@end

