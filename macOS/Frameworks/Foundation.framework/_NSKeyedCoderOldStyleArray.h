//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSKeyedCoderOldStyleArray : NSObject
{
    void *_addr;
    unsigned long long _count;
    unsigned long long _size;
    BOOL _type;
    BOOL _decoded;
    char _padding[2];
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)fillObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(void *)arg3;
- (void)dealloc;
- (id)initWithObjCType:(BOOL)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;

@end

