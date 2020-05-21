//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ViewBridge/NSVB_TargetedProxy.h>

@class NSMutableArray;
@protocol NSVBXPCConnectionClient;

__attribute__((visibility("hidden")))
@interface NSVB_QueueingProxy : NSVB_TargetedProxy
{
    unsigned int _wantsResume:1;
    struct os_unfair_lock_s _lock;
    unsigned long long _suspensionCount;
    NSMutableArray *_queuedInvocations;
    CDUnknownBlockType _shouldSuspendInvocationBlock;
    id <NSVBXPCConnectionClient> _connectionClient;
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 connectionClient:(id)arg2 shouldSuspendInvocationBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)description;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)removeAllEnqueuedInvocations;
- (void)resume;
- (void)_dispatchSuspendedMessages;
- (BOOL)isValid;
- (void)suspend;
- (void)setWantsResume:(BOOL)arg1;
- (void)ifWantsResume:(CDUnknownBlockType)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)dealloc;

@end

