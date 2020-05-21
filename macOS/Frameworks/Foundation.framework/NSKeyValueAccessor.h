//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSKeyValueAccessor : NSObject
{
    id _containerClassID;
    NSString *_key;
    unsigned long long _hash;
    CDUnknownFunctionPointerType _implementation;
    SEL _selector;
    unsigned long long _extraArgumentCount;
    void *_extraArgument1;
    void *_extraArgument2;
    void *_extraArgument3;
}

- (void *)extraArgument2;
- (void *)extraArgument1;
- (unsigned long long)extraArgumentCount;
- (id)key;
- (SEL)selector;
- (id)containerClassID;
- (void)dealloc;
- (id)initWithContainerClassID:(id)arg1 key:(id)arg2 implementation:(CDUnknownFunctionPointerType)arg3 selector:(SEL)arg4 extraArguments:(void *[3])arg5 count:(unsigned long long)arg6;

@end

