//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CFXNotificationRegistrar, _CFXNotificationRegistrationContainer;

__attribute__((visibility("hidden")))
@interface _CFXNotificationRegistrationBase : NSObject
{
    _CFXNotificationRegistrationContainer *_parent;
    struct os_unfair_lock_s _lock;
}

+ (const CDStruct_90be15af *)keyCallbacks;
- (void).cxx_destruct;
- (void)removeFromParent:(unsigned long long)arg1;
- (void)setParent:(id)arg1;
@property(readonly) __weak _CFXNotificationRegistrationContainer *parent;
@property(readonly) void *key;
@property(readonly) _CFXNotificationRegistrar *registrar;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (id)init;

@end

