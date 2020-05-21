//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface IDSXPCConnectionRemoteObjectPromise : NSObject
{
    NSXPCInterface *_interface;
    NSMutableArray *_pendingInvocations;
    id _target;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) NSMutableArray *pendingInvocations; // @synthesize pendingInvocations=_pendingInvocations;
@property(retain, nonatomic) NSXPCInterface *interface; // @synthesize interface=_interface;
- (void)_assertVoidReturnValueInInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)remoteObjectProxy;
- (void)failWithError:(id)arg1;
- (void)fulfillWithRemoteObject:(id)arg1;
- (void)dealloc;
- (id)initWithInterface:(id)arg1 queue:(id)arg2;

@end

