//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFoundation/_CFXNotificationTokenRegistration.h>

@class NSObject;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFXNotificationDistributedTokenRegistration : _CFXNotificationTokenRegistration
{
    NSObject<OS_xpc_object> *_connection;
    struct _opaque_pthread_mutex_t _connectionLock;
}

- (void)invalidate;
- (id)initWithToken:(unsigned long long)arg1 connection:(id)arg2 options:(unsigned long long)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end

