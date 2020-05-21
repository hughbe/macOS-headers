//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLSilo.h>

@class CLRunLoopSiloThread;

@interface CLRunLoopSilo : CLSilo
{
    double _currentLatchedAbsoluteTimestamp;
    CLRunLoopSiloThread *_siloThread;
}

- (void).cxx_destruct;
- (id)debugDescription;
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;
- (void)sync:(CDUnknownBlockType)arg1;
- (void)async:(CDUnknownBlockType)arg1;
- (id)newTimer;
- (double)currentLatchedAbsoluteTimestamp;
- (void)updateLatchedAbsoluteTimestamp;
- (void)resume;
- (void)suspend;
- (void)assertOutside;
- (void)assertInside;
- (id)getTimeCoercibleVariantInstance;
- (id)runloop;
- (id)initWithUnderlyingRunLoop:(struct __CFRunLoop *)arg1;
- (id)initWithCurrentRunLoopAndIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

