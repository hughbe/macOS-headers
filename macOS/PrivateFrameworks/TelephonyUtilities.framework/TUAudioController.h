//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TUAudioController : NSObject
{
    NSObject<OS_dispatch_semaphore> *_modifyingStateLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *modifyingStateLock; // @synthesize modifyingStateLock=_modifyingStateLock;
- (id)init;
- (void)_requestUpdatedValueWithBlock:(CDUnknownBlockType)arg1 object:(id *)arg2 isRequestingPointer:(char *)arg3 forceNewRequest:(BOOL)arg4 scheduleTimePointer:(unsigned long long *)arg5 notificationString:(id)arg6 queue:(id)arg7;
- (void)_releaseLock;
- (void)_acquireLock;

@end

