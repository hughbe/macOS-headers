//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class NSObject, NSProtocolChecker;
@protocol OS_dispatch_queue;

@interface IDSDaemonControllerForwarder : NSProxy
{
    NSProtocolChecker *_protocol;
    CDUnknownBlockType _completion;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    int _priority;
}

- (void).cxx_destruct;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteMessageQueue; // @synthesize remoteMessageQueue=_remoteMessageQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSProtocolChecker *protocol; // @synthesize protocol=_protocol;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithProtocol:(id)arg1 ivarQueue:(id)arg2 remoteMessageQueue:(id)arg3;

@end

