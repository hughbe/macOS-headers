//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _SCRCThreadTask : NSObject
{
    id _target;
    SEL _selector;
    NSConditionLock *_waitLock;
    unsigned int _mask;
    NSMutableArray *_objectArray;
}

+ (id)newThreadTaskWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;
- (void).cxx_destruct;
- (void)fire;
- (void)setWaitLock:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(struct __va_list_tag [1])arg6;

@end

