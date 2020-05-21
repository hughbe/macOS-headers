//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PCDispatchTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _fireTime;
    NSDate *_fireDate;
    CUTWeakReference *_target;
    SEL _selector;
    BOOL _isValid;
}

- (void).cxx_destruct;
- (void)invalidate;
@property(retain, nonatomic) NSDate *fireDate;
- (void)start;
- (void)_cleanupTimer;
@property(readonly, nonatomic) BOOL isValid;
- (void)_callTarget;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 target:(id)arg2 selector:(SEL)arg3 fireTime:(unsigned long long)arg4;

@end

