//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKRemoteObject : NSObject
{
    struct RetainPtr<_WKRemoteObjectRegistry> _objectRegistry;
    struct RetainPtr<_WKRemoteObjectInterface> _interface;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2;

@end

